#include "Naves.hpp"
#include <cmath>
#include <iostream>

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
    double aux = 0; int count = 0;
    for (int i = 0; i < n; i++){
        if (aux == 0){
            aux = calcular_distancia(naves[i]);
            count = i;
        }else{
            if (aux > calcular_distancia(naves[i])){
                aux = calcular_distancia(naves[i]);
                count = i;
            }
        }    
    }
    return count;
}

void Nave::atacar(Nave naves[], int n){
    int proxNave = determinar_indice_nave_mais_proxima(naves, n);
    double dano = (this->_forca*100)/calcular_distancia(naves[proxNave]);
    if (dano > 30){
        dano = 30;
    }
    naves[proxNave]._energia = naves[proxNave]._energia - dano;
    if (naves[proxNave]._energia <= 50){
        std::cout << "Energia Baixa!" << std::endl;
    }
}

void Nave::imprimir_status(){
    std::cout << get_posicao_x() << " " << get_posicao_y() << " " << _energia << std::endl;
}

//Métodos Adicionais
double Nave::get_posicao_x(){
    return _posicao.get_x();
}
    
double Nave::get_posicao_y(){
    return _posicao.get_y();
}