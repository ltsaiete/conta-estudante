#include "frmconta.h"
#include "ui_frmconta.h"

FrmConta::FrmConta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmConta)
{
    ui->setupUi(this);
}

FrmConta::~FrmConta()
{
    delete ui;
}
