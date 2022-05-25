#include "celular.hpp"
#include "venda.hpp"
#include <iostream>
void Venda::adicionaCelular(const Celular& celular){
   m_celulares.push_back(celular);
}

void Venda::recarregaEstoque(int cod, int qtd){
   std::list<Celular>::iterator it = m_celulares.begin();
   while (it != m_celulares.end()){
      if ((*it)._codigo == cod){
         (*it)._qtd += qtd;
         break;
      }else{
         it++;
      }
   }
   std::cout << "Produto não encontrado no estoque." << std::endl;
}

void Venda::efetuaVenda(int cod, int qtd){
   std::list<Celular>::iterator it = m_celulares.begin();
   while (it != m_celulares.end()){
      if ((*it)._codigo == cod){
         (*it)._qtd -= qtd;
         break;
      }else{
         it++;
      }
   }
   std::cout << "Produto não encontrado no estoque." << std::endl;
}

void Venda::aplicaDesconto(const std::string& fabricante, float desconto){
   std::list<Celular>::iterator it = m_celulares.begin();
   while (it != m_celulares.end()){
      if ((*it)._fabricante == fabricante){
         (*it)._valor = ((*it)._valor * (desconto/100));
         break;
      }else{
         it++;
      }
   }
   std::cout << "Produto não encontrado no estoque." << std::endl;
}