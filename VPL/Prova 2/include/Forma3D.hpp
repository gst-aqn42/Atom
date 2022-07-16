#ifndef FORMA3D_HPP
#define FORMA3D_HPP

#include "/home/ozymandias/C++/PDSII/Atom/VPL/Prova 2/include/Forma.hpp"

class Forma3D : public Forma{
protected:
  double _volume;
public:
  Forma3D();
  double get_volume();
};

#endif