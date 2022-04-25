#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

// Tipo abastrato de dados que representa uma número complexo. 
class Complexo {
  // Atributos.
  private:
    double real;
    double imag;

  // Métodos.
  public:
    double modulo(){
        return sqrt(pow(real, 2) + pow(imag, 2));
    }
   
    Complexo conjugado(){

    }

    Complexo inverso(){
    
    }

    Complexo soma(Complexo y){
        
    }

    Complexo subtrair(Complexo y){
    }

    Complexo multiplicar(Complexo y){
    }

    Complexo dividir(Complexo y){
    }
};

pair<Complexo, Complexo> raizes(double a, double b, double c) {
}

int main () {
  cout << "Digite os coeficientes da equação f(x) = ax^2 + bx + c:" << endl;
  double a, b, c;
  cin >> a >> b >> c;
  auto r = raizes(a, b, c);
  cout << "(" << r.first.real << ", " << r.first.imag << ") "
       << "(" << r.second.real << ", " << r.second.imag << ")" << endl;
  return 0;
}