#include "frmmenu.h"
#include "ui_frmmenu.h"
#include "login.h"

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

//Este slot vai abrir o formulario para cadastro de estudante
void FrmMenu::on_mnCadEst_clicked()
{
    mnCadEst = new FrmEstudante(this);
    mnCadEst -> show();
}

//Este slot vai abrir o formulario para criacao de conta
void FrmMenu::on_mnCadConta_clicked()
{
    mnCadConta = new FrmConta(this);
    mnCadConta -> show();
}


void FrmMenu::on_btOperaCartao_clicked()
{
    Login show;
    show.exec();
}
