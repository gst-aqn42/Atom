#include <iostream>

#include "tabuleiro.hpp"

using namespace std;

int main() {
  Tabuleiro *tab = new Tabuleiro();
  tab->imprime();
  
  bool esq = true;
  bool dir = false;
  
  bool ok = tab->movimenta(0, 0, esq);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();
  
  ok = tab->movimenta(0, 0, dir);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();
  
  ok = tab->movimenta(2, 0, esq);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();
  
  ok = tab->movimenta(2, 0, dir);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();
  
  ok = tab->movimenta(7, 3, dir);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();
  
  ok = tab->movimenta(7, 3, esq);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();
  
  ok = tab->movimenta(5, 2, dir);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();
  
  ok = tab->movimenta(5, 3, dir);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();
  
  ok = tab->movimenta(3, 1, dir);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();
  
  ok = tab->movimenta(5, 1, dir);
  if (!ok) cout << "Erro no movimento!";
  cout << endl;
  tab->imprime();

  delete tab;
  return 0;
}