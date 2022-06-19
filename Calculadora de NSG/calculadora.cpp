#include <iostream>

int main(){
  std::cout << "Digite o número de matérias cursadas no semestre: " << std::endl;
  int num_mat = 0;
  std::cin >> num_mat;

  int cred[num_mat + 1];
  double nota[num_mat + 1];
  for (int i = 1; i < num_mat + 1; i++){
    std::cout << "Digite o número de créditos e a nota da matéria: " << i <<std::endl;
    std::cin >> cred[i];
    std::cin >> nota[i];
  }

  double nota_x_cred = 0;
  for (int i = 1; i < num_mat + 1; i++){
    nota_x_cred += (cred[i]*nota[i]);
  }
  
  int tot_cred = 0;
  for (int i = 1; i < num_mat + 1; i++){
    tot_cred += cred[i];
  }

  double NSG = (nota_x_cred/tot_cred);

  std::cout << "O NSG esperado é: " << NSG << std::endl;
  
  return 0;
}