#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

class Pizza : public Produto {
 public:

  Pizza(const std::string& sabor,
        int pedacos,
        bool borda_recheada,
        int qtd,
        float valor_unitario);

  std::string descricao() const override;
  float getValor() const; // Se a classe for implementada aqui e chamada no CPP ela retornará o valor
  int getQtd() const; 
  
 private:
  std::string _sabor;
  int _pedacos;
  bool _borda_recheada;
};

#endif