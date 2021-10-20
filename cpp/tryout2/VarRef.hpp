#ifndef VARREF_HPP
#define VARREF_HPP
#include "VarType.hpp"
class VarRef
{
public:
  VarType t;
  int count;
  void * data;
  VarRef();

};

#endif
