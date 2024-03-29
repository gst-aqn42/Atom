#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Triangulo.hpp"
#include <cmath>
#include <iomanip>
#include <iostream>

Triangulo::Triangulo(std::string cor, int aresta_1, int aresta_2, int aresta_3){
  std::cout << std::fixed << std::showpoint;
  std::cout << std::setprecision(2);
  _cor = cor;
  _nome = "triangulo";
  _perimetro =  (aresta_1 + aresta_2 + aresta_3);
  double s = (_perimetro/2);
  _area = sqrt((s) * (s - aresta_1) * (s - aresta_2) * (s - aresta_3));
}

Triangulo::~Triangulo(){
}

std::string Triangulo::get_cor(){
  return _cor;
}

std::string Triangulo::get_nome(){
  return _nome;
}

double Triangulo::get_area(){
  return _area;
}

double Triangulo::get_perimetro(){
  return _perimetro;
}