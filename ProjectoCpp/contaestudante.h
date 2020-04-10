#ifndef CONTAESTUDANTE_H
#define CONTAESTUDANTE_H
#include "contacartao.h"
#include "estudante.h"
#include <string>
using namespace std;


class ContaEstudante:public ContaCartao, Estudante
{
private:
        string BITitular;
public:
    ContaEstudante();
    ContaEstudante(string BITit, long nConta, float sld, int sen);

            string getBITitular();
            void setBITitular(string BITit);
};

#endif // CONTAESTUDANTE_H
