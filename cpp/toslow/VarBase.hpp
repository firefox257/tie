#ifndef VARBASE_HPP
#define VARBASE_HPP

#include <iostream>
#include <functional>
#include <string>
#include <stdint.h>
#include "VarType.hpp"
#include "Exception.hpp"
using namespace std;

#define BASE VarBase

class BASE
{
	virtual void ThrowNotImplemented(string file, int line);
	virtual void ThrowException(string file, int line, string msg);

	public:
	virtual VarType::Types Type();

	BASE();
	BASE(bool d);
	BASE(int8_t d);
	BASE(uint8_t d);
	BASE(int16_t d);
	BASE(uint16_t d);
	BASE(int32_t d);
	BASE(uint32_t d);
	BASE(int64_t d);
	BASE(uint64_t d);
	BASE(float d);
	BASE(double d);
	BASE(const char * d);
	BASE(string d);
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

	virtual operator bool();
	virtual operator int8_t();
	virtual operator uint8_t();
	virtual operator int16_t();
	virtual operator uint16_t();
	virtual operator int32_t();
	virtual operator uint32_t();
	virtual operator int64_t();
	virtual operator uint64_t();
	virtual operator float();
	virtual operator double();
	virtual operator string();
	/////////////////////////
	virtual void operator = (bool d);
	virtual void operator = (int8_t d);
	virtual void operator = (uint8_t d);
	virtual void operator = (int16_t d);
	virtual void operator = (uint16_t d);
	virtual void operator = (int32_t d);
	virtual void operator = (uint32_t d);
	virtual void operator = (int64_t d);
	virtual void operator = (uint64_t d);
	virtual void operator = (float d);
	virtual void operator = (double d);
	virtual void operator = (const char * d);
	virtual void operator = (string d);

	virtual void CloneOrMapTo(VarBase * & ptr);
	//addition
	virtual void Add2(VarBase * & r, VarBase * & v);
	virtual void Add1(VarBase * & r, bool d);
	virtual void Add1(VarBase * & r, int8_t d);
	virtual void Add1(VarBase * & r, uint8_t d);
	virtual void Add1(VarBase * & r, int16_t d);
	virtual void Add1(VarBase * & r, uint16_t d);
	virtual void Add1(VarBase * & r, int32_t d);
	virtual void Add1(VarBase * & r, uint32_t d);
	virtual void Add1(VarBase * & r, int64_t d);
	virtual void Add1(VarBase * & r, uint64_t d);
	virtual void Add1(VarBase * & r, float d);
	virtual void Add1(VarBase * & r, double d);
	virtual void Add1(VarBase * & r, const char * d);
	virtual void Add1(VarBase * & r, string d);

	//end addition
	//subtraction
	virtual void Sub2(VarBase * & r, VarBase * & v);
	virtual void Sub1(VarBase * & r, bool d);
	virtual void Sub1(VarBase * & r, int8_t d);
	virtual void Sub1(VarBase * & r, uint8_t d);
	virtual void Sub1(VarBase * & r, int16_t d);
	virtual void Sub1(VarBase * & r, uint16_t d);
	virtual void Sub1(VarBase * & r, int32_t d);
	virtual void Sub1(VarBase * & r, uint32_t d);
	virtual void Sub1(VarBase * & r, int64_t d);
	virtual void Sub1(VarBase * & r, uint64_t d);
	virtual void Sub1(VarBase * & r, float d);
	virtual void Sub1(VarBase * & r, double d);

	//end subtraction
	//Multiplication
	virtual void Mul2(VarBase * & r, VarBase * & v);
	virtual void Mul1(VarBase * & r, bool d);
	virtual void Mul1(VarBase * & r, int8_t d);
	virtual void Mul1(VarBase * & r, uint8_t d);
	virtual void Mul1(VarBase * & r, int16_t d);
	virtual void Mul1(VarBase * & r, uint16_t d);
	virtual void Mul1(VarBase * & r, int32_t d);
	virtual void Mul1(VarBase * & r, uint32_t d);
	virtual void Mul1(VarBase * & r, int64_t d);
	virtual void Mul1(VarBase * & r, uint64_t d);
	virtual void Mul1(VarBase * & r, float d);
	virtual void Mul1(VarBase * & r, double d);

