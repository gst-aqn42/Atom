#ifndef _NAVES_H
#define _NAVES_H

#include <string>
#include <vector>

class Naves{
 private:
    double distNaveProx = 0.0; double enerArmaz = 0.0; double raioAlcance = 0.0;
    StrPonto *calcSalto; 

 public:
    static int _identificador;

    Naves(double x, double y);
    ~Naves();

    StrPonto nextSpaceship();
};

//Struct que faz um ponto
struct StrPonto{
    double x; double y;
    int id = 0;
};

#endif