#include "QuadroAlocacao.hpp"

void QuadroAlocacao::inserir_alocacao(std::string cod, std::string name, std::string day, std::string hor, std::string room){
    std::string codigo; std::string dia;
    std::string horario; std::string nome;
    std::string sala;

    std::cin >> codigo; std::cin >> nome;
    std::cin >> dia; std::cin >> horario;
    std::cin >> sala;

    std::map<std::string, Disciplina>::iterator it = map_quadro_alocacao.find(codigo);
    if (it == map_quadro_alocacao.end() && it->first != codigo){
        Disciplina nova = Disciplina(codigo, nome);
        nova.inserir_alocacao(dia, horario, sala);
        std::pair<std::string, Disciplina> inserir(codigo, nova);
        map_quadro_alocacao.insert(inserir);    
    }else{
        (*it).second.inserir_alocacao(dia, horario, sala);
    }  
}

void QuadroAlocacao::remover_alocacao(std::string cod, std::string hor){
    std::string codigo; std::string horario;
    std::cin >> codigo; std::string horario;

    std::map<std::string, Disciplina>::iterator it = map_quadro_alocacao.find(codigo);
    if (it == map_quadro_alocacao.end() && it->first != codigo){
        std::cout << "Nenhuma alocação foi encontrada para o código dado." << std::endl;
    }else{
        (*it).second.remover_alocacao(horario);
    }
}

//imprime a materia com mais salas alocadas
std::vector<Disciplina> QuadroAlocacao::recuperar_disciplinas_mais_ofertadas(){ 
    std::map<std::string, Disciplina>::iterator it = map_quadro_alocacao.begin();
    
    while(it != map_quadro_alocacao.end()){
        if((*it).second.contar_alocacoes() > (*(it++)).second.contar_alocacoes()){
            
        }

        it++;
    }
}

void QuadroAlocacao::imprimir_alocacao_completa(){

}