#ifndef VARFUNCTION_HPP
#define VARFUNCTION_HPP

#include <iostream>
#include <functional>
#include <string>
#include <stdint.h>
#include "VarType.hpp"
#include "Exception.hpp"
#include "VarBase.hpp"
using namespace std;
#define varfunc(R, ...) (function<R(__VA_ARGS__)>)[&](__VA_ARGS__)->R

#define BASE VarFunction

class BASE: public VarBase
{
	function<var (var *, void *)> datafunc;
	void * funcptr = 0;
	virtual void ThrowNotImplemented(string file, int line);
	virtual void ThrowException(string file, int line, string msg);

	public:
	virtual VarType::Types Type();

	BASE();
	~BASE();
	//function
	BASE(function<void()> func);
	BASE(function<void(var)> func);
	BASE(function<void(var, var)> func);
	BASE(function<void(var, var, var)> func);
	BASE(function<void(var, var, var, var)> func);
	BASE(function<void(var, var, var, var, var)> func);
	BASE(function<void(var, var, var, var, var, var)> func);
	BASE(function<void(var, var, var, var, var, var, var)> func);
	BASE(function<void(var, var, var, var, var, var, var, var)> func);
	BASE(function<void(var, var, var, var, var, var, var, var, var)> func);
	BASE(function<void(var, var, var, var, var, var, var, var, var, var)> func);
	BASE(function<var()> func);
	BASE(function<var(var)> func);
	BASE(function<var(var, var)> func);
	BASE(function<var(var, var, var)> func);
	BASE(function<var(var, var, var, var)> func);
	BASE(function<var(var, var, var, var, var)> func);
	BASE(function<var(var, var, var, var, var, var)> func);
	BASE(function<var(var, var, var, var, var, var, var)> func);
	BASE(function<var(var, var, var, var, var, var, var, var)> func);
	BASE(function<var(var, var, var, var, var, var, var, var, var)> func);
	BASE(function<var(var, var, var, var, var, var, var, var, var, var)> func);
	//end function
	//virtual void CloneOrMapTo(VarBase * & ptr);
	//function
	virtual void f(function<void()> func);
	virtual void f(function<void(var)> func);
	virtual void f(function<void(var, var)> func);
	virtual void f(function<void(var, var, var)> func);
	virtual void f(function<void(var, var, var, var)> func);
	virtual void f(function<void(var, var, var, var, var)> func);
	virtual void f(function<void(var, var, var, var, var, var)> func);
	virtual void f(function<void(var, var, var, var, var, var, var)> func);
	virtual void f(function<void(var, var, var, var, var, var, var, var)> func);
	virtual void f(function<void(var, var, var, var, var, var, var, var, var)> func);
	virtual void f(function<void(var, var, var, var, var, var, var, var, var, var)> func);
	virtual void f(function<var()> func);
	virtual void f(function<var(var)> func);
	virtual void f(function<var(var, var)> func);
	virtual void f(function<var(var, var, var)> func);
	virtual void f(function<var(var, var, var, var)> func);
	virtual void f(function<var(var, var, var, var, var)> func);
	virtual void f(function<var(var, var, var, var, var, var)> func);
	virtual void f(function<var(var, var, var, var, var, var, var)> func);
	virtual void f(function<var(var, var, var, var, var, var, var, var)> func);
	virtual void f(function<var(var, var, var, var, var, var, var, var, var)> func);
	virtual void f(function<var(var, var, var, var, var, var, var, var, var, var)> func);
	virtual var f(var*, int count );
	//end function

	virtual void outstream(ostream & out);

};






#endif
