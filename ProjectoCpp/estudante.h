#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include<iostream>
#include<string>
#include "cidadao.h"


using namespace std;

class Estudante:public Cidadao{

    protected: //Declaracao de Variaveis
        long numEst;
        string instituicao;
        string curso;


    public: //Declaracao dos metodos
        Estudante();
        Estudante(string nm, string nBI, string gen, long nEst, string inst, string curs);

        long getNumEst();
        string getInstituicao();
        string getCurso();

        void setNumEst(long nEst);
        void setInstituicao(string inst);
        void setCurso(string curs);


};


//Metodo consrutor

Estudante::Estudante(){

}
Estudante::Estudante(string nm, string nBI, string gen, long nEst, string inst, string curs){
    nome = nm;
    numBI = nBI;
    genero = gen;
    numEst = nEst;
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


#endif // ESTUDANTE_H
