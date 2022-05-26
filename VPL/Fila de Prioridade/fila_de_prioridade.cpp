#include "fila_de_prioridade.hpp"
#include <iostream>

FilaDePrioridade::FilaDePrioridade(){
    primeiro_ = nullptr;
    tamanho_ = 0;
}

std::string FilaDePrioridade::primeiro() const{
    if (tamanho_ >= 1){
        return primeiro_->_nome;
    }else{
        std::cout <<  "A fila está vazia!" << std::endl;
    }
}

int FilaDePrioridade::tamanho() const{
    return tamanho_;
}

bool FilaDePrioridade::vazia() const{
    if (tamanho_ != 0){
        return false;
    }else{
        return true;
    }
}

void FilaDePrioridade::RemoverPrimeiro(){
    No* aux = new No;
    aux = primeiro_;
    primeiro_ = primeiro_->prox;
    
    delete aux;
}

void FilaDePrioridade::Inserir(int p, string s){
    
}