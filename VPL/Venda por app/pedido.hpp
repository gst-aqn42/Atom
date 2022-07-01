#ifndef PEDIDO_H
#define PEDIDO_H

#include <list>

#include "hamburguer.hpp"
#include "japonesa.hpp"
#include "pizza.hpp"
#include "produto.hpp"


class Pedido {
 public:
  
  ~Pedido();

  
  void adicionaProduto(Produto* p);
  float calculaTotal() const;
  std::string resumo() const;
  void setEndereco(const std::string& endereco);

 private:
  std::list<Produto*> m_produtos;
  std::string m_endereco;
};
#endif