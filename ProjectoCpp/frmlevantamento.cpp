#include "frmlevantamento.h"
#include "ui_frmlevantamento.h"

FrmLevantamento::FrmLevantamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmLevantamento)
{
    ui->setupUi(this);
}

FrmLevantamento::~FrmLevantamento()
{
    delete ui;
}
