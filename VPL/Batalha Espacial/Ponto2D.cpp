#include "Ponto2D.hpp"
#include <cmath>

Ponto2D::Ponto2D(double x, double y){
    _x = x;
    _y = y;
}

Ponto2D::Ponto2D(){
    _x = 0.0;
    _y = 0.0;
}

double Ponto2D::calcular_distancia(Ponto2D ponto){
    return sqrt(pow(ponto.get_x(),2) + pow(ponto.get_y(),2));
}

//Métodos Adicionais
double Ponto2D::get_x(){
    return _x;
}

double Ponto2D::get_y(){
    return _y;
}

void Ponto2D::set_x(double dx){
    _x = _x + dx;
}

void Ponto2D::set_y(double dy){
    _y = _y + dy;
}