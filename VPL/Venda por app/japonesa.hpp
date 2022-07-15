#ifndef JAPONESA_H
#define JAPONESA_H

#include "produto.hpp"


class Japonesa : public Produto {
 public:
  Japonesa(const std::string& combinado,
           int sushi,
           int temaki,
           int hots,
           int qtd,
           float valor_unitario);

  
  std::string descricao() const override;
  float getValor() const;
  int getQtd() const;

 private:
  std::string _combinado;
  int _sushi;
  int _temaki;
  int _hots;
};
#endif