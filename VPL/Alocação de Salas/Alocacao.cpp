#include "Alocacao.hpp"
#include <iostream>

Alocacao::Alocacao(std::string dia, std::string horario, std::string sala){
    _dia = dia; _horario = horario; _sala = sala;
}

Alocacao::Alocacao(){
}

void Alocacao::imprimir_dados(){
    std::cout << _dia << " " << _horario << " " << _sala <<std::endl;
}

std::string Alocacao::get_horario(){
    return _horario;
}

