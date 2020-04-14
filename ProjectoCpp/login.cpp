#include "login.h"
#include "ui_login.h"
#include "operacoescartao.h"
#include "frmestudante.h"
#include <QFile>
#include <QTextStream>
#include<QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btLogin_clicked()
{
    QString numConta = ui->txtNumConta->text();
    QString pass = ui->txtPassword->text();

    bool res = verPass(numConta, pass.toInt());

    if(res==true){
        OperacoesCartao operacoes;
        operacoes.exec();
        fileConta(numConta);
        on_btLimpar_clicked();
    }else{
        QMessageBox::warning(this, "ERRO", "Numero de conta ou senha incorrecta");
    }


}

void Login::on_btLimpar_clicked()
{
    ui->txtNumConta->clear();
    ui->txtPassword->clear();

    ui->txtNumConta->setFocus();
}


bool Login::verPass(QString numConta, int pass){

    ContaEstudante conta[30];
    ContaEstudante* c;
    bool res = false;

    c = c->readFromFile(conta);

    for(int i=0; i<30; i++){
        conta[i] = *(c+i);
    }

    for(int i=0; i<30; i++){
        if(QString::number(conta[i].getNumConta())==numConta){
            QMessageBox::warning(this, "ERRO", QString::number(conta[i].getNumConta()));
            if(conta[i].getSenha()==pass){
                QMessageBox::warning(this, "ERRO", QString::number(conta[i].getSenha()));
                res = true;
            }
        }
    }


    return res;
}


void Login::fileConta(QString numConta){

    QString local = "D:/Escolaridade/FENG/2_Ano/LP/C++/ProjectoFinal/ProjectoCpp/ProjectoCpp/files/";
    QString arq = "conta.txt";
    QFile file(local + arq);

    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this, "ERRO", "Erro ao abrir arquivo");
    }else{
        QTextStream saida(&file);

        saida << numConta;

        file.flush();
        file.close();
    }

}

