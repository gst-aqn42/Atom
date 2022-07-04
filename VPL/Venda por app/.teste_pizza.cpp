#include "./doctest-master/doctest/doctest.h"
#define doctest_config_implement_with_main
#include "pizza.hpp"
#include <vector>

TEST_CASE("Classe Pizza"){
    std::vector<Pizza*> _vect_pizza;
    Pizza* aux = new Pizza("Calabresa", 4, 1, 2, 60.9);
    _vect_pizza.push_back(aux);
    std::vector<Pizza*>::iterator it = _vect_pizza.begin();
    CHECK((*aux).getQtd() == 2);
    CHECK((*aux).getValor() == 60.90);
    
}
