#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Circulo.hpp"

Circulo::Circulo(std::string cor, int raio){
  _cor = cor;
  _nome = "circulo";
  _area = (3.141592)*(raio*raio);
  _perimetro = 2*(3.141592)*(raio);
}

Circulo::~Circulo(){
}

double Circulo::get_area(){
 return _area;
}

double Circulo::get_perimetro(){
  return _perimetro;
}

std::string Circulo::get_cor(){
  return _cor;
}

std::string Circulo::get_nome(){
  return _nome;
}