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
