#include "operacoescartao.h"
#include "ui_operacoescartao.h"

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
