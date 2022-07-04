#include "pizza.hpp"

Pizza:: Pizza(const std::string& sabor, int pedacos, bool borda_recheada, int qtd, float valor_unitario){
  _sabor = sabor; _pedacos = pedacos;
  _borda_recheada = borda_recheada;
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
}

std::string Pizza::descricao() const{
  std::cout << m_qtd << "X " << "Pizza " << _sabor << ", " << _pedacos << " pedacos e ";
  if(_borda_recheada == true){
    std::cout << "borda recheada."<< std::endl;
  }else{
    std::cout << "sem borda recheada."<< std::endl;
  }
  return ""; //O que é este retorno (?)
}