#include "Processo.hpp"
#include <iostream>

Processo::Processo(int id, std::string nome, int prioridade){
    _id = id;
    _nome = nome;
    _prioridade = prioridade;
}

void Processo::imprimir_dados(){
    std::cout << _id << _nome << _prioridade << std::endl;
}