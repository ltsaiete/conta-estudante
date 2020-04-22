#include "validar.h"
#include <QMessageBox>
Validar::Validar()
{

}

bool Validar::validaString(string str, int min, int max){
    bool res = true;

    if(str.length()<min || str.length()>max){
        res = false;
    }

    return res;
}

bool Validar::validaInt(int n, int min, int max){
    bool res=true;

    if(n<min || n>max){
        res=false;
    }

    return res;
}

bool Validar::validaLong(long n, long min, long max){
    bool res=true;

    if(n<min || n>max){
        res=false;
    }

    return res;
}

bool Validar::validaFloat(float n, float min, float max){
    bool res=true;

    if(n<min || n>max){
        res=false;
    }

    return res;
}
