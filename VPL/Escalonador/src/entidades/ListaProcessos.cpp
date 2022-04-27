#include "ListaProcessos.hpp"

void ListaProcessos::adicionar_processo(Processo proc){
    if (_primeiro._prox == nullptr){
        _primeiro = proc;
    }
    
}
Processo remover_processo_maior_prioridade();
Processo remover_processo_menor_prioridade();
Processo remover_processo_por_id(int id);
void imprimir_lista();