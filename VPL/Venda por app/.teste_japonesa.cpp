#include "japonesa.hpp"
#include <vector>

int main(){
    std::vector<Japonesa> _vect_Japonesa;
    Japonesa aux = Japonesa("Combo 1",4,5,6,1,70);
    Japonesa aux1 = Japonesa("Combo 2",6,4,10,2,100);

    _vect_Japonesa.push_back(aux);
    _vect_Japonesa.push_back(aux1);

    std::vector<Japonesa>::iterator it = _vect_Japonesa.begin();
    while (it != _vect_Japonesa.end()){
        it->descricao();
        std::cout << "Valor: " << it->getValor() << std::endl;
        std::cout << "Quantidade: " << it->getQtd() << std::endl;
        std::cout << "Valor total: " << it->getQtd()*it->getValor() << std::endl;
        it++;
    }

    return 0;
}
