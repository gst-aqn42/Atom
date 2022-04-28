#include <iostream>

unsigned factorial(int arg) {
    if (arg <= 0){
        return 1;
    }else{
        int resposta = 1;
        while (arg > 1){
            resposta *= arg;
            arg--;
        }
        std::cout << resposta << std::endl;
    }
  return 0;
}

unsigned interval(double start, double end) {
    int inicio = start;
    int fim = end;
    int count = 0;
    if (inicio != fim){
        double intervalo = end - start;
        for (double x = 0; x <= intervalo; x++){
            count++;
        }
        std::cout << count << std::endl;
    }else{
        std::cout << count << std::endl;
    }    
  return 0;
}


int main() {
  char test = 0;
  std::cin >> test;
  switch (test) {
    case 'f': {
      int arg = 0;
      std::cin >> arg;
      std::cout << factorial(arg) << std::endl;
    }
    break;
    case 'i': {
      double arg0 = 0;
      double arg1 = 0;
      std::cin >> arg0 >> arg1;
      std::cout << interval(arg0, arg1) << std::endl;
    }
    break;
  }
}