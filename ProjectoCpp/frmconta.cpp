#include "frmconta.h"
#include "ui_frmconta.h"
#include <QMessageBox>

FrmConta::FrmConta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmConta)
{
    ui->setupUi(this);
    contaEst = new ContaEstudante[30];
    cont=0;
}

FrmConta::~FrmConta()
{
    delete ui;
}

void FrmConta::on_btSalvar_clicked()
{
    QString BI = ui->txtBI->text();
    QString numConta = ui->txtNumConta->text();
    QString senha = ui->txtSenha->text();
    QString saldo = ui->txtSaldo->text();

    bool res = existeBI(BI.toStdString());

    if(res==true){
        contaEst[cont].setBITitular(BI.toStdString());
        contaEst[cont].setNumConta(numConta.toLong());
        contaEst[cont].setSenha(senha.toInt());
        contaEst[cont].setSaldo(saldo.toFloat());

        contaEst[cont] = *new ContaEstudante(BI.toStdString(), numConta.toLong(), senha.toInt(), saldo.toFloat());

        QMessageBox::information(this, "Dados da Conta", "Titular: " + BI + "\nNumero de Conta: " +
                                 numConta + "\nSenha: " + senha + "\nSaldo: " + saldo);


        cont++;

    }else{
        QMessageBox::warning(this, "Dados da Conta", "Estudante nao Encontrado, tente novamente!");
    }
}

//Verifica se existe o titular da conta que tentamos abrir
bool FrmConta::existeBI(string BI){
    FrmEstudante aux;
    bool res = false;
    for(int i=0; i<aux.cont && res!=true; i++){
        if(aux.est[i].getNumBI()==BI){
            res=true;
        }
    }

    return res;
}

void FrmConta::on_btLimpar_clicked()
{
    ui->txtBI->clear();
    ui->txtNumConta->clear();
    ui->txtSenha->clear();
    ui->txtSaldo->clear();

    ui->txtBI->setFocus();
}
