#ifndef LISTAPROCESSOS_HPP
#define LISTAPROCESSOS_HPP

#include "Processo.hpp"

class ListaProcessos{
private:
    Processo _primeiro; Processo _ultimo;
public:
    void adicionar_processo(Processo proc);
    Processo remover_processo_maior_prioridade();
    Processo remover_processo_menor_prioridade();
    Processo remover_processo_por_id(int id);
    void imprimir_lista();
};


#endif