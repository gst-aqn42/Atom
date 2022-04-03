#include "Naves.hpp"
#include <iostream>
#include <vector>

int Naves::_identificador = 0;
//Construtor e destrutor de um ponto
Naves::Naves(double x, double y){
   StrPonto Ponto;
   Ponto.x = x; Ponto.y = y;
   Ponto.id = _identificador;

   naves.push_back(Ponto);
   _identificador++;
}

Naves::~Naves(){
}


StrPonto Naves::nextSpaceship(){
   std::vector<StrPonto>::iterator it;
   for ( it = *(naves.begin()); it < *(naves.begin()); it++){
       
   }
   
}


