#include "Naves.hpp"
#include <cmath>

Nave::Nave(Ponto2D posicao, double forca){ //caso o usiário coloque foca = 0
    _posicao = posicao;
    if(forca != 0){
        _forca = forca;
    }else{
        _forca = 1.0;
    }
    _energia = 100.0;
}

Nave::Nave(Ponto2D posicao){ //caso o usuário simplesmente não coloque a variavel foca
    _posicao = posicao;
    _forca = 1.0;
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

double Nave::calcular_distancia(Nave nave){
    double dx = (nave.get_posicao_x() - this->get_posicao_x()); 
    double dy = (nave.get_posicao_y() - this->get_posicao_y());

    return sqrt(pow(dx, 2) + pow(dy, 2));
}

int Nave::determinar_indice_nave_mais_proxima(Nave naves[], int n){
    double aux = this->calcular_distancia(naves[0]); //variavel auxiliar que recebe o indice da nave mais próxima
    for (int i = 1; i < n; i++){
        if(this->calcular_distancia(naves[i]) < aux){
            aux = this->calcular_distancia(naves[i]);
        }

    }   
}

//Métodos Adicionais
double Nave::get_posicao_x(){
    return _posicao.get_x();
}
    
double Nave::get_posicao_y(){
    return _posicao.get_y();
}