#ifndef PONTO2D_HPP
#define PONTO2D_HPP

class Ponto2D{
   private:
      double _x; double _y;
   
   public:
      Ponto2D(double x, double y);
      Ponto2D();
      double calcular_distancia(Ponto2D ponto);

      //Métodos Adicionais
      double get_x();
      double get_y();
      void set_x(double dx);
      void set_y(double dy);
};


#endif