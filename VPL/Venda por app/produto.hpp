#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>

class Produto {
 public:
  
  int getQtd() const;
  float getValor() const;
  virtual std::string descricao() const = 0;
  virtual ~Produto() = default;

 protected:
  int m_qtd{0};
  float m_valor_unitario{0};
};
#endif