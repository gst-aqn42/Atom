#include "venda.hpp"
#include "iomanip"
#include <iostream>

void Venda::adicionaPedido(Pedido* p){
    m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const{
    int count = 0;
    auto it = m_pedidos.begin();
    while (it != m_pedidos.end()){
        count++;
        std::cout << "Pedido " << count << std::endl;
        (*it)->resumo();
        it++;
    }
    std::cout << "Relatorio de Vendas" << std::endl;
    std::cout << "Total de vendas: R$ ";
    double totalVendas = 0;
    it = m_pedidos.begin();
    while (it != m_pedidos.end()){
        totalVendas += (*it)->calculaTotal();
        it++;
    } 
    std::cout << std::fixed << std::setprecision(2);
    std::cout << totalVendas << std::endl;
    std::cout << "Total de pedidos: " << count << std::endl;
}

Venda::~Venda(){
    auto it = m_pedidos.begin();
    while (it != m_pedidos.end()){
        Pedido* aux = new Pedido;
        aux = (*it);
        it++;
        delete(aux);
    }
}