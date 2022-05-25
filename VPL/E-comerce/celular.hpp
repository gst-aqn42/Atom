#ifndef CELULAR_H
#define CELULAR_H

#include <string>

/**
 * @brief Classe responsavel pelo armazenamento e gerenciamento das informacoes
 * de um celular.
 *
 */
class Celular {
 public:
 
  Celular(std::string modelo,
          std::string fabricante,
          int armazenamento,
          int memoria,
          double peso,
          std::string cor,
          int qtd,
          float valor);

  /**
   * @brief Implementa a sobrecarga do operador logico menor que ('<').
   * Utilizado na ordenacao dos objetos da classe.
   *
   * @param other Instancia de outro objeto da classe.
   * @return true Retorna true quando o objeto atual for 'menor' que o other
   * @return false Retorna false quando o objeto atual for 'maior' que o other
   */
  bool operator<(const Celular& other);

 public:
   std::string _modelo;
   std::string _fabricante;
   int _armazenamento;
   int _memoria;
   double _peso;
   std::string _cor;
   int _qtd;
   float _valor;
   int _codigo;

 private:
   static int codigo;
};

#endif