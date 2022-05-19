#include <iostream>
#include "Alocacao.hpp"
#include <vector>
 int main(){
    std::vector<Alocacao> Sala;

    char entrada;
    while(std::cin >> entrada){
        switch (entrada){
            case 'a':{
                std::string dia; std::string horario; std::string sala;
                std::cin >> dia; std::cin >> horario; std::cin >> sala;
                Sala.push_back(Alocacao(dia, horario, sala));
                break;
            }
            case 'b':{
                std::vector<Alocacao>::iterator it = Sala.begin();
                while(it != Sala.end()){
                    it->imprimir_dados();
                    it++;
                }
            }
            default:{
                break;
            }
        }
    }
    return 0;
 }