#ifndef CIDADAO_H
#define CIDADAO_H
#include <iostream>
#include <string>


using namespace std;
class Cidadao{

    protected:
        string nome;
        string numBI;
        string genero;

    public:
        Cidadao();
        //Cidadao(string nm, string nBI, string gen);

        string getNome();
        void setNome(string nm);

        string getNumBI();
        void setNumBI(string nBI);

        string getGenero();
        void setGenero(string gen);

};

//Metodo Construtor
Cidadao::Cidadao(){

}
/*
Cidadao::Cidadao(string nm, string nBI, string gen){
    nome = nm;
    numBI = nBI;
    genero = gen;

}
*/

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

#endif // CIDADAO_H
