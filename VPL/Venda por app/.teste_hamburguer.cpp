#include "hamburguer.hpp"
#include <vector>


int main(){
    std::vector<Hamburguer> _vect_hamburguer;
    Hamburguer aux = Hamburguer("X-Tudo", 1, 2, 25.90);
    Hamburguer aux1 = Hamburguer("X-Bacon", 0, 1, 19.90);

    _vect_hamburguer.push_back(aux);
    _vect_hamburguer.push_back(aux1);

    std::vector<Hamburguer>::iterator it = _vect_hamburguer.begin();
    while (it != _vect_hamburguer.end()){
        it->descricao();
        std::cout << "Valor: " << it->getValor() << std::endl;
        std::cout << "Quantidade: " << it->getQtd() << std::endl;
        std::cout << "Valor total: " << it->getQtd()*it->getValor() << std::endl;
        it++;
    }

    return 0;
}