	//end Multiplication
	//Division
	virtual void Div2(VarBase * & r, VarBase * & v);
	virtual void Div1(VarBase * & r, bool d);
	virtual void Div1(VarBase * & r, int8_t d);
	virtual void Div1(VarBase * & r, uint8_t d);
	virtual void Div1(VarBase * & r, int16_t d);
	virtual void Div1(VarBase * & r, uint16_t d);
	virtual void Div1(VarBase * & r, int32_t d);
	virtual void Div1(VarBase * & r, uint32_t d);
	virtual void Div1(VarBase * & r, int64_t d);
	virtual void Div1(VarBase * & r, uint64_t d);
	virtual void Div1(VarBase * & r, float d);
	virtual void Div1(VarBase * & r, double d);

	//end Division
	//equals
	virtual void Eq2(VarBase * & r, VarBase * & v);
	virtual void Eq1(VarBase * & r, bool d);
	virtual void Eq1(VarBase * & r, int8_t d);
	virtual void Eq1(VarBase * & r, uint8_t d);
	virtual void Eq1(VarBase * & r, int16_t d);
	virtual void Eq1(VarBase * & r, uint16_t d);
	virtual void Eq1(VarBase * & r, int32_t d);
	virtual void Eq1(VarBase * & r, uint32_t d);
	virtual void Eq1(VarBase * & r, int64_t d);
	virtual void Eq1(VarBase * & r, uint64_t d);
	virtual void Eq1(VarBase * & r, float d);
	virtual void Eq1(VarBase * & r, double d);
	virtual void Eq1(VarBase * & r, string d);

	//end equals
	//less than
	virtual void Le2(VarBase * & r, VarBase * & v);
	virtual void Le1(VarBase * & r, bool d);
	virtual void Le1(VarBase * & r, int8_t d);
	virtual void Le1(VarBase * & r, uint8_t d);
	virtual void Le1(VarBase * & r, int16_t d);
	virtual void Le1(VarBase * & r, uint16_t d);
	virtual void Le1(VarBase * & r, int32_t d);
	virtual void Le1(VarBase * & r, uint32_t d);
	virtual void Le1(VarBase * & r, int64_t d);
	virtual void Le1(VarBase * & r, uint64_t d);
	virtual void Le1(VarBase * & r, float d);
	virtual void Le1(VarBase * & r, double d);
	virtual void Le1(VarBase * & r, string d);

	//end less than
	//less then eq
	virtual void LeEq2(VarBase * & r, VarBase * & v);
	virtual void LeEq1(VarBase * & r, bool d);
	virtual void LeEq1(VarBase * & r, int8_t d);
	virtual void LeEq1(VarBase * & r, uint8_t d);
	virtual void LeEq1(VarBase * & r, int16_t d);
	virtual void LeEq1(VarBase * & r, uint16_t d);
	virtual void LeEq1(VarBase * & r, int32_t d);
	virtual void LeEq1(VarBase * & r, uint32_t d);
	virtual void LeEq1(VarBase * & r, int64_t d);
	virtual void LeEq1(VarBase * & r, uint64_t d);
	virtual void LeEq1(VarBase * & r, float d);
	virtual void LeEq1(VarBase * & r, double d);
	virtual void LeEq1(VarBase * & r, string d);

	//end less than eq
	//greater than
	virtual void Gr2(VarBase * & r, VarBase * & v);
	virtual void Gr1(VarBase * & r, bool d);
	virtual void Gr1(VarBase * & r, int8_t d);
	virtual void Gr1(VarBase * & r, uint8_t d);
	virtual void Gr1(VarBase * & r, int16_t d);
	virtual void Gr1(VarBase * & r, uint16_t d);
	virtual void Gr1(VarBase * & r, int32_t d);
	virtual void Gr1(VarBase * & r, uint32_t d);
	virtual void Gr1(VarBase * & r, int64_t d);
	virtual void Gr1(VarBase * & r, uint64_t d);
	virtual void Gr1(VarBase * & r, float d);
	virtual void Gr1(VarBase * & r, double d);
	virtual void Gr1(VarBase * & r, string d);

