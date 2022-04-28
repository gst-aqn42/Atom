#include "Naves.hpp"

Nave::Nave(Ponto2D posicao, double forca){
    _posicao = posicao;
    if(forca != 0){
        _forca = forca;
    }else{
        _forca = 1.0;
    }
    _energia = 100.0;
}

Nave::Nave(){
    _posicao = Ponto2D();
    _forca = 1.0;
    _energia = 100.0;
}

void Nave::mover(double dx, double dy){
    _posicao.set_x(dx);
    _posicao.set_y(dy);
}

