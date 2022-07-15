#include "hamburguer.hpp"

std::string Hamburguer::descricao() const {
  std::cout << m_qtd << "X " << "Hamburguer " << _tipo << " ";
  if(_artesanal == true){
    std::cout << "artesanal."<< std::endl;
  }else{
    std::cout << "simples."<< std::endl;
  }
   
  return "";
}

Hamburguer::Hamburguer(const std::string& tipo,
                       bool artesanal,
                       int qtd,
                       float valor_unitario) {
  _tipo = tipo;
  _artesanal = artesanal;
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
}

float Hamburguer::getValor() const{
  return m_valor_unitario;
}

int Hamburguer::getQtd() const{
  return m_qtd;
}