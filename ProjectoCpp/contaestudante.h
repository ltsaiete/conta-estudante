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
    ContaEstudante(string BITit, long nConta, int sen,float sld);

    string getBITitular();
    void setBITitular(string BITit);

    void saveToFile(ContaEstudante conta);
    void saveFromZero(ContaEstudante conta[]);
    ContaEstudante* readFromFile(ContaEstudante conta[]);
};

#endif // CONTAESTUDANTE_H
