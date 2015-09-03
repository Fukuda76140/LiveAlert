#include "live_alert.h"
#include "ui_live_alert.h"
#include "QMessageBox"
#include "QSettings"
#include "QTableWidget"
#include "QtNetwork/QNetworkAccessManager"
#include "QUrl"
#include "QJsonDocument"
#include "QJsonObject"
#include "QSslSocket"
#include "QTimer"
#include "QSystemTrayIcon"
#include "QDebug"
#include "windows.h"
#include "QMenu"
#include "QAction"
#include "QDesktopServices"

live_alert::live_alert(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::live_alert)
{
    ui->setupUi(this);
    ui->le_url->hide();


    // Création d'une icone systray

    notifyIcon = new QSystemTrayIcon(this);
    notifyIcon->setIcon(QIcon("icone.png"));
    notifyIcon->show();

    // Création d'un menu pour le systray

    QMenu* menu = new QMenu(this);

    QAction* stray_show = new QAction("Afficher", this);
    QAction* stray_quitter = new QAction("Quitter", this);


    menu->addAction(stray_show);
    menu->addAction(stray_quitter);

    notifyIcon->setContextMenu(menu);

    // Connecteur menu systray

    connect(stray_show, SIGNAL(triggered()), this, SLOT(stray_show()));
    connect(stray_quitter, SIGNAL(triggered()), this, SLOT(stray_quitter()));



    remplir_tab();

    // Actualisation des l'état des streams

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(refresh_all()));
    timer->start(10000);
}

live_alert::~live_alert()
{
    delete ui;
}

void live_alert::on_cb_plateforme_activated(const QString &arg1) // selection plateforme dans liste déroulante.
{

    if (arg1 == "Dailymotion")
    {
        ui->le_url->show();
        ui->lbl_url->setText("http://games.dailymotion.com/live/");
        ui->le_url->setPlaceholderText("xxxx");
    }
    else if (arg1 == "Twitch")
    {
        ui->le_url->show();
        ui->lbl_url->setText("http://www.twitch.tv/");
        ui->le_url->setPlaceholderText("xxxx");
    }
    else if (arg1 == "Hitbox")
    {
        ui->le_url->show();
        ui->lbl_url->setText("http://www.hitbox.tv/");
        ui->le_url->setPlaceholderText("xxxx");
    }
    else
    {
        ui->le_url->hide();
        ui->lbl_url->setText("");
    }

}

void live_alert::on_btn_ajout_clicked()
{
    // *******************************************
    // Ajout dans de l'entrée dans config.ini
    // *******************************************

    if ((ui->le_pseudo->text() != "") && (ui->le_url->text() != ""))
    {

        QSettings settings("config.ini", QSettings::IniFormat);
        settings.beginGroup(ui->le_pseudo->text());
        settings.setValue("plateforme", ui->cb_plateforme->currentText());
        settings.setValue("URL",ui->le_url->text());
        settings.endGroup();


        // Ajout dans le tableau
        int x = ui->tab->rowCount();
        ui->tab->insertRow(ui->tab->rowCount());

            ui->tab->setItem(x,0,new QTableWidgetItem(ui->le_pseudo->text()));
            ui->tab->setItem(x,1,new QTableWidgetItem(ui->cb_plateforme->currentText()));

            ui->tab->setItem(x,2,new QTableWidgetItem("Hors ligne"));


       //ajout dans les Qlists;
            lpseudos << ui->le_pseudo->text();
            lplateforme << ui->cb_plateforme->currentText();
            lurl << ui->le_url->text();
            letat << "Hors ligne";
    }

    else
    {
        QMessageBox popup;
        popup.setText("Veuillez rentrer tous les champs !");
        popup.exec();
    }
}

void live_alert::on_test_clicked()
{
}

void live_alert::check_site(QString id, QString plateforme, QString url)
{
    // *******************************************
    // Connexion au site web
    // ******************************************


    QNetworkAccessManager manager;
    QNetworkReply *response;


    if (plateforme == "Dailymotion")
    {
        response = manager.get(QNetworkRequest(QUrl("https://api.dailymotion.com/video/"+url+"?fields=onair")));
    }
    else if (plateforme == "Twitch")
    {
            response = manager.get(QNetworkRequest(QUrl("https://api.twitch.tv/kraken/streams?channel="+id)));
    }
    else if (plateforme == "Hitbox")
    {
        response = manager.get(QNetworkRequest(QUrl("https://api.hitbox.tv/media/live/"+id)));
        qDebug() << "https://api.hitbox.tv/media/live/"+id;
    }

    response->ignoreSslErrors();
    QEventLoop event;
    connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    QString html = response->readAll();
    live(html, plateforme);

}

