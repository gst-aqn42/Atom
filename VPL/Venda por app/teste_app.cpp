#include "pizza.hpp"
#include "hamburguer.hpp"
#include "japonesa.hpp"
#include "pedido.hpp"
#include "venda.hpp"


int main(){
  Venda Julho;

  Pedido novo = Pedido();

  Pizza pizza = Pizza("Calabresa", 4, 1, 2, 60.90);
  novo.adicionaProduto(&pizza);
  Hamburguer hamburguer = Hamburguer("X-Tudo", 1, 2, 25.90);
  novo.adicionaProduto(&hamburguer);
  novo.setEndereco("Rua Reitor Pires Albuquerque, ICEx - Pampulha, Belo Horizonte - MG");

  Julho.adicionaPedido(&novo);

  Pedido novo1 = Pedido();

  Pizza pizza1 = Pizza("Frango com catupiry",6,0,1,55.90);
  novo1.adicionaProduto(&pizza1);
  Hamburguer hamburguer1 = Hamburguer("X-salada",0,4,15);
  novo1.adicionaProduto(&hamburguer1);
  Japonesa japonesa = Japonesa("Combo 1",4,5,6,1,70);
  novo1.adicionaProduto(&japonesa);
  novo1.setEndereco("Av. Pres. Antonio Carlos, 6627 - Pampulha, Belo Horizonte - MG");

  Julho.adicionaPedido(&novo1);

  Julho.imprimeRelatorio();

  return 0;
}