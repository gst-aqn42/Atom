#include "peca.hpp"

Peca::Peca(Cor cor) {
  _cor = cor;
  _dama = false;
}

Cor Peca::get_cor() {
  return _cor;
}