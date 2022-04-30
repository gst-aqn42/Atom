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
      Complexo conj;
      conj.real = real; conj.imag = -imag;
      return conj;
    }

    Complexo inverso(){
      Complexo inv;
      if (real && imag != 0){
        inv.real = 1/real; inv.imag = 1/imag;
      }else{
        std::cout << " Não é possível fazer o inverso de um número 0 " << std::endl;
      }
      return inv;
    }

    Complexo soma(Complexo y){
      Complexo soma;
      soma.real = this->real + y.real; soma.imag = this->imag + y.imag;
      return soma;
    }

    Complexo subtrair(Complexo y){
      Complexo sub;
      sub.real = this->real - y.real; sub.imag = this->imag - y.imag;
      return sub;
    }

    Complexo multiplicar(Complexo y){
      Complexo mult;
      mult.real = ((this->real*y.real) - (this->imag*y.imag));
      mult.imag = ((this->real*y.imag) - (this->imag*y.real));
      return mult;
    }


    Complexo dividir(Complexo y){
      Complexo div;
      div.real = ((this->real*y.real) + (this->imag*y.imag))/((y.real*y.real) + (y.imag*y.imag));
      div.imag = ((y.real*this->imag) - (this->real*y.imag))/((y.real*y.real) + (y.imag*y.imag));
      return div;
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