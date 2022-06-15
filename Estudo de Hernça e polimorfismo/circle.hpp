#ifndef CIRCLE
#define CIRCLE

const double pi = 3.1415927;
#include <iostream>
#include "shape.hpp"

class Circle : public shape{
  double radius;
  public:
    Circle(double r=0.0);
    double area() const;

};
#endif