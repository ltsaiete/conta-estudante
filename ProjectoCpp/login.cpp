#include "login.h"
#include "ui_login.h"
#include "operacoescartao.h"
#include "frmestudante.h"

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

void Login::on_pushButton_clicked()
{

    QString user = ui->txtUser->text();
    QString pass = ui->txtPassword->text();

    FrmEstudante *aux = new FrmEstudante();

    for(int i=0; i<30; i++){
        if(aux->est[i].getNumBI()==user.toStdString()){

        }
    }

}
