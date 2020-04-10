#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include "cidadao.h"
#include <string>
using namespace std;

class Estudante:public Cidadao
{

protected: //Declaracao de Variaveis
        long numEst;
        string instituicao;
        string curso;

public:
    Estudante();
    Estudante(string nm, string nBI, string gen, long nEst, string inst, string curs);

            long getNumEst();
            string getInstituicao();
            string getCurso();

            void setNumEst(long nEst);
            void setInstituicao(string inst);
            void setCurso(string curs);
};

#endif // ESTUDANTE_H
