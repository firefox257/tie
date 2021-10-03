#ifndef VAR_HPP
#define VAR_HPP

class var;
#include "VarType.hpp"
#include "VarBase.hpp"
class var
{
	struct Ref
	{
		int count = 0;
		VarBase * d = 0;
	};
	Ref * ref = new Ref;
	void Reset();
	public:
	var();
	var(const var & v);

	~var();
	var(bool d);
	var (int8_t d);
	var (uint8_t d);
	var (int16_t d);
	var (uint16_t d);
	var (int32_t d);
	var (uint32_t d);
	var (int64_t d);
	var (uint64_t d);
	var (float d);
	var (double d);
	var(const char * d);
	var(string d);
	operator bool();
	operator int8_t();
	operator char();
	operator uint8_t();
	operator int16_t();
	operator uint16_t();
	operator int32_t();
	operator uint32_t();
	operator int64_t();
	operator uint64_t();
	operator float();
	operator double();
	operator string();
	operator var();
	//equals
	var & operator = (VarType::Types t);
	var & operator = (bool d);
	var & operator = (int8_t d);
	var & operator = (uint8_t d);
	var & operator = (int16_t d);
	var & operator = (uint16_t d);
	var & operator = (int32_t d);
	var & operator = (uint32_t d);
	var & operator = (int64_t d);
	var & operator = (uint64_t d);
	var & operator = (float d);
	var & operator = (double d);
	var & operator = (const char * d);
	var & operator = (string d);
	var & operator = (var v);
	//end equals
	//add
	var operator + (bool d);
	var operator + (int8_t d);
	var operator + (uint8_t d);
	var operator + (int16_t d);
	var operator + (uint16_t d);
	var operator + (int32_t d);
	var operator + (uint32_t d);
	var operator + (float d);
	var operator + (double d);
	var operator + (const char * d);
	var operator + (string d);
	var operator + (var v);
	//end add
	//minus
	var operator - (bool d);
	var operator - (int8_t d);
	var operator - (uint8_t d);
	var operator - (int16_t d);
	var operator - (uint16_t d);
	var operator - (int32_t d);
	var operator - (uint32_t d);
	var operator - (int64_t d);
	var operator - (uint64_t d);
	var operator - (float d);
	var operator - (double d);
	var operator - (var v);
	//end minus
	//multiply
	var operator * (bool d);
	var operator * (int8_t d);
	var operator * (uint8_t d);
	var operator * (int16_t d);
	var operator * (uint16_t d);
	var operator * (int32_t d);
	var operator * (uint32_t d);
	var operator * (int64_t d);
	var operator * (uint64_t d);
	var operator * (float d);
	var operator * (double d);
	var operator * (var v);
	//end multiply
	//division
	var operator / (bool d);
	var operator / (int8_t d);
	var operator / (uint8_t d);
	var operator / (int16_t d);
	var operator / (uint16_t d);
	var operator / (int32_t d);
	var operator / (uint32_t d);
	var operator / (int64_t d);
	var operator / (uint64_t d);
	var operator / (float d);
	var operator / (double d);
	var operator / (var v);
	//end division
	// equal equal
	var operator == (bool d);
	var operator == (int8_t d);
	var operator == (uint8_t d);
	var operator == (int16_t d);
	var operator == (uint16_t d);
	var operator == (int32_t d);
	var operator == (uint32_t d);
	var operator == (int64_t d);
	var operator == (uint64_t d);
	var operator == (float d);
	var operator == (double d);
	var operator == (const char * d);
	var operator == (string d);
	var operator == (var v);
	//end equal equal
	//less than
	var operator < (bool d);
	var operator < (int8_t d);
	var operator < (uint8_t d);
	var operator < (int16_t d);
	var operator < (uint16_t d);
	var operator < (int32_t d);
	var operator < (uint32_t d);
	var operator < (int64_t d);
	var operator < (uint64_t d);
	var operator < (float d);
	var operator < (double d);
	var operator < (const char * d);
	var operator < (string d);
	var operator < (var v);
	//end less than
	//less equal
	var operator <= (bool d);
	var operator <= (int8_t d);
	var operator <= (uint8_t d);
	var operator <= (int16_t d);
	var operator <= (uint16_t d);
	var operator <= (int32_t d);
	var operator <= (uint32_t d);
	var operator <= (int64_t d);
	var operator <= (uint64_t d);
	var operator <= (float d);
	var operator <= (double d);
	var operator <= (const char * d);
	var operator <= (string d);
	var operator <= (var v);
	//end less equal
	//greater than
	var operator > (bool d);
	var operator > (int8_t d);
	var operator > (uint8_t d);
	var operator > (int16_t d);
	var operator > (uint16_t d);
	var operator > (int32_t d);
	var operator > (uint32_t d);
	var operator > (int64_t d);
	var operator > (uint64_t d);
	var operator > (float d);
	var operator > (double d);
	var operator > (const char * d);
	var operator > (string d);
	var operator > (var v);
	//end greater than
	//greater equals than
	var operator >= (bool d);
	var operator >= (int8_t d);
	var operator >= (uint8_t d);
	var operator >= (int16_t d);
	var operator >= (uint16_t d);
	var operator >= (int32_t d);
	var operator >= (uint32_t d);
	var operator >= (int64_t d);
	var operator >= (uint64_t d);
	var operator >= (float d);
	var operator >= (double d);
	var operator >= (const char * d);
	var operator >= (string d);
	var operator >= (var v);
	//end greater equals than
	//not equal
	var operator != (bool d);
	var operator != (int8_t d);
	var operator != (uint8_t d);
	var operator != (int16_t d);
	var operator != (uint16_t d);
	var operator != (int32_t d);
	var operator != (uint32_t d);
	var operator != (int64_t d);
	var operator != (uint64_t d);
	var operator != (float d);
	var operator != (double d);
	var operator != (const char * d);
	var operator != (string d);
	var operator != (var v);
	//not equal end
	//not
	var operator !();
	//not end
	//or
	var operator | (bool d);
	var operator | (int8_t d);
	var operator | (uint8_t d);
	var operator | (int16_t d);
	var operator | (uint16_t d);
	var operator | (int32_t d);
	var operator | (uint32_t d);
	var operator | (int64_t d);
	var operator | (uint64_t d);
	var operator | (var v);
	//end or
	//and
	var operator & (bool d);
	var operator & (int8_t d);
	var operator & (uint8_t d);
	var operator & (int16_t d);
	var operator & (uint16_t d);
	var operator & (int32_t d);
	var operator & (uint32_t d);
	var operator & (int64_t d);
	var operator & (uint64_t d);
	var operator & (var v);

