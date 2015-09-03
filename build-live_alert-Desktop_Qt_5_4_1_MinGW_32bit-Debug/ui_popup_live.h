/********************************************************************************
** Form generated from reading UI file 'popup_live.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_LIVE_H
#define UI_POPUP_LIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_popup_live
{
public:
    QLabel *lbl_pseudo;

    void setupUi(QWidget *popup_live)
    {
        if (popup_live->objectName().isEmpty())
            popup_live->setObjectName(QStringLiteral("popup_live"));
        popup_live->resize(450, 167);
        lbl_pseudo = new QLabel(popup_live);
        lbl_pseudo->setObjectName(QStringLiteral("lbl_pseudo"));
        lbl_pseudo->setGeometry(QRect(0, 60, 451, 41));
        QFont font;
        font.setFamily(QStringLiteral("Sakkal Majalla"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        lbl_pseudo->setFont(font);
        lbl_pseudo->setAlignment(Qt::AlignCenter);

        retranslateUi(popup_live);

        QMetaObject::connectSlotsByName(popup_live);
    } // setupUi

    void retranslateUi(QWidget *popup_live)
    {
        popup_live->setWindowTitle(QApplication::translate("popup_live", "Form", 0));
        lbl_pseudo->setText(QApplication::translate("popup_live", "est en live !", 0));
    } // retranslateUi

};

namespace Ui {
    class popup_live: public Ui_popup_live {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_LIVE_H
