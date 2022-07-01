#include "japonesa.hpp"

Japonesa::Japonesa(const std::string& combinado,
           int sushi,
           int temaki,
           int hots,
           int qtd,
           float valor_unitario){
            _combinado = combinado;
            _sushi = sushi;
            _temaki = temaki;
            _hots = hots;
            m_qtd = qtd;
            m_valor_unitario = valor_unitario;
           }

std::string Japonesa::descricao() const {
  std::cout << m_qtd << "X " << "Comida japonesa - " << _combinado << ", " << _sushi << " sushis, " << _temaki << " temakis e " << _hots << "hots." << std::endl;
  return "";
}