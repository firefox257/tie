#ifndef VARMAP_HPP
#define VARMAP_HPP


#include <iostream>
#include <functional>
#include <string>
#include <stdint.h>
#include <map>
#include "VarType.hpp"
#include "Exception.hpp"
#include "VarBase.hpp"
using namespace std;

#define BASE VarMap

class BASE: public VarBase
{
	map<string, var> data;
	virtual void ThrowNotImplemented(string file, int line);
	virtual void ThrowException(string file, int line, string msg);
	
	public:
	virtual VarType::Types Type();
	
	BASE();

	/////////////////////////
	//virtual void CloneOrMapTo(VarBase * & ptr);
	//map
	virtual void m(string n, var & v);
	virtual var & operator[](string i);
	//end map
	
	virtual void outstream(ostream & out);
	
};



#endif
