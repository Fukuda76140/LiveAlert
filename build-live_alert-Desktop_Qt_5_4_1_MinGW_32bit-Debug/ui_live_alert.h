/********************************************************************************
** Form generated from reading UI file 'live_alert.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVE_ALERT_H
#define UI_LIVE_ALERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_live_alert
{
public:
    QWidget *centralWidget;
    QTableWidget *tab;
    QLabel *label;
    QLineEdit *le_pseudo;
    QLabel *label_2;
    QComboBox *cb_plateforme;
    QLabel *lbl_url;
    QLineEdit *le_url;
    QPushButton *btn_ajout;
    QPushButton *btn_suppr;
    QLabel *label_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *live_alert)
    {
        if (live_alert->objectName().isEmpty())
            live_alert->setObjectName(QStringLiteral("live_alert"));
        live_alert->setEnabled(true);
        live_alert->resize(348, 611);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(live_alert->sizePolicy().hasHeightForWidth());
        live_alert->setSizePolicy(sizePolicy);
        live_alert->setMinimumSize(QSize(348, 611));
        live_alert->setMaximumSize(QSize(348, 611));
        centralWidget = new QWidget(live_alert);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tab = new QTableWidget(centralWidget);
        if (tab->columnCount() < 3)
            tab->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setEnabled(true);
        tab->setGeometry(QRect(20, 20, 301, 231));
        tab->setFocusPolicy(Qt::ClickFocus);
        tab->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tab->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tab->setTabKeyNavigation(false);
        tab->setProperty("showDropIndicator", QVariant(false));
        tab->setDragDropOverwriteMode(false);
        tab->setSelectionMode(QAbstractItemView::SingleSelection);
        tab->setSelectionBehavior(QAbstractItemView::SelectRows);
        tab->setShowGrid(false);
        tab->horizontalHeader()->setVisible(false);
        tab->horizontalHeader()->setHighlightSections(false);
        tab->verticalHeader()->setVisible(false);
        tab->verticalHeader()->setHighlightSections(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 340, 42, 16));
        le_pseudo = new QLineEdit(centralWidget);
        le_pseudo->setObjectName(QStringLiteral("le_pseudo"));
        le_pseudo->setGeometry(QRect(115, 340, 201, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 380, 61, 16));
        cb_plateforme = new QComboBox(centralWidget);
        cb_plateforme->setObjectName(QStringLiteral("cb_plateforme"));
        cb_plateforme->setGeometry(QRect(120, 380, 201, 22));
        lbl_url = new QLabel(centralWidget);
        lbl_url->setObjectName(QStringLiteral("lbl_url"));
        lbl_url->setGeometry(QRect(20, 420, 181, 21));
        QFont font;
        font.setPointSize(8);
        lbl_url->setFont(font);
        lbl_url->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_url = new QLineEdit(centralWidget);
        le_url->setObjectName(QStringLiteral("le_url"));
        le_url->setEnabled(true);
        le_url->setGeometry(QRect(210, 420, 111, 20));
        le_url->setAcceptDrops(true);
        le_url->setFrame(true);
        btn_ajout = new QPushButton(centralWidget);
        btn_ajout->setObjectName(QStringLiteral("btn_ajout"));
        btn_ajout->setGeometry(QRect(120, 490, 201, 23));
        btn_suppr = new QPushButton(centralWidget);
        btn_suppr->setObjectName(QStringLiteral("btn_suppr"));
        btn_suppr->setGeometry(QRect(20, 490, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 260, 241, 16));
        live_alert->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(live_alert);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        live_alert->setStatusBar(statusBar);

        retranslateUi(live_alert);

        QMetaObject::connectSlotsByName(live_alert);
    } // setupUi

    void retranslateUi(QMainWindow *live_alert)
    {
        live_alert->setWindowTitle(QApplication::translate("live_alert", "live_alert", 0));
        QTableWidgetItem *___qtablewidgetitem = tab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("live_alert", "Pseudo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("live_alert", "Plateforme", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tab->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("live_alert", "Etat", 0));
        label->setText(QApplication::translate("live_alert", "Pseudo :", 0));
        label_2->setText(QApplication::translate("live_alert", "Plateforme :", 0));
        cb_plateforme->clear();
        cb_plateforme->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("live_alert", "Dailymotion", 0)
         << QApplication::translate("live_alert", "Twitch", 0)
        );
        lbl_url->setText(QString());
        le_url->setInputMask(QString());
        le_url->setPlaceholderText(QString());
        btn_ajout->setText(QApplication::translate("live_alert", "Ajouter", 0));
        btn_suppr->setText(QApplication::translate("live_alert", "Supprimer", 0));
        label_3->setText(QApplication::translate("live_alert", "Faites un double clique gauche pour s\303\251lectionner", 0));
    } // retranslateUi

};

namespace Ui {
    class live_alert: public Ui_live_alert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVE_ALERT_H
