#ifndef _NAVES_H
#define _NAVES_H

#include <string>
#include <vector>

class Naves{
 private:
    double distNaveProx = 0.0; double enerArmaz = 0.0; StrPonto *calcSalto; 
    StrPonto *pontProx;

 public:
    static int _identificador;

    Naves(double x, double y);
    ~Ponto();

    StrPonto nextSpaceship();
};



#endif