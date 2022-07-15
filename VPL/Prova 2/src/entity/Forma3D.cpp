#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Forma3D.hpp"

Forma3D::Forma3D(){
  _volume = 0.0;
}

double Forma3D::get_volume(){
  return _volume;
}

std::string Forma3D::get_cor(){
  return cor;
}

std::string Forma3D::get_nome(){
  return nome;
}