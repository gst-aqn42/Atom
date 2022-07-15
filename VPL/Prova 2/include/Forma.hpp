#ifndef FORMA_HPP
#define FORMA_HPP

#include <string>
class Forma{
  protected:
    std::string _nome;
    std::string _cor;
  public:
    Forma();
    virtual std::string get_cor() = 0;
    virtual std::string get_nome() = 0;
};

#endif