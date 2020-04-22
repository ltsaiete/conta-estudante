#ifndef VALIDAR_H
#define VALIDAR_H
#include <string>
using namespace std;

class Validar
{
public:
    Validar();
    bool validaString(string str, int min, int max);
    bool validaInt(int n, int min, int max);
    bool validaLong(long n, long min, long max);
    bool validaFloat(float n, float min, float max);
};

#endif // VALIDAR_H
