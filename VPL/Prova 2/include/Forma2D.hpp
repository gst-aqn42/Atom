#ifndef FORMA2D_HPP
#define FORMA2D_HPP

#include "Forma.hpp"

class Forma2D : public Forma{
protected:
  double _area;
  double _perimetro;  
public:
  Forma2D();
  double get_area();
  double get_perimetro();
};

#endif