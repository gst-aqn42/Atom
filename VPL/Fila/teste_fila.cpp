#include "fila.hpp"
#include <iostream>

int main(){
  Fila fila;

  fila.Inserir(-11);
  std::cout << fila.primeiro() << std::endl;
  std::cout << fila.tamanho() << std::endl;
  std::cout << fila.primeiro() << std::endl;

  return 0;
}