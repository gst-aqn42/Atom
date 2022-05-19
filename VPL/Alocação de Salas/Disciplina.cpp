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
    std::map<std::string, Alocacao>::iterator it = map_alocacao.find(horario); //Apaga do map a alocacao de chave-valor horário
    if (it == map_alocacao.end() && it->first != horario){
        std::cout << "Horário não encontrado para a amatéria informada." << std::endl;
    }else{
        map_alocacao.erase(horario);
    }
}

void Disciplina::imprimir_alocacao(){
    std::map<std::string, Alocacao>::iterator it = map_alocacao.begin();
    while (it != map_alocacao.end()){
        std::cout << this->_codigo << " " << this->_nome << " ";
        it->second.imprimir_dados(); 
    }
    
}

int Disciplina::contar_alocacoes(){
    return map_alocacao.size();
}