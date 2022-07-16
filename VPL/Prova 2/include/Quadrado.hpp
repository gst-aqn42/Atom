#ifndef QUADRADO_HPP
#define QUADRADO_HPP

#include "Forma2D.hpp"

class Quadrado : public Forma2D{
public:
  Quadrado(std::string cor, int aresta);
  ~Quadrado();
  std::string get_cor() override;
  std::string get_nome() override;
  double get_area();
  double get_perimetro();
};

#endif