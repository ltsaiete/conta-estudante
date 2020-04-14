#include "frmdeposito.h"
#include "ui_frmdeposito.h"

FrmDeposito::FrmDeposito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmDeposito)
{
    ui->setupUi(this);
}

FrmDeposito::~FrmDeposito()
{
    delete ui;
}

void FrmDeposito::on_btConfirm_clicked()
{
    QString valor = ui->txtValor->text();

}
