#ifndef VARGETSET_HPP
#define VARGETSET_HPP
#include <functional>
using namespace std;
struct VarGetSet
{
  bool isGet = false;
  bool isSet = false;
  function<var()> Get;
  function<void(var)> Set;
};

#endif
