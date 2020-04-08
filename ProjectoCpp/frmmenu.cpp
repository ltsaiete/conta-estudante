#include "frmmenu.h"
#include "ui_frmmenu.h"

FrmMenu::FrmMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FrmMenu)
{
    ui->setupUi(this);
}

FrmMenu::~FrmMenu()
{
    delete ui;
}

void FrmMenu::on_mnCadEst_clicked()
{
    mnCadEst = new FrmEstudante(this);
    mnCadEst -> show();
}
