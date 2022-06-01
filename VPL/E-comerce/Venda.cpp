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
         if ((*it)._qtd >= qtd){
            (*it)._qtd -= qtd;
            break;
         }else{
            std::cout << "Não existem produtos sufucientes para a venda." << std::endl;
            break;
         }
      }else{
         it++;
      }
   }
}

void Venda::aplicaDesconto(const std::string& fabricante, float desconto){
   std::list<Celular>::iterator it = m_celulares.begin();
   while (it != m_celulares.end()){
      if ((*it)._fabricante == fabricante){
         (*it)._valor = ((*it)._valor - ((*it)._valor * (desconto/100)));
      }else{
         it++;
      }
   }
}

void Venda::removeModelo(int cod){
   std::list<Celular>::iterator it = m_celulares.begin();
   while (it != m_celulares.end()){
      if ((*it)._codigo == cod){
         m_celulares.erase(it);
         break;
      }else{
         it++;
      }
   }
   std::cout << "Produto não encontrado no estoque." << std::endl;
}

void Venda::imprimeEstoque() const{
   for ( auto it = m_celulares.begin(); it != m_celulares.end(); it++){
      if ((*it)._qtd >= 1){
         std::cout << (*it)._fabricante << " " << (*it)._modelo << ", " << (*it)._armazenamento << "GB, " 
         << (*it)._memoria << "GB, " << (*it)._peso << " gramas, " << (*it)._cor << ", " << (*it)._qtd << " restantes, " 
         << "R$ " << (*it)._valor << std::endl;
      }
   }
}

void Venda::ordena(){
   
}