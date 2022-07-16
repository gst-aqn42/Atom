#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Quadrado.hpp"

Quadrado::Quadrado(std::string cor, int aresta){
  _cor = cor;
  _nome = "quadrado";
  _area = (aresta*aresta);
  _perimetro = (4*aresta);
}

Quadrado::~Quadrado(){
}

std::string Quadrado::get_cor(){
  return _cor;
}

std::string Quadrado::get_nome(){
  return _nome;
}

double Quadrado::get_area(){
  return _area;
}

double Quadrado::get_perimetro(){
  return _perimetro;
}