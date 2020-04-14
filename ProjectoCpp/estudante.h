#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include "cidadao.h"
#include <string>
#include <fstream>
using namespace std;

class Estudante:public Cidadao
{

protected: //Declaracao de Variaveis
        long numEst;
        string instituicao;
        string curso;

public:
    Estudante();
    Estudante(string nm, string nBI, long nEst, string gen,  string inst, string curs);

            long getNumEst();
            string getInstituicao();
            string getCurso();

            void setNumEst(long nEst);
            void setInstituicao(string inst);
            void setCurso(string curs);

            string toString();

            void saveToFile(Estudante& estudante);

};

#endif // ESTUDANTE_H
