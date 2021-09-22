#ifndef VAR_CPP
#define VAR_CPP

#include "Var.hpp"
#include "VarBase.cpp"
#include "VarUndefined.cpp"
#include "VarBool.cpp"
#include "VarInt8.cpp"
#include "VarUint8.cpp"
#include "VarInt16.cpp"
#include "VarUint16.cpp"
#include "VarInt32.cpp"
#include "VarUint32.cpp"
#include "VarInt64.cpp"
#include "VarUint64.cpp"
#include "VarFloat.cpp"
#include "VarDouble.cpp"
#include "VarString.cpp"
#include "VarList.cpp"
#include "VarMap.cpp"
#include "VarFunction.cpp"



void var::Reset()
{
	ref->count--;
	if(ref->count <=0)
	{
		if(ref->d != 0)
		{
			delete(ref->d);
			ref->d = 0;
			ref->count = 0;
		}
	}
}
//	public:
var::var()
{
	ref->count = 1;
	ref->d = new VarUndefined;
}
var::var(const var & v)
{
	ref = v.ref;
	ref->count++;
}

var::~var()
{
	Reset();
}
var::var(bool d)
{
	ref->count = 1;
	ref->d = new VarBool(d);
}
var::var (int8_t d)
{
	ref->count = 1;
	ref->d = new VarInt8(d);
}
var::var (uint8_t d)
{
	ref->count = 1;
	ref->d = new VarUint8(d);
}
var::var (int16_t d)
{
	ref->count = 1;
	ref->d = new VarInt16(d);
}
var::var (uint16_t d)
{
	ref->count = 1;
	ref->d = new VarUint16(d);
}
var::var (int32_t d)
{
	ref->count = 1;
	ref->d = new VarInt32(d);
}
var::var (uint32_t d)
{
	ref->count = 1;
	ref->d = new VarUint32(d);
}
var::var (int64_t d)
{
	ref->count = 1;
	ref->d = new VarInt64(d);
}
var::var (uint64_t d)
{
	ref->count = 1;
	ref->d = new VarUint64(d);
}
var::var (float d)
{
	ref->count = 1;
	ref->d = new VarFloat(d);
}
var::var (double d)
{
	ref->count = 1;
	ref->d = new VarDouble(d);
}
var::var(const char * d)
{
	ref->count = 1;
	ref->d = new VarString(d);
}
var::var(string d)
{
	ref->count = 1;
	ref->d = new VarString(d);
}
var::operator bool()
{
	return (bool)(*ref->d);
}
var::operator int8_t()
{
	return (int8_t)(*ref->d);
}
var::operator char()
{
	return (int8_t)(*ref->d);
}
var::operator uint8_t()
{
	return (uint8_t)(*ref->d);
}
var::operator int16_t()
{
	return (int16_t)(*ref->d);
}
var::operator uint16_t()
{
	return (uint16_t)(*ref->d);
}
var::operator int32_t()
{
	return (int32_t)(*ref->d);
}
var::operator uint32_t()
{
	return (uint32_t)(*ref->d);
}
var::operator float()
{
	return (float)(*ref->d);
}
var::operator double()
{
	return (double)(*ref->d);
}
var::operator string()
{
	return (string)(*ref->d);
}

