//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN  
//#include "doctest-master/doctest/doctest.h"
#include "pizza.hpp"
#include <vector>

int main(){
    std::vector<Pizza> _vect_pizza;
    Pizza aux = Pizza("Calabresa", 4, 1, 2, 60.90);
    Pizza aux1 = Pizza("Peperoni", 8, 1, 1, 45.50);

    _vect_pizza.push_back(aux);
    _vect_pizza.push_back(aux1);

    std::vector<Pizza>::iterator it = _vect_pizza.begin();
    while (it != _vect_pizza.end()){
        it->descricao();
        std::cout << "Valor: " << it->getValor() << std::endl;
        std::cout << "Quantidade: " << it->getQtd() << std::endl;
        std::cout << "Valor total: " << it->getQtd()*it->getValor() << std::endl;
        it++;
    }

    return 0;
}
