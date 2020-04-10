#include "contacartao.h"

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

