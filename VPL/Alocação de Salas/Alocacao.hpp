#ifndef ALOCACAO_HPP    
#define ALOCACAO_HPP 
#include <string>

class Alocacao{
private:
    std::string _dia; std::string _horario; std::string _sala;
public:
    Alocacao(std::string dia, std::string horario, std::string sala);
    Alocacao();
    void imprimir_dados();

    //metodos adicionais
    std::string get_horario();
};
#endif