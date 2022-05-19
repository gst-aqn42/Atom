#ifndef QUADROALOCACAO_HPP
#define QUADROALOCACAO_HPP
#include <iostream>
#include "Disciplina.hpp"
#include <vector>


class QuadroAlocacao{
private:
    std::map<std::string, Disciplina> map_quadro_alocacao;
public:
    void inserir_alocacao(std::string codigo, std::string nome, std::string dia, std::string horario, std::string sala);
    void remover_alocacao(std::string codigo, std::string horario);
    std::vector<Disciplina> recuperar_disciplinas_mais_ofertadas();
    void imprimir_alocacao_completa();
   
};
#endif