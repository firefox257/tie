#ifndef VARUNDEFINED_CPP
#define VARUNDEFINED_CPP
#include "VarUndefined.hpp"


#define BASE VarUndefined

void BASE::ThrowNotImplemented(string file, int line)
{
	throw Exception("Undefined var Not implmented.", file, line);
}
void BASE::ThrowException(string file, int line, string msg)
{
	throw Exception("Undefined var " + msg, file, line);
}
//public:
VarType::Types BASE::Type()
{
	static const VarType::Types t = VarType::Undefined;
	return t;
}

BASE::BASE()
{

}

void BASE::outstream(ostream & out)
{
	out << "var Undefined";
}


#endif
