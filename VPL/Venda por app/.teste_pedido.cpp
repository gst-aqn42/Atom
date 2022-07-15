#include "pedido.hpp"
#include "pizza.hpp"
#include "hamburguer.hpp"
#include "japonesa.hpp"
#include <vector>

int main(){
  Pedido novo = Pedido();

  Pizza pizza = Pizza("Calabresa", 4, 1, 2, 60.90);
  novo.adicionaProduto(&pizza);
  Hamburguer hamburguer = Hamburguer("X-Tudo", 1, 2, 25.90);
  novo.adicionaProduto(&hamburguer);
  Japonesa japonesa = Japonesa("Combo 1",4,5,6,1,70);
  novo.adicionaProduto(&japonesa);
  novo.setEndereco("Rua Reitor Pires Albuquerque, ICEx - Pampulha, Belo Horizonte - MG");

  novo.resumo();

  std::cout << "Relatório de vendas:" << std::endl;
  std::cout << "Total de vendas: " << novo.calculaTotal() << std::endl;


  return 0;
}