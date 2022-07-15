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
  return ""; //O que é este retorno (?) R: Como era esperado: nada, apenas permite usar a string como valor de retorno sem um retorno real
}

float Pizza::getValor() const{ // Mas também se ela for chamada diretamente de produto retornará o valor, entretanto dará erro de compilação
  return m_valor_unitario;
}

int Pizza::getQtd() const{ // O erro é devido a multiplas classes chamarem um mesmo retorno de função da classe pai
  return m_qtd;
}