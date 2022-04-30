#include "Disciplina.hpp"
#include <iostream>

Disciplina::Disciplina(std::string codigo, std::string nome){
    _codigo = codigo;
    _nome = nome;
}

void Disciplina::inserir_alocacao(std::string dia, std::string horario, std::string sala){
    Alocacao novo = Alocacao(dia, horario, sala);
    std::pair<std::string, Alocacao> inserir(horario, novo);
    map_alocacao.insert(inserir);
}

void Disciplina::remover_alocacao(std::string horario){
    map_alocacao.erase(horario); //Apaga do map a alocacao de chave-valor horário
}

void Disciplina::imprimir_alocacao(){
    std::map<std::string, Alocacao>::iterator it = map_alocacao.begin();
    while (it != map_alocacao.end()){
        std::pair<std::string, Alocacao> it_pair(*it);
        if (this->_nome == ){
            std::cout << _codigo << " " << _nome << " " << it_pair.second.imprimir_dados() << std::endl;
        }
        
    }
    
}


