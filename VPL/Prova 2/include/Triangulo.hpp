#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include "Forma2D.hpp"

class Triangulo : public Forma2D{ //Considerando um triângulo escaleno
public:
  Triangulo(std::string cor, int aresta_1, int aresta_2, int aresta_3);
  ~Triangulo();
  std::string get_cor() override;
  std::string get_nome() override;
  double get_area();
  double get_perimetro();
};

#endif