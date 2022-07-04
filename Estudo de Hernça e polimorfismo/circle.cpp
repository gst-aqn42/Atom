#include "circle.hpp"

Circle::Circle (double r) : radius(r) {_name = "circle";}

double Circle::area() const{return pi*radius*radius;}

