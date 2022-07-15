#ifndef FORMA2D_HPP
#define FORMA2D_HPP

#include "Forma.hpp"

class Forma2D : public Forma{
private:
  double _area;
  double _perimetro;  
public:
  Forma2D();
  double get_area();
  double get_perimetro();
  std::string get_cor() override;
  std::string get_nome() override;

  void set_area(double area);
  void set_perimetro(double perimetro);
};

#endif