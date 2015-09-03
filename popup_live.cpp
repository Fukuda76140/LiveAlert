#include "popup_live.h"
#include "ui_popup_live.h"

popup_live::popup_live(QString pseudo, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::popup_live)
{
    ui->setupUi(this);
    ui->lbl_pseudo->setText(pseudo+" est en live !");


}

popup_live::~popup_live()
{
    delete ui;
}
