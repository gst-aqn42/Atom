#ifndef NAVES_HPP   
#define NAVES_HPP   

#include "Ponto2D.hpp"

class Nave{
    private:
        Ponto2D _posicao; double _forca = 0; double _energia;
    public:
        Nave(Ponto2D posicao, double forca);
        Nave(Ponto2D posicao);
        Nave();
        void mover(double dx, double dy);
        double calcular_distancia(Nave nave);
        int determinar_indice_nave_mais_proxima(Nave naves[], int n);
        void atacar(Nave naves[], int n);
        void imprimir_status();

        //Métodos Adicionais
        double get_posicao_x();
        double get_posicao_y();
};      


#endif