void live_alert::live(QString html, QString plateforme)
{
    if(plateforme == "Twitch")
    {
        // *******************************************
        // parser le JSON
        // *******************************************

        QJsonDocument doc = QJsonDocument::fromJson(html.toUtf8());

        QJsonObject json = doc.object();

        QVariantMap maps = json.toVariantMap();
        QString etat = maps["_total"].toString();


        if(etat == "1")
        {
            if (letat[act_row]!= "En ligne !")
            {
                QString pseudo_live = lpseudos[act_row];
                QString url_live = "http://www.twitch.tv/"+lurl[act_row];
                letat[act_row] = "En ligne !";
                notifyIcon->showMessage(pseudo_live+" est en live !", url_live);
            }

            ui->tab->setItem(act_row,2,new QTableWidgetItem("En ligne !"));
        }
        else
        {
            ui->tab->setItem(act_row,2,new QTableWidgetItem("Hors ligne"));
        }
    }

    if(plateforme == "Dailymotion")
    {
        // *******************************************
        // parser le JSON
        // *******************************************

        QJsonDocument doc = QJsonDocument::fromJson(html.toUtf8());

        QJsonObject json = doc.object();

        QVariantMap maps = json.toVariantMap();
        QString etat = maps["onair"].toString();


        if(etat == "true")
        {
            if (letat[act_row]!= "En ligne !")
            {
                QString pseudo_live = lpseudos[act_row];
                QString url_live = "http://games.dailymotion.com/live/"+lurl[act_row];
                letat[act_row] = "En ligne !";
                notifyIcon->showMessage(pseudo_live+" est en live !", url_live);
            }

            ui->tab->setItem(act_row,2,new QTableWidgetItem("En ligne !"));
        }
        else
        {
            ui->tab->setItem(act_row,2,new QTableWidgetItem("Hors ligne"));
            /*QMessageBox popup;
            popup.setText("offline");
            popup.exec();*/
        }
    }
}


void live_alert::on_btn_suppr_clicked()
{
    QString pseudo = ui->le_pseudo->text();
    QSettings settings("config.ini", QSettings::IniFormat);
    settings.remove(pseudo);

    int count_row = ui->tab->currentRow();
    ui->tab->removeRow(count_row);
    remplir_tab();
}

void live_alert::remplir_tab()
{

    // *******************************************
    // Remplissage du tableau avec le fichier .ini
    // *******************************************

    lpseudos.clear();
    lplateforme.clear();
    lurl.clear();
    letat.clear();

    while (ui->tab->rowCount() != 0)
    {
        ui->tab->removeRow(0);
    }

    QSettings settings("config.ini", QSettings::IniFormat);
    lpseudos = settings.childGroups(); // liste des groupes

     foreach (QString pseudo, lpseudos)
     {
         int x = ui->tab->rowCount();
         ui->tab->insertRow(ui->tab->rowCount());

         QString plateforme = settings.value(pseudo+"/plateforme").toString();
         QString url =  settings.value(pseudo+"/URL").toString();

         lplateforme << settings.value(pseudo+"/plateforme").toString();
         lurl <<  settings.value(pseudo+"/URL").toString();
         letat << "Hors ligne";
         ui->tab->setItem(x,0,new QTableWidgetItem(pseudo));
         ui->tab->setItem(x,1,new QTableWidgetItem(plateforme));

          ui->tab->setItem(x,2,new QTableWidgetItem(letat[x]));
     }

}

// live twitch : https://api.twitch.tv/kraken/streams?channel=*****
// live dailymotion : https://api.dailymotion.com/video/<id_video>?fields=onair
// live Hitbox : https://api.hitbox.tv/media/live/xxxx

void live_alert::refresh_all()
{
    ui->btn_suppr->setEnabled(0);
    ui->btn_ajout->setEnabled(0);
    act_row =0;
    int nbr_stream = ui->tab->rowCount();
    while (act_row < nbr_stream)
    {
        QString pseudo = lpseudos[act_row];
        QString plateforme = lplateforme[act_row];
        QString url = lurl[act_row];
        check_site(pseudo, plateforme, url);
        act_row++;
    }
    ui->btn_suppr->setEnabled(1);
    ui->btn_ajout->setEnabled(1);
}



void live_alert::hideEvent(QHideEvent *event)
{
    if(event->WindowStateChange && Qt::WindowMinimized)
    {
        hide();
        setWindowState(windowState() & ~Qt::WindowMinimized);
    }
}

void live_alert::stray_quitter()
{
    close();
}

void live_alert::stray_show()
{
    show();
}

void live_alert::on_tab_clicked(const QModelIndex &index)
{
    int row = index.row();
    ui->le_pseudo->setText(lpseudos[row]);
    ui->le_url->setText(lurl[row]);
    ui->cb_plateforme->activated(lplateforme[row]);
    ui->cb_plateforme->setCurrentText(lplateforme[row]);
}

void live_alert::on_tab_activated(const QModelIndex &index)
{
    int row = index.row();
    QString url = "http://www.twitch.tv/"+lurl[row];

    if (lplateforme[row] == "Twitch")
    {
        url = "http://www.twitch.tv/"+lurl[row];
    }
    else if (lplateforme[row] == "Dailymotion")
    {
        url = "http://games.dailymotion.com/live/"+lurl[row];
    }
    else if (lplateforme[row] == "Hitbox")
    {
        url = "http://www.hitbox.tv/"+lurl[row];
    }

    QDesktopServices::openUrl(QUrl(url, QUrl::TolerantMode));

}
