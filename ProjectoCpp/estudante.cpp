#include "estudante.h"

Estudante::Estudante()
{

}


//Metodo consrutor
Estudante::Estudante(string nm, string nBI, long nEst, string gen, string inst, string curs){
    nome = nm;
    numBI = nBI;
    numEst = nEst;
    genero = gen;

    instituicao = inst;
    curso = curs;
}

//Metodos Getters

long Estudante::getNumEst(){
    return numEst;
}

string Estudante::getInstituicao(){
    return instituicao;

}

string Estudante::getCurso(){
    return curso;

}

//Metodos Setters

void Estudante::setNumEst(long nEst){
    numEst = nEst;

}

void Estudante::setInstituicao(string inst){
    instituicao = inst;

}

void Estudante::setCurso(string curs){
    curso = curs;

}

void Estudante:: saveToFile(Estudante estudante){
    QString local = "D:/Escolaridade/FENG/2_Ano/LP/C++/ProjectoFinal/ProjectoCpp/ProjectoCpp/files/";
    QString arq = "listaEstudante.txt";
    QFile file(local + arq);

    QString nm = QString::fromStdString(estudante.nome);
    QString BI = QString::fromStdString(estudante.numBI);
    QString nEst = estudante.numEst + "";
    QString gen = QString::fromStdString(estudante.genero);
    QString inst = QString::fromStdString(estudante.instituicao);
    QString crs = QString::fromStdString(estudante.curso);

    if(!file.open(QFile::Append|QFile::Text)){
        //QMessageBox::warning(this, "ERRO", "Erro ao abrir arquivo");
    }else{
        QTextStream saida(&file);

        saida << nm + "\n"
                 + BI + "\n"
                 + nEst + "\n"
                 + gen + "\n"
                 + inst + "\n"
                 + crs + "\n";

        file.flush();
        file.close();
    }
}

Estudante* Estudante::readFromFile(Estudante estudante[]){

    QString local = "D:/Escolaridade/FENG/2_Ano/LP/C++/ProjectoFinal/ProjectoCpp/ProjectoCpp/files/";
    QString arq = "listaEstudante.txt";
    QFile file(local + arq);

    QString nm;
    QString BI;
    QString nEst;
    QString gen;
    QString inst;
    QString crs;
    int cont=0, linha=1;

    if(!file.open(QFile::ReadOnly|QFile::Text)){
        //QMessageBox::warning(this, "ERRO", "Erro ao abrir arquivo");
    }else{
        QTextStream entrada(&file);
        while(!entrada.atEnd()){

            QString texto = entrada.readLine();

            if(linha==1){
                nm = texto;
                linha++;
            }else if(linha==2){
                BI = texto;
                linha++;
            }else if(linha==3){
                nEst = texto;
                linha++;
            }else if(linha==4){
                gen = texto;
                linha++;
            }else if(linha==5){
                inst = texto;
                linha++;
            }else if(linha==6){
                crs = texto;
                estudante[cont] = *new Estudante(nm.toStdString(), BI.toStdString(),
                                                 nEst.toLong(), gen.toStdString(),
                                                 inst.toStdString(), crs.toStdString());
                cont++;
                linha=1;

            }
        }
        file.close();
    }

    return estudante;
}
