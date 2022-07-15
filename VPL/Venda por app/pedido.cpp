#include "pedido.hpp"

Pedido::~Pedido(){
  std::list<Produto*>::iterator it = m_produtos.begin();
  while (it != m_produtos.end()){
    auto aux = *it;
    it++;
    delete(aux);
  } // SegFault ao desalocar os ponteiros
}

  
void Pedido::adicionaProduto(Produto* p){
  m_produtos.push_back(p);
}

float Pedido::calculaTotal() const{
  float total = 0;
  auto it = m_produtos.begin();
  while (it != m_produtos.end()){
    total += (*it)->getValor()*(*it)->getQtd();
    it++;
  }
  return total;
}

std::string Pedido::resumo() const{
  auto it = m_produtos.begin();
  while (it != m_produtos.end()){
    (*it)->descricao();
    it++;
  }
  std::cout << "Endereco: " << m_endereco << std::endl; 
 return "";
}

void Pedido::setEndereco(const std::string& endereco){
  m_endereco = endereco;
}