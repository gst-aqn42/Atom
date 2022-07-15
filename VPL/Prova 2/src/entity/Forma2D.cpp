#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Forma2D.hpp"

Forma2D::Forma2D(){
  _area = 0.0;
  _perimetro = 0.0;
}

double Forma2D::get_area(){
  return _area;
}

double Forma2D::get_perimetro(){
  return _perimetro;
}

std::string Forma2D::get_cor(){
  return _cor;
}

std::string Forma2D::get_nome(){
  return _nome;
}

void Forma2D::set_area(double area){
  _area = area;
}

void Forma2D::set_perimetro(double perimetro){
  _perimetro = perimetro;
}