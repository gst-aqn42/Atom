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

  //Por padrão: [1] inicia o jogo
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

bool Tabuleiro::movimenta(int linha, int col, bool diag_esq) {
  int tamanho = _casas.size();
  if (linha < 0 || col < 0) return false;
  if (linha >= tamanho || col >= tamanho) return false;
  if (_casas[linha][col] == nullptr) return false;
  if (_casas[linha][col]->get_cor() != _da_vez) return false;

  /*
   * Seu código AQUI!! Garanta que não existem leaks.
   */

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
}