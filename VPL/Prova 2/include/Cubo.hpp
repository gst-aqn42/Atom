#ifndef CUBO_HPP
#define CUBO_HPP

#include "Forma3D.hpp"

class Cubo : public Forma3D{
public:
  Cubo(std::string cor, int aresta);
  ~Cubo();
  double get_volume();
  std::string get_cor() override;
  std::string get_nome() override;
};

#endif