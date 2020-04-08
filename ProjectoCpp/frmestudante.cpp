#include "frmestudante.h"
#include "ui_frmestudante.h"

FrmEstudante::FrmEstudante(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmEstudante)
{
    ui->setupUi(this);
}

FrmEstudante::~FrmEstudante()
{
    delete ui;
}
