#ifndef VARGETSET_CPP
#define VARGETSET_CPP

#include "VarGetSet.hpp"

#define BASE VarGetSet



void BASE::ThrowNotImplemented(string file, int line)
{
	throw Exception("var GetSet Not implmented.", file, line);
}
void BASE::ThrowException(string file, int line, string msg)
{
	throw Exception("var GetSet " + msg, file, line);
}

//public:
VarType::Types BASE::Type()
{
	static const VarType::Types t = VarType::GetSet;
	return t;
}

BASE::BASE()
{

}
BASE::~BASE()
{

}
//getter setter
void BASE::g(function<var()> func)
{
  getter = func;
}
void BASE::s(function<void(var)> func)
{
  setter = func;
}
void BASE::gs(function<var()> funcg, function<void(var)> funcs)
{
  getter = funcg;
  setter = funcs;
}
var BASE::g()
{
  return getter();
}
void BASE::s(var v)
{
  setter(v);
}
//end getter setter
void BASE::outstream(ostream & out)
{
	out << getter();//data;
}
#endif