	//end and
	//xor
	var operator ^ (bool d);
	var operator ^ (int8_t d);
	var operator ^ (uint8_t d);
	var operator ^ (int16_t d);
	var operator ^ (uint16_t d);
	var operator ^ (int32_t d);
	var operator ^ (uint32_t d);
	var operator ^ (int64_t d);
	var operator ^ (uint64_t d);
	var operator ^ (var v);
	//end xor
	//left bit shift
	var operator << (int d);
	//end left bit shift
	//right bit shift
	var operator >> (int d);
	//end right bit shift
	//plus plus
	var operator ++ (int i);
	//end plus plus
	//minus minus
	var operator -- (int i);
	//end minus minus
	//list

	var & l(bool d);
	var & l(int8_t d);
	var & l(uint8_t d);
	var & l(int16_t d);
	var & l(uint16_t d);
	var & l(int32_t d);
	var & l(uint32_t d);
	var & l(int64_t d);
	var & l(uint64_t d);
	var & l(float d);
	var & l(double d);
	var & l(const char * d);
	var & l(string d);
	var & l(var v);
	var & l(function<void()> func);
	var & l(function<void(var)> func);
	var & l(function<void(var, var)> func);
	var & l(function<void(var, var, var)> func);
	var & l(function<void(var, var, var, var)> func);
	var & l(function<void(var, var, var, var, var)> func);
	var & l(function<void(var, var, var, var, var, var)> func);
	var & l(function<void(var, var, var, var, var, var, var)> func);
	var & l(function<void(var, var, var, var, var, var, var, var)> func);
	var & l(function<void(var, var, var, var, var, var, var, var, var)> func);
	var & l(function<void(var, var, var, var, var, var, var, var, var, var)> func);
	var & l(function<var()> func);
	var & l(function<var(var)> func);
	var & l(function<var(var, var)> func);
	var & l(function<var(var, var, var)> func);
	var & l(function<var(var, var, var, var)> func);
	var & l(function<var(var, var, var, var, var)> func);
	var & l(function<var(var, var, var, var, var, var)> func);
	var & l(function<var(var, var, var, var, var, var, var)> func);
	var & l(function<var(var, var, var, var, var, var, var, var)> func);
	var & l(function<var(var, var, var, var, var, var, var, var, var)> func);
	var & l(function<var(var, var, var, var, var, var, var, var, var, var)> func);
	var & operator [](int i);
	int Size();
	//end list
	//map
	var & m(string n, bool d);
	var & m(string n, int8_t d);
	var & m(string n, uint8_t d);
	var & m(string n, int16_t d);
	var & m(string n, uint16_t d);
	var & m(string n, int32_t d);
	var & m(string n, uint32_t d);
	var & m(string n, int64_t d);
	var & m(string n, uint64_t d);
	var & m(string n, float d);
	var & m(string n, double d);
	var & m(string n, const char * d);
	var & m(string n, string d);
	var & m(string n, var d);

