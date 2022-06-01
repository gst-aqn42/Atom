#ifndef VENDA_H
#define VENDA_H

#include "celular.hpp"

#include <list>
#include <string>


class Venda {
 public:

  void adicionaCelular(const Celular& celular);

  void recarregaEstoque(int cod, int qtd);

  void efetuaVenda(int cod, int qtd);

  void aplicaDesconto(const std::string& fabricante, float desconto);

  void removeModelo(int cod);

  void imprimeEstoque() const;

  void ordena();

 private:
 
  std::list<Celular> m_celulares;
};

#endif