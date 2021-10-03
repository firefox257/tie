#ifndef VARGETSET_HPP
#define VARGETSET_HPP


#include <iostream>
#include <functional>
#include <string>
#include <stdint.h>
#include "VarType.hpp"
#include "Exception.hpp"
#include "VarBase.hpp"
using namespace std;


#define BASE VarGetSet

class BASE: public VarBase
{
	function<var()> getter;
  function<void(var)> setter;
	virtual void ThrowNotImplemented(string file, int line);
	virtual void ThrowException(string file, int line, string msg);

	public:
	virtual VarType::Types Type();

	BASE();
	~BASE();
	//virtual void CloneOrMapTo(VarBase * & ptr);
  //getter setter
	virtual void g(function<var()> func);
	virtual void s(function<void(var)> func);
	virtual void gs(function<var()> funcg, function<void(var)> funcs);
  virtual var g();
  virtual void s(var);
	//end getter setter

	virtual void outstream(ostream & out);

};

#endif
