#include "contaestudante.h"

ContaEstudante::ContaEstudante()
{

}


ContaEstudante::ContaEstudante(string BITit, long nConta, int sen,float sld){
    BITitular = BITit;
    numConta = nConta;
    saldo = sld;
    senha = sen;
}

string ContaEstudante::getBITitular(){
    return BITitular;
}

void ContaEstudante::setBITitular(string BITit){
    BITitular = BITit;
}


void ContaEstudante:: saveToFile(ContaEstudante conta){
    QString local = "D:/Escolaridade/FENG/2_Ano/LP/C++/ProjectoFinal/ProjectoCpp/ProjectoCpp/files/";
    QString arq = "listaConta.txt";
    QFile file(local + arq);

    QString BI = QString::fromStdString(conta.BITitular);
    QString nConta = QString::number(conta.numConta);
    QString sld = QString::number(conta.saldo);
    QString sen = QString::number(conta.senha);

    if(!file.open(QFile::Append|QFile::Text)){
        //QMessageBox::warning(this, "ERRO", "Erro ao abrir arquivo");
    }else{
        QTextStream saida(&file);

        saida << BI + "\n"
                 + nConta + "\n"
                 + sld + "\n"
                 + sen + "\n";

        file.flush();
        file.close();
    }
}

void ContaEstudante::saveFromZero(ContaEstudante conta[]){

    QString local = "D:/Escolaridade/FENG/2_Ano/LP/C++/ProjectoFinal/ProjectoCpp/ProjectoCpp/files/";
    QString arq = "listaConta.txt";
    QFile file(local + arq);

    for(int i=0; i<30;i++){
        QString BI = QString::fromStdString(conta[i].BITitular);
        QString nConta = QString::number(conta[i].numConta);
        QString sld = QString::number(conta[i].saldo);
        QString sen = QString::number(conta[i].senha);

        if(i==0){
            if(file.open(QFile::WriteOnly|QFile::Text)){
                QTextStream saida(&file);

                saida << BI + "\n"
                         + nConta + "\n"
                         + sen + "\n"
                         + sld + "\n";

                file.flush();
                file.close();
            }
        }else{
            if(file.open(QFile::WriteOnly|QFile::Text)){
                QTextStream saida(&file);

                saida << BI + "\n"
                         + nConta + "\n"
                         + sen + "\n"
                         + sld + "\n";

                file.flush();
                file.close();
            }
        }


    }



}


ContaEstudante* ContaEstudante::readFromFile(ContaEstudante conta[]){

    QString local = "D:/Escolaridade/FENG/2_Ano/LP/C++/ProjectoFinal/ProjectoCpp/ProjectoCpp/files/";
    QString arq = "listaConta.txt";
    QFile file(local + arq);

    QString BI;
    QString nConta;
    QString sld;
    QString sen;
    int cont=0, linha=1;

    if(!file.open(QFile::ReadOnly|QFile::Text)){
        //QMessageBox::warning(this, "ERRO", "Erro ao abrir arquivo");
    }else{
        QTextStream entrada(&file);
        while(!entrada.atEnd()){

            QString texto = entrada.readLine();

            if(linha==1){
                BI = texto;
                linha++;
            }else if(linha==2){
                nConta = texto;
                linha++;
            }else if(linha==3){
                sen = texto;
                linha++;
            }else if(linha==4){
                sld = texto;
                conta[cont] = *new ContaEstudante(BI.toStdString(),
                                                 nConta.toLong(),
                                                 sen.toInt(),
                                                 sld.toFloat()
                                                 );
                cont++;
                linha=1;

            }
        }
        file.close();
    }

    return conta;
}

