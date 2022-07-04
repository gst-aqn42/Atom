#include "fila_de_prioridade.hpp"
#include <iostream>

FilaDePrioridade::FilaDePrioridade(){
    primeiro_ = nullptr;
    tamanho_ = 0;
}

std::string FilaDePrioridade::primeiro() const{
    if (tamanho_ != 0){
        return primeiro_->_nome;
    }else{
        std::cout <<  "A fila está vazia!" << std::endl;
        return primeiro_->_nome;
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
    if (tamanho_ == 0){
        std::cout << "Fila Vazia." << std::endl;
        return;
    }
    
    No* aux = new No;
    aux = primeiro_;
    primeiro_ = primeiro_->prox;
    
    delete aux;
    tamanho_--;
}

void FilaDePrioridade::Inserir(int p, string s){
    //instancia o novo objeto
    No* novo = new No;
    novo->_idade = p;
    novo->_nome= s;
    novo->prox = nullptr;

    //Insere de forma ordenada
    if (primeiro_ == nullptr){
        primeiro_ = novo;
        tamanho_ ++;
        return;
    }else{
        No* aux = primeiro_;
        while (aux != nullptr){
            if (aux->_idade < novo->_idade){
                No* aux_muda = new No;
                *aux_muda = *aux;
                aux_muda->prox = aux->prox;
                *aux = *novo;
                aux->prox = aux_muda;

                tamanho_++;
                return;
            }
            aux = aux->prox;
        }
        if (aux == nullptr){
            aux = primeiro_;
            while(aux->prox != nullptr){
                aux = aux->prox;
            }
            aux->prox = novo;
            tamanho_++;
        }
    }
}

void FilaDePrioridade::Limpar(){
    No *aux = new No;
    aux = primeiro_;
    if (aux == nullptr){
        std::cout << "Fila Vazia." << std::endl;
        return;
    }else{
        while (aux != nullptr){
            primeiro_ = primeiro_->prox;
            delete aux;
            aux = primeiro_;
        }
    }   
}