	//end greater than
	//greater then eq
	virtual void GrEq2(VarBase * & r, VarBase * & v);
	virtual void GrEq1(VarBase * & r, bool d);
	virtual void GrEq1(VarBase * & r, int8_t d);
	virtual void GrEq1(VarBase * & r, uint8_t d);
	virtual void GrEq1(VarBase * & r, int16_t d);
	virtual void GrEq1(VarBase * & r, uint16_t d);
	virtual void GrEq1(VarBase * & r, int32_t d);
	virtual void GrEq1(VarBase * & r, uint32_t d);
	virtual void GrEq1(VarBase * & r, int64_t d);
	virtual void GrEq1(VarBase * & r, uint64_t d);
	virtual void GrEq1(VarBase * & r, float d);
	virtual void GrEq1(VarBase * & r, double d);
	virtual void GrEq1(VarBase * & r, string d);

	//end greater than eq
	//Not equal
	virtual void NotEq2(VarBase * & r, VarBase * & v);
	virtual void NotEq1(VarBase * & r, bool d);
	virtual void NotEq1(VarBase * & r, int8_t d);
	virtual void NotEq1(VarBase * & r, uint8_t d);
	virtual void NotEq1(VarBase * & r, int16_t d);
	virtual void NotEq1(VarBase * & r, uint16_t d);
	virtual void NotEq1(VarBase * & r, int32_t d);
	virtual void NotEq1(VarBase * & r, uint32_t d);
	virtual void NotEq1(VarBase * & r, int64_t d);
	virtual void NotEq1(VarBase * & r, uint64_t d);
	virtual void NotEq1(VarBase * & r, float d);
	virtual void NotEq1(VarBase * & r, double d);
	virtual void NotEq1(VarBase * & r, string d);

	//end Not equal
	//Not
	virtual bool Not();

	//end Not
	//or
	virtual void Or2(VarBase * & r, VarBase * & v);
	virtual void Or1(VarBase * & r, bool d);
	virtual void Or1(VarBase * & r, int8_t d);
	virtual void Or1(VarBase * & r, uint8_t d);
	virtual void Or1(VarBase * & r, int16_t d);
	virtual void Or1(VarBase * & r, uint16_t d);
	virtual void Or1(VarBase * & r, int32_t d);
	virtual void Or1(VarBase * & r, uint32_t d);
	virtual void Or1(VarBase * & r, int64_t d);
	virtual void Or1(VarBase * & r, uint64_t d);

	//end or
	//and
	virtual void And2(VarBase * & r, VarBase * & v);
	virtual void And1(VarBase * & r, bool d);
	virtual void And1(VarBase * & r, int8_t d);
	virtual void And1(VarBase * & r, uint8_t d);
	virtual void And1(VarBase * & r, int16_t d);
	virtual void And1(VarBase * & r, uint16_t d);
	virtual void And1(VarBase * & r, int32_t d);
	virtual void And1(VarBase * & r, uint32_t d);
	virtual void And1(VarBase * & r, int64_t d);
	virtual void And1(VarBase * & r, uint64_t d);

	//end and
	//xor
	virtual void Xor2(VarBase * & r, VarBase * & v);
	virtual void Xor1(VarBase * & r, bool d);
	virtual void Xor1(VarBase * & r, int8_t d);
	virtual void Xor1(VarBase * & r, uint8_t d);
	virtual void Xor1(VarBase * & r, int16_t d);
	virtual void Xor1(VarBase * & r, uint16_t d);
	virtual void Xor1(VarBase * & r, int32_t d);
	virtual void Xor1(VarBase * & r, uint32_t d);
	virtual void Xor1(VarBase * & r, int64_t d);
	virtual void Xor1(VarBase * & r, uint64_t d);

	//end xor
	//bitshift
	virtual void LeftBitShift(VarBase * & r, int d);
	virtual void RightBitShift(VarBase * & r, int d);

	//end bitshift
	//plusplus
	virtual void PlusPlus();
	//end plusplus
	//minusminus
	virtual void MinusMinus();
	//end minus minus
	//list
	virtual void l(var & d);
	virtual var & operator[](int i);
	virtual int Size();
	//end list
	//map
	virtual void m(string n, var & v);
	virtual var & operator[](string i);
	//end map
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
	//getter setter
	virtual void g(function<var()> func);
	virtual void s(function<void(var)> func);
	virtual void gs(function<var()> funcg, function<void(var)> funcs);
	virtual var g();
	virtual void s(var);
	//end getter setter

	virtual void outstream(ostream & out);

	friend ostream & operator << (ostream & out, VarBase & v)
	{
		v.outstream(out);
		return out;
	}
};




#endif
