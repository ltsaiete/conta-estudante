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
    Validar v;

    QString BI = ui->txtBI->text();
    QString numConta = ui->txtNumConta->text();
    QString senha = ui->txtSenha->text();
    QString saldo = ui->txtSaldo->text();

    bool res = existeBI(BI);
    res = v.validaLong(numConta.toLong(), 100000000, 999999999);
    res = v.validaInt(senha.toInt(), 0000, 9999);
    res = v.validaFloat(saldo.toFloat(), 200, 50000);


    if(res==true){

        contaEst = *new ContaEstudante(BI.toStdString(), numConta.toLong(), senha.toInt(), saldo.toFloat());

        contaEst.saveToFile(contaEst);

        QMessageBox::information(this, "Dados da Conta", "Titular: " + BI + "\nNumero de Conta: " +
                                 numConta + "\nSenha: ****"  + "\nSaldo: " + saldo);

        on_btLimpar_clicked();

    }else{
        QMessageBox::warning(this, "Dados da Conta", "Verifique os dados e tente novamente!");
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



