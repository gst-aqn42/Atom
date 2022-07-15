#ifndef QUADRADO_HPP
#define QUADRADO_HPP

#include "Forma2D.hpp"

class Quadrado : public Forma2D{
private:
  double _arestaQuadrado;
public:
  Quadrado(std::string &cor, double aresta);
  ~Quadrado();
  void set_area_quadrado(double aresta);
  void set_perimetro_quadrado(double aresta);
};

#endif