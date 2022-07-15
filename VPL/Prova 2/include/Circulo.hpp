#ifndef CIRCULO_HPP 
#define CIRCULO_HPP 

#include "Forma2D.hpp"

class Circulo : Forma2D{
private:
  double _raio;
public:
  Circulo(std::string &cor, double raio);
  ~Circulo();
  void set_area_circulo(double raio);
  void set_perimetro_circulo(double raio);
};

#endif