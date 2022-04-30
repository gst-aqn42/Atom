#include <iostream>
#include "Processo.hpp"
#include "ListaProcessos.hpp"
//#include "avaliacao_basica_escalonador.hpp"

int main() {
  char entrada;
  std::cin >> entrada;
  switch (entrada) {
    case 'a':
        int id; int prioridade; std::string nome;
        std::cin >> id, nome, prioridade;
        adicionar_processo(Processo(id, nome, prioridade));
        break;
    case 'm':
      remover_processo_maior_prioridade();
      break;
    case 'r':
      int id;
      std::cin >> id;
      remover_processo_por_id(id);
      break;
    case 'p':
      imprimir_lista();
      break;
    /*case 'b':
      avaliacao_basica();
      break;
    default:
      std::cout << "Erro: teste invalido: " << tipo_teste << std::endl;*/
  }
  return 0;
}