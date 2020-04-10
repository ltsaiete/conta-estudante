#include "estudante.h"

Estudante::Estudante()
{

}


//Metodo consrutor
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
