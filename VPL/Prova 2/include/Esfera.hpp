#ifndef ESFERA_HPP
#define ESFERA_HPP  

#include "Forma3D.hpp"

class Esfera : public Forma3D{
public:
  Esfera(std::string cor, int raio);
  ~Esfera();
  double get_volume();
  std::string get_cor() override;
  std::string get_nome() override;
};

#endif