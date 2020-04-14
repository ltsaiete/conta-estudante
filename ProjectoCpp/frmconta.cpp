#include "frmconta.h"
#include "ui_frmconta.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

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

void FrmConta::on_btSalvar_clicked()
{
    ContaEstudante contaEst;
    QString BI = ui->txtBI->text();
    QString numConta = ui->txtNumConta->text();
    QString senha = ui->txtSenha->text();
    QString saldo = ui->txtSaldo->text();

    bool res = existeBI(BI);

    if(res==true){

        contaEst = *new ContaEstudante(BI.toStdString(), numConta.toLong(), senha.toInt(), saldo.toFloat());

        contaEst.saveToFile(contaEst);

        QMessageBox::information(this, "Dados da Conta", "Titular: " + BI + "\nNumero de Conta: " +
                                 numConta + "\nSenha: " + senha + "\nSaldo: " + saldo);

        on_btLimpar_clicked();

    }else{
        QMessageBox::warning(this, "Dados da Conta", "Estudante nao Encontrado, tente novamente!");
    }
}

void FrmConta::on_btLimpar_clicked()
{
    ui->txtBI->clear();
    ui->txtNumConta->clear();
    ui->txtSenha->clear();
    ui->txtSaldo->clear();

    ui->txtBI->setFocus();
}


//Verifica se existe o titular da conta que tentamos abrir
bool FrmConta::existeBI(QString BI){
    bool res=false;

    Estudante estudante[30];
    Estudante* est;
    est = est->readFromFile(estudante);

    for(int i=0; i<30; i++){
        estudante[i] = *(est+i);
    }

    for(int i=0; i<30; i++){
        if(BI==QString::fromStdString(estudante[i].getNumBI())){
            res=true;
        }
    }

    return res;
}



