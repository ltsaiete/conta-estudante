#include "contaestudante.h"

ContaEstudante::ContaEstudante()
{

}


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
