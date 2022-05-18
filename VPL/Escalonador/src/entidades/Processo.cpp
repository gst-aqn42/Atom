#include "Processo.hpp"
#include <iostream>

Processo::Processo(int id, std::string nome, int prioridade){
    _id = id;
    _nome = nome;
    _prioridade = prioridade;
}

void Processo::imprimir_dados(){
    std::cout << _id << " " << _nome << " " <<_prioridade << std::endl;
}

//Métodos Adicionas
int Processo::get_prioridade(){
    return _prioridade;
}

int Processo::get_id(){
    return _id;
}