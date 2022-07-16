#ifndef CIRCULO_HPP 
#define CIRCULO_HPP 

#include "Forma2D.hpp"

class Circulo : public Forma2D{
private:
  int _raio;
public:
  Circulo(std::string cor, int raio);
  ~Circulo();
  double get_area();
  double get_perimetro();
  std::string get_cor() override;
  std::string get_nome() override;
};

#endif