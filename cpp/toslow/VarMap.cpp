#ifndef VARMAP_CPP
#define VARMAP_CPP

#include "VarMap.hpp"

#define BASE VarMap



void BASE::ThrowNotImplemented(string file, int line)
{
	throw Exception("var map Not implmented.", file, line);
}
void BASE::ThrowException(string file, int line, string msg)
{
	throw Exception("var map " + msg, file, line);
}

//public:
VarType::Types BASE::Type()
{
	static const VarType::Types t = VarType::Map;
	return t;
}

BASE::BASE()
{

}
BASE::~BASE()
{
	if(obj != 0)
	{
		delete(obj);
	}
}

/*
void BASE::CloneOrMapTo(VarBase * & ptr)
{
	ptr = new VarList(data);
}
* */

//map
void BASE::m(string n, var & v)
{
	data[n] = v;
}
var & BASE::operator[](string i)
{
	return data[i];
}
//end map

void BASE::outstream(ostream & out)
{
	out << "VarMap";//data;
}


#endif
