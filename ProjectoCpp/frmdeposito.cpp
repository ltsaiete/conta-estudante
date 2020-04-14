#include "frmdeposito.h"
#include "ui_frmdeposito.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

FrmDeposito::FrmDeposito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmDeposito)
{
    ui->setupUi(this);
}

FrmDeposito::~FrmDeposito()
{
    delete ui;
}

void FrmDeposito::on_btConfirm_clicked()
{
    QString valor = ui->txtValor->text();
    long conta = this->conta();

    bool res = novoSaldo(conta, valor.toFloat());

    if(res==true){
        QMessageBox::information(this, "Deposito", "Deposito efectuado com sucesso");
    }else{
        QMessageBox::warning(this, "Deposito", "Falha ao efectuar deposito");
    }

}

bool FrmDeposito::novoSaldo(long conta, float valor){
    bool res=false;

    ContaEstudante contaEst[30];
    ContaEstudante* c;
    ContaEstudante co;
    c = c->readFromFile(contaEst);

    for(int i=0; i<5; i++){
        contaEst[i] = *(c+i);

     }

    for(int i=0; i<5; i++){
       if(contaEst[i].getNumConta()==conta){
           float atual = contaEst[i].getSaldo();
           contaEst[i].setSaldo(atual+valor);
           QMessageBox::information(this, "novo saldo", "saldo " + QString::number(contaEst[i].getSaldo()));
           res=true;
     }
    }

       QString local = "D:/Escolaridade/FENG/2_Ano/LP/C++/ProjectoFinal/ProjectoCpp/ProjectoCpp/files/";
       QString arq = "listaConta.txt";
       QFile file(local + arq);

       if(!file.open(QFile::WriteOnly|QFile::Text)){
           //QMessageBox::warning(this, "ERRO", "Erro ao abrir arquivo");
       }else{
           QTextStream saida(&file);

           saida << QString::fromStdString(contaEst[0].getBITitular()) + "\n"
                    + QString::number(contaEst[0].getNumConta()) + "\n"
                    + QString::number(contaEst[0].getSenha()) + "\n"
                    + QString::number(contaEst[0].getSaldo()) + "\n";

           file.flush();
           file.close();
       }

       for(int i=1; i<5; i++){
          co.saveToFile(contaEst[i]);
        }


    return res;
}

long FrmDeposito::conta(){
    long conta=123456;
    QString local = "D:/Escolaridade/FENG/2_Ano/LP/C++/ProjectoFinal/ProjectoCpp/ProjectoCpp/files/";
    QString arq = "conta.txt";
    QFile file(local + arq);

    if(!file.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this, "ERRO 1", "Erro ao abrir arquivo conta");
    }else{
        QTextStream entrada(&file);

        QString texto = entrada.readAll();
        conta = texto.toLong();
        QMessageBox::information(this, "Conta encontrada", "conta " + QString::number(conta));
        file.close();
    }

    return conta;
}
