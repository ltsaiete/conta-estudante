#ifndef CONTACARTAO_H
#define CONTACARTAO_H
#include <iostream>
#include <string>
#include "cidadao.h"

class ContaCartao : public Cidadao{

    protected:
        long numConta;
        //string tipoConta;
        float saldo;
        int senha;

    public:
        ContaCartao();

        long getNumConta();
        float getSaldo();
        //string getTipoConta();
        int getSenha();

        void setNumConta(long nConta);
        void setSaldo(float sld);
        void setSenha(int sen);

};


// Construtor

ContaCartao::ContaCartao(){

}

//Metodos Getters

long ContaCartao::getNumConta(){
    return numConta;
}

float ContaCartao::getSaldo(){
    return saldo;
}

int ContaCartao:: getSenha(){
    return senha;
}

//Metodos Setters

void ContaCartao:: setNumConta(long nConta){
    numConta = nConta;
}

void ContaCartao::setSaldo(float sld){
    saldo = sld;
}

void ContaCartao::setSenha(int sen){
    senha = sen;
}


#endif // CONTACARTAO_H
