#ifndef VARLIST_HPP
#define VARLIST_HPP

#include <iostream>
#include <functional>
#include <string>
#include <stdint.h>
#include <vector>
#include "VarType.hpp"
#include "Exception.hpp"
#include "VarBase.hpp"
using namespace std;

#define BASE VarList

class BASE: public VarBase
{
	vector<var> data;
	virtual void ThrowNotImplemented(string file, int line);
	virtual void ThrowException(string file, int line, string msg);
	
	public:
	virtual VarType::Types Type();
	
	BASE();

	/////////////////////////
	//virtual void CloneOrMapTo(VarBase * & ptr);
	//list
	virtual void l(var & d);
	virtual var & operator[](int i);
	virtual int Size();
	//end list
	
	virtual void outstream(ostream & out);
	
};



#endif
