#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Esfera.hpp"

Esfera::Esfera(std::string cor, int raio){
  _cor = cor;
  _nome = "esfera";
  _volume = ((1.333)*(3.141592)*(raio*raio*raio));
}

Esfera::~Esfera(){
}

double Esfera::get_volume(){
  return _volume;
}

std::string Esfera::get_cor(){
  return _cor;
}

std::string Esfera::get_nome(){
  return _nome;
}