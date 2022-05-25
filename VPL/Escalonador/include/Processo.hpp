#ifndef PROCESSO_HPP
#define PROCESSO_HPP

#include <string>

class Processo{
private:
    int _id = 0; std::string _nome; int _prioridade = 0;
    
public:

    Processo(int id, std::string nome, int prioridade);
    void imprimir_dados();
    
    // Métodos Adicionais
    int get_prioridade();
    int get_id();
};

#endif

