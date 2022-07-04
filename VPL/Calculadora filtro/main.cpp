#include <iostream>

int main(){

    char entrada;
    while (std::cin >> entrada){
        switch (entrada){
        case 'a':{
            double _d_tempo, _freq;
            std::cin >> _freq >> _d_tempo;
            std::cout << calcular_fase(_d_tempo, _freq);
            break;
        }
        default:
            break;
        }
    }
    
    return 0;

    double calcular_fase(double d_tempo, double freq);
}

double calcular_fase(double d_tempo, double freq){
    return ((d_tempo*freq)*360);
}