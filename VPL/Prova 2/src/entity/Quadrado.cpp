#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Quadrado.hpp"

Quadrado::Quadrado(std::string &cor, double aresta){
  this->_cor = cor;
  this->_arestaQuadrado = aresta;
  this->_nome = "quadrado";
  
  set_area_quadrado(aresta);
  set_perimetro_quadrado(aresta);
}

Quadrado::~Quadrado(){
}

void Quadrado::set_area_quadrado(double aresta){
  double area = (aresta*aresta);
  set_area(area);
}

void Quadrado::set_perimetro_quadrado(double aresta){
  double perimetro = (4*aresta);
  set_perimetro(perimetro);
}
