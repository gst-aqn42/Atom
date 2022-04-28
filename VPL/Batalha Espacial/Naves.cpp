#include "Naves.hpp"

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

double calcular_distancia(Nave nave){
    double dx = (nave.get_posicao_x() - this->get_posicao_x()); 
    double dy = (nave.get_posicao_y() - this->get_posicao_y());
}

int Nave::determinar_indice_nave_mais_proxima(Nave naves[], int n){
    int aux; //variavel auxiliar que recebe o indice da nave mais próxima
    for (int i = 0; i < n; i++){
        this->
    }
    
}



//Métodos Adicionais
double Nave::get_posicao_x(){
    return _posicao.get_x();
}
    
double Nave::get_posicao_y(){
    return _posicao.get_y();
}