	var & m(string n, function<void()> d);
	var & m(string n,  function<void(var)> d);
	var & m(string n,  function<void(var, var)> d);
	var & m(string n,  function<void(var, var, var)> d);
	var & m(string n,  function<void(var, var, var, var)> d);
	var & m(string n,  function<void(var, var, var, var, var)> d);
	var & m(string n,  function<void(var, var, var, var, var, var)> d);
	var & m(string n,  function<void(var, var, var, var, var, var, var)> d);
	var & m(string n,  function<void(var, var, var, var, var, var, var, var)> d);
	var & m(string n,  function<void(var, var, var, var, var, var, var, var, var)> d);
	var & m(string n,  function<void(var, var, var, var, var, var, var, var, var, var)> d);
	var & m(string n,  function<var()> d);
	var & m(string n,  function<var(var)> d);
	var & m(string n,  function<var(var, var)> d);
	var & m(string n,  function<var(var, var, var)> d);
	var & m(string n,  function<var(var, var, var, var)> d);
	var & m(string n,  function<var(var, var, var, var, var)> d);
	var & m(string n,  function<var(var, var, var, var, var, var)> d);
	var & m(string n,  function<var(var, var, var, var, var, var, var)> d);
	var & m(string n,  function<var(var, var, var, var, var, var, var, var)> d);
	var & m(string n,  function<var(var, var, var, var, var, var, var, var, var)> d);
	var & m(string n,  function<var(var, var, var, var, var, var, var, var, var, var)> d);

	var & operator [](string n);
	var & operator [](const char * n);
	//end map

	//both list and map
	var & operator [](var v);
	//end both list and map
	//function
	var(function<void()> func);
	var(function<void(var)> func);
	var(function<void(var, var)> func);
	var(function<void(var, var, var)> func);
	var(function<void(var, var, var, var)> func);
	var(function<void(var, var, var, var, var)> func);
	var(function<void(var, var, var, var, var, var)> func);
	var(function<void(var, var, var, var, var, var, var)> func);
	var(function<void(var, var, var, var, var, var, var, var)> func);
	var(function<void(var, var, var, var, var, var, var, var, var)> func);
	var(function<void(var, var, var, var, var, var, var, var, var, var)> func);
	var(function<var()> func);
	var(function<var(var)> func);
	var(function<var(var, var)> func);
	var(function<var(var, var, var)> func);
	var(function<var(var, var, var, var)> func);
	var(function<var(var, var, var, var, var)> func);
	var(function<var(var, var, var, var, var, var)> func);
	var(function<var(var, var, var, var, var, var, var)> func);
	var(function<var(var, var, var, var, var, var, var, var)> func);
	var(function<var(var, var, var, var, var, var, var, var, var)> func);
	var(function<var(var, var, var, var, var, var, var, var, var, var)> func);
	var operator()(var a1, var a2, var a3, var a4, var a5, var a6, var a7, var a8, var a9, var a10);
	//endfunction
	//getter setter
	var & g(function<var()> func);
	var & s(function<void(var)> func);
	var & gs(function<var()> funcg, function<void(var)> funcs);
	var & gsRemove();
	//end getter setter

	friend ostream & operator << (ostream & out, var v)
	{
		cout << (*(v.ref->d));
		return out;
	}
};


#include "VarUndefined.hpp"
#include "VarBool.hpp"
#include "VarInt8.hpp"
#include "VarUint8.hpp"
#include "VarInt16.hpp"
#include "VarUint16.hpp"
#include "VarInt32.hpp"
#include "VarUint32.hpp"
#include "VarUint64.hpp"
#include "VarInt64.hpp"
#include "VarUint64.hpp"
#include "VarFloat.hpp"
#include "VarDouble.hpp"
#include "VarString.hpp"
#include "VarList.hpp"
#include "VarMap.hpp"
#include "VarFunction.hpp"
#include "VarGetSet.hpp"


#endif
