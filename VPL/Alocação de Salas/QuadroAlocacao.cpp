#include "QuadroAlocacao.hpp"

void QuadroAlocacao::inserir_alocacao(std::string codigo, std::string nome, std::string dia, std::string horario, std::string sala){
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

void QuadroAlocacao::remover_alocacao_disciplina(std::string codigo, std::string horario){
    std::map<std::string, Disciplina>::iterator it = map_quadro_alocacao.find(codigo);
    if (it == map_quadro_alocacao.end() && it->first != codigo){
        std::cout << "Nenhuma alocação foi encontrada para o código dado." << std::endl;
    }else{
        (*it).second.remover_alocacao(horario);
    }
}

//imprime a materia com mais salas alocadas
std::vector<Disciplina> QuadroAlocacao::recuperar_disciplinas_mais_ofertadas(){ 
    
}

void QuadroAlocacao::imprimir_alocacao_completa(){
    std::map<std::string, Disciplina>::iterator it = map_quadro_alocacao.begin();
    while(it != map_quadro_alocacao.end()){
        (*it).second.imprimir_alocacao();
        it++;
    }
}