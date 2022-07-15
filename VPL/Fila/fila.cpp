#include "fila.hpp"

struct No {
  int chave;
  No* proximo;
};

Fila::Fila() {
  primeiro_ = nullptr;
  ultimo_ = nullptr;
}

void Fila::Inserir(int k) {
  No* novo = new No;
  novo->chave = k;
  novo->proximo = nullptr;
  if (primeiro_ == nullptr){
    primeiro_ = novo;
    ultimo_ = novo;
  }else{
    if (primeiro_ == ultimo_){
      ultimo_ = novo;
      primeiro_->proximo = ultimo_;
    }else{
      No* aux = new No;
      aux = ultimo_;
      ultimo_ = novo;
      aux->proximo = ultimo_;
    }
  }
}

void Fila::RemoverPrimeiro() {
  if (primeiro_ == nullptr)
    throw ExcecaoFilaVazia{};
  No* apagar = new No;
  apagar = primeiro_;
  primeiro_ = apagar->proximo;
  delete (apagar);
}

int Fila::primeiro() const {
  if (primeiro_ == nullptr)
    throw ExcecaoFilaVazia{};
  return (*primeiro_).chave; 
}

int Fila::ultimo() const {
  if (primeiro_ == nullptr)
    throw ExcecaoFilaVazia{};
  return (*ultimo_).chave; 
}
int Fila::tamanho() const {
  int count = 0;
    No* aux = new No;
    No* it = new No;
    it = primeiro_;
    while (it != nullptr){
      count++;
      aux = it->proximo;
      it = aux;
    }
  return count;
}