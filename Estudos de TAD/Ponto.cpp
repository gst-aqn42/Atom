#include "Naves.hpp"
#include <iostream>
#include <vector>

int Naves::_identificador = 0;
//Construtor e destrutor de um ponto
Ponto::Ponto(double x, double y){
   StrPonto Ponto;
   Ponto.x = x; Ponto.y = y;
   Ponto.id = _identificador;

   naves.push_back(Ponto);
   _identificador++;
}

Naves::~Ponto(){
}


StrPonto Naves::nextSpaceship(){
   std::vector<StrPonto>::iterator it;
   for ( it = *(naves.begin()); it < *(naves.begin()); it++){
       
   }
   
}

//Struct que faz um ponto
struct StrPonto{
    double x; double y;
    int id = 0;
};
