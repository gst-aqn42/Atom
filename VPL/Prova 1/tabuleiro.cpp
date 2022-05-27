#include <iostream>

#include "tabuleiro.hpp"


Tabuleiro::Tabuleiro() {
  int tamanho = 8;
  int inicio = 3;

  //Cria o tabuleiro matríz vazio.
  for (int i = 0; i < tamanho; i++) {
    _casas.push_back(vector<Peca *>());
    for (int j = 0; j < tamanho; j++) {
      _casas[i].push_back(nullptr);
    }
  }

  //Preenche as posições [1]; Inicio = 3 linhas de altura, Tamanho = 8 linhas de largura.
  for (int i = 0; i < inicio; i++) {
    for (int j = 0; j < tamanho - 1; j+=2) {
      if (i % 2 == 0)
        _casas[i][j] = new Peca(Cor::VERMELHA);
      else
        _casas[i][j+1] = new Peca(Cor::VERMELHA);
    }
  }

  //Preenche as posições [0]; 'i' irá percorrer do fim da matríz até o início da terceira linha (de trás para frente)
  //adicionando os elementos.
  for (int i = tamanho - 1; i >= tamanho - inicio; i--) {
    for (int j = 0; j < tamanho - 1; j+=2) {
      if (i % 2 == 0)
        _casas[i][j] = new Peca(Cor::PRETA);
      else
        _casas[i][j+1] = new Peca(Cor::PRETA);
    }
  }

  //Por definição: [1] inicia o jogo
  _da_vez = Cor::VERMELHA;
}

Tabuleiro::~Tabuleiro() {
  for (vector<Peca *> linha : _casas) {
    for (Peca *peca_ptr : linha) {
      if (peca_ptr != nullptr) {
        delete peca_ptr;
      }
    }
  }
}


//Tomando o tabuleirocomo referencial de movimentação
bool Tabuleiro::movimenta(int linha, int col, bool diag_esq) {
  int tamanho = _casas.size(); //tamanho = 8 (limite do tabuleiro)
  
  //validação para movimentar a peça (se ela está no tabuleiro, se existe e se é da cor da vez)
  if (linha < 0 || col < 0) return false;
  if (linha >= tamanho || col >= tamanho) return false;
  if (_casas[linha][col] == nullptr) return false;
  if (_casas[linha][col]->get_cor() != _da_vez) return false;

  //Movimento vermelha
  if (_casas[linha][col]->get_cor() == Cor::VERMELHA){

    int nova_linha = linha + 1;
    int nova_col = 0;
    if (diag_esq == true){
      nova_col = col - 1;
    }else{
      nova_col = col + 1;
    }
    
    //validação do movimento e comer peça adversária
    //(se continua no tabuleiro após o movimento e se o novo ponto está vazio ou possui peça adversária)
    if (nova_linha < 0 || nova_col < 0) return false;
    if (nova_linha >= tamanho || nova_col >= tamanho) return false;
    
    if (_casas[nova_linha][nova_col] != nullptr){
      if (_casas[nova_linha][nova_col]->get_cor() == Cor::VERMELHA){
        return false;
      }else{
        int linha_jump = nova_linha + 1;
        int col_jump = 0;
        if(diag_esq == true){
          col_jump = nova_col - 1;
        }else{
          col_jump = nova_col + 1;
        }

        //validação do movimento para comer a peça adversária
        //(se continua no tabuleiro após o movimento e se o novo ponto está vazio ou possui peça adversária)
        if (linha_jump < 0 || col_jump < 0) return false;
        if (linha_jump >= tamanho || col_jump >= tamanho) return false;

        if (_casas[linha_jump][col_jump] != nullptr){
          return false;
        }else{
          Peca *peca_ptr = _casas[nova_linha][nova_col];
          delete peca_ptr;
          _casas[nova_linha][nova_col] = nullptr;
          Peca *aux_peca_ptr = _casas[linha][col];
          delete aux_peca_ptr;
          _casas[linha][col] = nullptr;

          _casas[linha_jump][col_jump] = new Peca(Cor::VERMELHA);
        }
      }
    }else{
      Peca *peca_ptr =   _casas[linha][col];
      delete peca_ptr;
      _casas[linha][col] = nullptr;

      _casas[nova_linha][nova_col] = new Peca(Cor::VERMELHA);
    }
  
  }else{
    int nova_linha = linha - 1;
    int nova_col = 0;
    if (diag_esq == true){
      nova_col = col - 1;
    }else{
      nova_col = col + 1;
    }

    //validação do movimento para op novo ponto
    //(se continua no tabuleiro após o movimento e se o novo ponto está vazio ou possui peça adversária)
    if (nova_linha < 0 || nova_col < 0) return false;
    if (nova_linha >= tamanho || nova_col >= tamanho) return false;

    if (_casas[nova_linha][nova_col] != nullptr){
      if (_casas[nova_linha][nova_col]->get_cor() == Cor::PRETA){
        return false;
      }else{
        int linha_jump = nova_linha - 1;
        int col_jump = 0; // col_pula é um som cacofônico
        if (diag_esq == true){
          col_jump = nova_col - 1;
        }else{
          col_jump = nova_col + 1;
        }

        //validação do movimento para comer a peça adversária
        //(se continua no tabuleiro após o movimento e se o novo ponto está vazio ou possui peça adversária)
        if (linha_jump < 0 || col_jump < 0) return false;
        if (linha_jump >= tamanho || col_jump >= tamanho) return false;

        if (_casas[linha_jump][col_jump] != nullptr){
          return false;
        }else{
          Peca *peca_ptr = _casas[nova_linha][nova_col];
          delete peca_ptr;
          _casas[nova_linha][nova_col] = nullptr;
          Peca *aux_peca_prt = _casas[linha][col];
          delete aux_peca_prt;
          _casas[linha][col] = nullptr;

          _casas[linha_jump][col_jump] = new Peca(Cor::PRETA);
        }
      }
    }else{
      Peca *peca_ptr = _casas[linha][col];
      delete peca_ptr;
      _casas[linha][col] = nullptr;
      _casas[nova_linha][nova_col] = new Peca(Cor::PRETA);
    }
  }
  
  //Após o movimento passa a vez
  if (_da_vez == Cor::VERMELHA) {
    _da_vez = Cor::PRETA;
  } else {
    _da_vez = Cor::VERMELHA;
  }
  return true;
}

void Tabuleiro::imprime() {
  for (vector<Peca *> linha : _casas) {
    for (Peca *peca_ptr : linha) {
      if (peca_ptr == nullptr) {
        cout << " [" << " " << "] ";  
      } else {
        cout << " [" << peca_ptr->get_cor() << "] ";
      }
    }
    cout << endl;
  }
  cout << endl;
  cout << "Daz vez: " << Tabuleiro::_da_vez << endl;
}