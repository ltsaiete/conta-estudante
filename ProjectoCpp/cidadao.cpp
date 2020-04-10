#include "cidadao.h"

Cidadao::Cidadao()
{

}

//Metodos Getters

string Cidadao::getNome(){
    return nome;
}

string Cidadao::getNumBI(){
    return numBI;
}

string Cidadao::getGenero(){
    return genero;
}


//Metodos Setters

void Cidadao::setNome(string nm){
    nome = nm;
}

void Cidadao::setNumBI(string nBI){
    numBI = nBI;
}

void Cidadao::setGenero(string gen){
    genero = gen;
}
