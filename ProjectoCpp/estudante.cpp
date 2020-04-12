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
/*
string Estudante::toString(){
    return "Nome: " + nome + "\nNumero de BI: " + numBI + "\nNumero de Estudante: ";
}
*/
