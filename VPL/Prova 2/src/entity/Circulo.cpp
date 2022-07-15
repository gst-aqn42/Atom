#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Circulo.hpp"

Circulo::Circulo(std::string &cor, double raio){
  this->_cor = cor;
  this->_raio= raio;
  this->_nome = "circulo";

  set_area_circulo(raio);
  set_perimetro_circulo(raio);
}

Circulo::~Circulo(){
}

void Circulo::set_area_circulo(double raio){
  double area = (14.1592)*(raio*raio); //area = pi*(raio*raio)
  set_area(area);
}

void Circulo::set_perimetro_circulo(double raio){

}