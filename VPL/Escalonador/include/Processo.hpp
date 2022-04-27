#ifndef PROCESSO_HPP
#define Processo_HPP

#include <string>

class Processo{
private:
    int _id; std::string _nome; int _prioridade;
    
public:
    Processo* _prox = nullptr; Processo* _ante = nullptr;

    Processo(int id, std::string nome, int prioridade);
    void imprimir_dados();
};

#endif

