#include "frmlevantamento.h"
#include "ui_frmlevantamento.h"
#include <QMessageBox>
#include <QFile>

FrmLevantamento::FrmLevantamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmLevantamento)
{
    ui->setupUi(this);
}

FrmLevantamento::~FrmLevantamento()
{
    delete ui;
}

void FrmLevantamento::on_btConfirm_clicked()
{
    Validar v;
    bool val;
    bool res = false;

    QString valor = ui->txtValor->text();
    long conta = this->conta();

    val = v.validaInt(valor.toInt(), 10, 10000);
    if(val==true){
        res = novoSaldo(conta, valor.toFloat());
    }

    if(res==true){
        QMessageBox::information(this, "Deposito", "Deposito efectuado com sucesso");
    }else{
        QMessageBox::warning(this, "Deposito", "Falha ao efectuar deposito");
    }

}



bool FrmLevantamento::novoSaldo(long conta, float valor){
    bool res=false;

    ContaEstudante contaEst[30];
    ContaEstudante* c;
    ContaEstudante co;
    c = c->readFromFile(contaEst);

    for(int i=0; i<30; i++){
        contaEst[i] = *(c+i);

     }

    for(int i=0; i<30 && res!=true; i++){
       if(contaEst[i].getNumConta()==conta){
           float atual = contaEst[i].getSaldo();
           contaEst[i].setSaldo(atual-valor);
           QMessageBox::information(this, "Novo saldo", "Saldo: " + QString::number(contaEst[i].getSaldo()));
           res=true;
      }
    }

       QString local = "files/files/";
       QString arq = "listaConta.txt";
       QFile file(local + arq);

       if(!file.open(QFile::WriteOnly|QFile::Text)){
           QMessageBox::warning(this, "ERRO", "Erro ao abrir arquivo");
       }else{
           QTextStream saida(&file);

           saida << QString::fromStdString(contaEst[0].getBITitular()) + "\n"
                    + QString::number(contaEst[0].getNumConta()) + "\n"
                    + QString::number(contaEst[0].getSenha()) + "\n"
                    + QString::number(contaEst[0].getSaldo()) + "\n";

           file.flush();
           file.close();
       }

       for(int i=1; i<30 && (contaEst[i].getNumConta()!=0); i++){
          co.saveToFile(contaEst[i]);
        }


    return res;
}

long FrmLevantamento::conta() {
    long conta=0;
    QString local = "files/files/";
    QString arq = "conta.txt";
    QFile file(local + arq);

    if(!file.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this, "ERRO", "Erro ao abrir arquivo conta");
    }else{
        QTextStream entrada(&file);

        QString texto = entrada.readAll();
        conta = texto.toLong();
        //QMessageBox::information(this, "Conta encontrada", "conta " + QString::number(conta));
        file.close();
    }

    return conta;
}
