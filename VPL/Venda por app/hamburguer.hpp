#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"

class Hamburguer : public Produto {
 public:
  
  Hamburguer(const std::string& tipo,
             bool artesanal,
             int qtd,
             float valor_unitario);

  
  std::string descricao() const override;

 private:
  std::string _tipo;
  bool _artesanal;
};
#endif