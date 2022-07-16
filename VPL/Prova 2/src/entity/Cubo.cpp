#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Cubo.hpp"

Cubo::Cubo(std::string cor, int aresta){
  _cor = cor;
  _nome = "cubo";
  _volume = (aresta*aresta*aresta);
}

Cubo::~Cubo(){
}

double Cubo::get_volume(){
  return _volume;
}

std::string Cubo::get_cor(){
  return _cor;
}
  std::string Cubo::get_nome(){
  return _nome;
}


