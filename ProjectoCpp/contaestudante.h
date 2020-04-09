#ifndef CONTAESTUDANTE_H
#define CONTAESTUDANTE_H
#include "estudante.h"
#include "contacartao.h"
#include <iostream>
#include <string>


class ContaEstudante : public Estudante, ContaCartao{

    private:
        string BITitular;

    public:
        ContaEstudante();
        ContaEstudante(string BITit, long nConta, float sld, int sen);

        string getBITitular();
        void setBITitular(string BITit);

};


ContaEstudante::ContaEstudante(string BITit, long nConta, float sld, int sen){
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


#endif // CONTAESTUDANTE_H
