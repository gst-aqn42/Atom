#include <iostream>
#include "QuadroAlocacao.hpp"
#include "avaliacao_basica_alocacao.hpp"
#include <vector>
 int main(){

    QuadroAlocacao quadro;

    char entrada;
    while(std::cin >> entrada){
        switch (entrada){
            case 'a':{ //debugado
                std::string codigo; std::string nome; std::string dia;
                std::string horario; std::string sala;
                std::cin >> codigo; std::cin >> nome; std::cin >> dia;
                std::cin >> horario; std::cin >> sala;

                quadro.inserir_alocacao(codigo, nome, dia, horario, sala);
                
                break;
            }
            case 'm':{ //Reescrever
                quadro.recuperar_disciplinas_mais_ofertadas();
                break;
            }
            case 'r':{ //debugado
                std::string codigo; std::string horario;
                std::cin >> codigo;
                std::cin >> horario;
                quadro.remover_alocacao_disciplina(codigo, horario);
                
                break;
            }
            case 'p':{ //debugado
                quadro.imprimir_alocacao_completa();
                break;
            }
            case 'b':{
                avaliacao_basica();
            }
            default:{
                break;
            }
        }
    }
    return 0;
 }