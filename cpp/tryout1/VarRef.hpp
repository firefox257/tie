#ifndef VARREF_HPP
#define VARREF_HPP

class VarRef
{
public:
  VarType t;
  int count;
  void * data;
  bool isVar = false;
  int numberArgs = 0;
  VarRef();

};

#endif
