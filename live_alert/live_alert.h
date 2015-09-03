#ifndef LIVE_ALERT_H
#define LIVE_ALERT_H

#include <QMainWindow>
#include <QtNetwork/QNetworkReply>
#include <QTableWidgetItem>
#include <QSystemTrayIcon>
#include <QHideEvent>

namespace Ui {
class live_alert;
}

class live_alert : public QMainWindow
{
    Q_OBJECT

public:
    explicit live_alert(QWidget *parent = 0);
    // lister les données dans des listes
    QStringList lpseudos;
    QStringList lplateforme;
    QStringList lurl;
    QStringList letat;
    int row; //<- ligne selectionnée
    int act_row; // <-- ligne actualisée
    ~live_alert();

private slots:
    void on_cb_plateforme_activated(const QString &arg1);
    void on_btn_ajout_clicked();
    void on_test_clicked();
    void refresh_all();
    void hideEvent(QHideEvent *event);
    void stray_quitter();
    void stray_show();
    void on_tab_activated(const QModelIndex &index);

    void on_btn_suppr_clicked();

    void on_refresh_all_clicked();

    void on_tab_clicked(const QModelIndex &index);

private:
    Ui::live_alert *ui;
    void check_site(QString id, QString plateforme, QString url);
    void live(QString html, QString plateforme);
    void remplir_tab();
    QSystemTrayIcon *notifyIcon;
    QString selected_pseudo;
};


#endif // LIVE_ALERT_H
