#include "ListaProcessos.hpp"

ListaProcessos::ListaProcessos(){
}


void ListaProcessos::adicionar_processo(Processo proc){
    std::vector<Processo>::iterator it = Lista.begin();
    while(it->get_prioridade() >= proc.get_prioridade()){
        it++;
    }
    Lista.insert(it, proc);
}

Processo ListaProcessos::remover_processo_maior_prioridade(){
    std::vector<Processo>::iterator it = Lista.begin();
    Processo prc = Lista.at(0);
    Lista.erase(it);

    return prc;
}
Processo ListaProcessos::remover_processo_menor_prioridade(){
    Processo prc = *Lista.end();
    Lista.pop_back();

    return prc;
}

Processo ListaProcessos::remover_processo_por_id(int id){
    std::vector<Processo>::iterator it = Lista.begin();
    while(it->get_id() != id){
        it++;
    }
    Processo prc = *it;
    Lista.erase(it);

    return prc;
}

void ListaProcessos::imprimir_lista(){
    std::vector<Processo>::iterator it = Lista.begin();
    while (it < Lista.end()){
        it->imprimir_dados();
        it++;
    }
}