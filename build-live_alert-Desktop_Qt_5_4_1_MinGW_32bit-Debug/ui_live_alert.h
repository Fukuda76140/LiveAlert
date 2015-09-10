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
    QStatusBar *statusBar;

    void setupUi(QMainWindow *live_alert)
    {
        if (live_alert->objectName().isEmpty())
            live_alert->setObjectName(QStringLiteral("live_alert"));
        live_alert->setEnabled(true);
        live_alert->resize(550, 510);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(live_alert->sizePolicy().hasHeightForWidth());
        live_alert->setSizePolicy(sizePolicy);
        live_alert->setMinimumSize(QSize(550, 510));
        live_alert->setMaximumSize(QSize(550, 510));
        centralWidget = new QWidget(live_alert);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tab = new QTableWidget(centralWidget);
        if (tab->columnCount() < 4)
            tab->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QFont font;
        font.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tab->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setEnabled(true);
        tab->setGeometry(QRect(20, 20, 511, 281));
        tab->setSizeIncrement(QSize(0, 1));
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
        tab->horizontalHeader()->setDefaultSectionSize(118);
        tab->horizontalHeader()->setHighlightSections(false);
        tab->horizontalHeader()->setMinimumSectionSize(35);
        tab->verticalHeader()->setVisible(false);
        tab->verticalHeader()->setHighlightSections(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 320, 42, 16));
        le_pseudo = new QLineEdit(centralWidget);
        le_pseudo->setObjectName(QStringLiteral("le_pseudo"));
        le_pseudo->setGeometry(QRect(195, 320, 201, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 360, 61, 16));
        cb_plateforme = new QComboBox(centralWidget);
        cb_plateforme->setObjectName(QStringLiteral("cb_plateforme"));
        cb_plateforme->setGeometry(QRect(200, 360, 201, 22));
        lbl_url = new QLabel(centralWidget);
        lbl_url->setObjectName(QStringLiteral("lbl_url"));
        lbl_url->setGeometry(QRect(100, 400, 181, 21));
        lbl_url->setFont(font);
        lbl_url->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_url = new QLineEdit(centralWidget);
        le_url->setObjectName(QStringLiteral("le_url"));
        le_url->setEnabled(true);
        le_url->setGeometry(QRect(290, 400, 111, 20));
        le_url->setAcceptDrops(true);
        le_url->setFrame(true);
        btn_ajout = new QPushButton(centralWidget);
        btn_ajout->setObjectName(QStringLiteral("btn_ajout"));
        btn_ajout->setGeometry(QRect(200, 440, 201, 23));
        btn_suppr = new QPushButton(centralWidget);
        btn_suppr->setObjectName(QStringLiteral("btn_suppr"));
        btn_suppr->setGeometry(QRect(100, 440, 75, 23));
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
        QTableWidgetItem *___qtablewidgetitem3 = tab->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("live_alert", "Jeux", 0));
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
    } // retranslateUi

};

namespace Ui {
    class live_alert: public Ui_live_alert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVE_ALERT_H
