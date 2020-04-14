#include "operacoescartao.h"
#include "ui_operacoescartao.h"
#include "login.h"
#include "frmdeposito.h"

OperacoesCartao::OperacoesCartao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OperacoesCartao)
{
    ui->setupUi(this);
}

OperacoesCartao::~OperacoesCartao()
{
    delete ui;
}

void OperacoesCartao::on_btLevantamento_clicked()
{
    Login login;
    login.exec();
}

void OperacoesCartao::on_btTransferencia_clicked()
{
    Login login;
    login.exec();
}

void OperacoesCartao::on_btPropinas_clicked()
{
    Login login;
    login.exec();
}

void OperacoesCartao::on_btDeposito_clicked()
{
    FrmDeposito deposito;
    deposito.exec();
}
