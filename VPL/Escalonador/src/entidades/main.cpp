#include <iostream>
#include "Processo.hpp"
#include "ListaProcessos.hpp"
#include "avaliacao_basica_escalonador.hpp"

int main(){
  char entrada;
  ListaProcessos listProc;
  while(std::cin >> entrada){
    switch (entrada){
      case 'a':{
        int id; int prioridade; std::string nome;
        std::cin >> id; 
        std::cin >> nome;
        std::cin >> prioridade;
        listProc.adicionar_processo(Processo(id, nome, prioridade));
        break;
      }
      case 'm':{
        listProc.remover_processo_maior_prioridade();
        break;
      }
      case 'r':{
        int id;
        std::cin >> id;
        listProc.remover_processo_por_id(id);
        break;
      }
      case 'n':{
        listProc.remover_processo_menor_prioridade();
        break;
      }
      case 'p':{
        listProc.imprimir_lista();
        break;
      }
      case 'b':{
        avaliacao_basica();
        break;
      }
    }
  
  }
  
  
  return 0;
}