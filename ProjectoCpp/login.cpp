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

    bool res = verPass(numConta, pass);

    if(res==true){
        OperacoesCartao operacoes;
        operacoes.exec();
        Login login;
        login.setVisible(false);
    }else{
        QMessageBox::warning(this, "ERRO", "Numero de conta ou senha incorrecta");
    }


}

bool Login::verPass(QString numConta, QString pass){
    QString local = "D:/Escolaridade/FENG/2_Ano/LP/C++/ProjectoFinal/ProjectoCpp/ProjectoCpp/files/";
    QString arq = "listaConta.txt";
    QFile file(local + arq);
    bool res = false;
    QString nConta;
    QString pw;
    int cont=1;

    if(!file.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this, "ERRO", "Erro ao abrir arquivo");
    }else{
        QTextStream entrada(&file);
        while(!entrada.atEnd() && res!=true){

            QString texto = entrada.readLine();
            if(cont==1){
                cont++;
            }else if(cont==2){
                nConta = texto;
                cont++;
            }else if(cont==3){
                pw = texto;
                cont++;
            }else{
                if(nConta==numConta){
                    if(pw==pass){
                        res=true;
                    }
                }
                cont=1;
            }
        }
        file.close();
    }

    return res;
}
