#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include <string>
#include "Alocacao.hpp"
#include <map>
#include <vector>

class Disciplina{
private:
    std::string _codigo; std::string _nome; std::map<std::string, Alocacao> map_alocacao;
    
public:
    Disciplina(std::string codigo, std::string nome);
    void inserir_alocacao(std::string dia, std::string horario, std::string sala);
    void remover_alocacao(std::string horario);
    void imprimir_alocacao();

    //Métodos Auxiliares
    int contar_alocacoes();
};
#endif