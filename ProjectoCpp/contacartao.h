#ifndef CONTACARTAO_H
#define CONTACARTAO_H
#include "cidadao.h"
#include <string>
using namespace std;

class ContaCartao:public Cidadao
{
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

#endif // CONTACARTAO_H