//equals
var & var::operator = (bool d)
{
	Reset();
	ref->d = new VarBool(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (int8_t d)
{
	Reset();
	ref->d = new VarInt8(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (uint8_t d)
{
	Reset();
	ref->d = new VarUint8(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (int16_t d)
{
	Reset();
	ref->d = new VarInt16(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (uint16_t d)
{
	Reset();
	ref->d = new VarUint16(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (int32_t d)
{
	Reset();
	ref->d = new VarInt32(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (uint32_t d)
{
	Reset();
	ref->d = new VarUint32(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (int64_t d)
{
	Reset();
	ref->d = new VarInt64(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (uint64_t d)
{
	Reset();
	ref->d = new VarUint64(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (float d)
{
	Reset();
	ref->d = new VarFloat(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (double d)
{
	Reset();
	ref->d = new VarDouble(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (const char * d)
{
	Reset();
	ref->d = new VarString(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (string d)
{
	Reset();
	ref->d = new VarString(d);
	ref->count = 1;
	return (*this);
}
var & var::operator = (var v)
{

	if(v.ref->d->Type() == VarType::Function ||
	v.ref->d->Type() == VarType::List ||
	v.ref->d->Type() == VarType::Map)
	{
		ref = v.ref;
		ref->count++;
	}
	else
	{
		Reset();
		v.ref->d->CloneOrMapTo(ref->d);
	}
	return (*this);
}
//end equals
//add
var var::operator + (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::var::operator + (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (const char * d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (string d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator + (var v)
{
	var r;
	r.Reset();
	ref->d->Add2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end add
//minus
var var::operator - (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator - (var v)
{
	var r;
	r.Reset();
	ref->d->Sub2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end minus
//multiply
var var::operator * (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator * (var v)
{
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end multiply
//division
var var::operator / (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Mul2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator / (var v)
{
	var r;
	r.Reset();
	ref->d->Div2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end division
// equal equal
var var::operator == (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (const char * d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (string d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator == (var v)
{
	var r;
	r.Reset();
	ref->d->Eq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end equal equal
//less than
var var::operator < (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (const char * d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (string d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator < (var v)
{
	var r;
	r.Reset();
	ref->d->Le2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end less than
//less equal
var var::operator <= (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (const char * d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (string d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator <= (var v)
{
	var r;
	r.Reset();
	ref->d->LeEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end less equal
//greater than
var var::operator > (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (const char * d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (string d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator > (var v)
{
	var r;
	r.Reset();
	ref->d->Gr2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end greater than
//greater equals than
var var::operator >= (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (const char * d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (string d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator >= (var v)
{
	var r;
	r.Reset();
	ref->d->GrEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end greater equals than
//not equal
var var::operator != (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (float d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (double d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (const char * d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (string d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator != (var v)
{
	var r;
	r.Reset();
	ref->d->NotEq2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//not equal end
//not
var var::operator !()
{
	var r = ref->d->Not();
	return r;
}
//not end
//or
var var::operator | (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator | (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator | (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator | (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator | (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator | (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator | (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator | (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator | (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator | (var v)
{
	var r;
	r.Reset();
	ref->d->Or2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end or
//and
var var::operator & (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator & (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator & (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator & (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator & (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator & (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator & (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator & (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator & (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator & (var v)
{
	var r;
	r.Reset();
	ref->d->And2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end and
//xor
var var::operator ^ (bool d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator ^ (int8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator ^ (uint8_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator ^ (int16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator ^ (uint16_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator ^ (int32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator ^ (uint32_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator ^ (int64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator ^ (uint64_t d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
var var::operator ^ (var v)
{
	var r;
	r.Reset();
	ref->d->Xor2(r.ref->d,v.ref->d);
	r.ref->count = 1;
	return r;
}
//end xor
//left bit shift
var var::operator << (int d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->LeftBitShift(r.ref->d, d);
	return r;
}
//end left bit shift
//right bit shift
var var::operator >> (int d)
{
	var v = d;
	var r;
	r.Reset();
	ref->d->RightBitShift(r.ref->d, d);
	return r;
}
//end right bit shift
//plus plus
var var::operator ++ (int i)
{
	ref->d->PlusPlus();
	return (*this);
}
//end plus plus
//minus minus
var var::operator -- (int i)
{
	ref->d->PlusPlus();
	return (*this);
}
//end minus minus
//list

var & var::l(bool d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(int8_t d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(uint8_t d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(int16_t d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(uint16_t d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(int32_t d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(uint32_t d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(int64_t d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(uint64_t d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(float d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(double d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(const char * d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(string d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(var v)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	ref->d->l(v);
	return (*this);
}

//functions in lists
var & var::l(function<void()> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var, var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<void(var, var, var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
///////var return
var & var::l(function<var()> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var, var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
var & var::l(function<var(var, var, var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::List)
	{
		Reset();
		ref->d = new VarList();
		ref->count = 1;

	}
	var v = d;
	ref->d->l(v);
	return (*this);
}
//end functions in list
var & var::operator [](int i)
{

	return (var&)(*ref->d)[i];
}
int var::Size()
{
	return ref->d->Size();
}

//end list
//map
var & var::m(string n, bool d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, int8_t d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, uint8_t d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, int16_t d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, uint16_t d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, int32_t d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, uint32_t d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, int64_t d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, uint64_t d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, float d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, double d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, const char * d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, string d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, var d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
//map functions
var & var::m(string n, function<void()> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var, var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<void(var, var, var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
/////////var functions
var & var::m(string n, function<var()> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var, var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
var & var::m(string n, function<var(var, var, var, var, var, var, var, var, var, var)> d)
{
	if(ref->d->Type() != VarType::Map)
	{
		Reset();
		ref->d = new VarMap();
		ref->count = 1;

	}
	var v = d;
	ref->d->m(n, v);
	return (*this);
}
//end map functions
var & var::operator [](string n)
{
	return (*ref->d)[n];
}
var & var::operator [](const char * n)
{
	string s = n;
	return (*ref->d)[s];
}
//end map
//both list and map
var & var::operator [](var v)
{
	if(v.ref->d->Type() == VarType::String)
	{
		return (*ref->d)[(string)v];
	}
	(*ref->d)[(int)v];
}
//end both list and map
//function
var::var(function<void()> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var, var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var, var, var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var, var, var, var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<void(var, var, var, var, var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var()> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var, var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var, var, var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var, var, var, var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var::var(function<var(var, var, var, var, var, var, var, var, var, var)> func)
{
	ref->count = 1;
	ref->d = new VarFunction(func);
}
var var::operator()(var a1 = var(), var a2 = var(), var a3 = var(), var a4 = var(), var a5 = var(), var a6 = var(), var a7 = var(), var a8 = var(), var a9 = var(), var a10 = var())
{
	var args[] = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10};
	return ref->d->f(args, 10);
}

//endfunction




#endif
