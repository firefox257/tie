#ifndef VARLIST_CPP
#define VARLIST_CPP

#include "VarList.hpp"

#define BASE VarList



void BASE::ThrowNotImplemented(string file, int line)
{
	throw Exception("var list Not implmented.", file, line);
}
void BASE::ThrowException(string file, int line, string msg)
{
	throw Exception("var list " + msg, file, line);
}

//public:
VarType::Types BASE::Type()
{
	static const VarType::Types t = VarType::List;
	return t;
}

BASE::BASE()
{
	
}

/*
void BASE::CloneOrMapTo(VarBase * & ptr)
{
	ptr = new VarList(data);
}
* */

//list
void BASE::l(var & d)
{
	data.push_back(d);
}
var & BASE::operator[](int i)
{
	return data[i];
}
int BASE::Size()
{
	return data.size();
}
//end list

void BASE::outstream(ostream & out)
{
	out << "VarList";//data;
}



#endif
