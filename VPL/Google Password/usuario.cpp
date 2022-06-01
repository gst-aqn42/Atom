#include "usuario.hpp"

Usuario::Usuario(const std::string& login, const std::string& password) {
  _login = login;
  _password = password;
}

std::string Usuario::getLogin() const {
  return _login;
}

std::string Usuario::getPassword() const {
  return _password;
}

void Usuario::setPassword(const std::string& password) {
  _password = password;
}

void Usuario::setLogin(const std::string& login) {
  _login = login;
}