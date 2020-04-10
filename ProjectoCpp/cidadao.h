#ifndef CIDADAO_H
#define CIDADAO_H
#include <string>
using namespace std;


class Cidadao
{
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

#endif // CIDADAO_H
