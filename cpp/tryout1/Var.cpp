#ifndef VAR_CPP
#define VAR_CPP
#include "Var.hpp"
#include "VarGetSet.hpp"
#include "VarRef.cpp"
//#include "newVar.cpp"
//#include "setVar.cpp"
#include "resetVar.cpp"
//#include "castVar.cpp"
//#include "castVarPtr.cpp"
#include "castVarRef.cpp"
#include "callFunc.cpp"
#include "equalsVar.cpp"

var::var()
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Undefined;
  r.count = 1;
  //newVar[(int)ref->t](ref);
}
var::var(bool d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Bool;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new bool;
  (*((bool*)r.data)) = d;
  r.count = 1;

}
var::var(char d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Char;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new char;
  (*((char*)r.data)) = d;
  r.count = 1;
}
var::var(int8_t d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int8;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new int8_t;
  (*((int8_t*)r.data)) = d;
  r.count = 1;
}
var::var(uint8_t d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint8;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new uint8_t;
  (*((uint8_t*)r.data)) = d;
  r.count = 1;
}
var::var(int16_t d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int16;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new int16_t;
  (*((int16_t*)r.data)) = d;
  r.count = 1;
}
var::var(uint16_t d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint16;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new uint16_t;
  (*((uint16_t*)r.data)) = d;
  r.count = 1;
}
var::var(int32_t d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int32;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new int32_t;
  (*((int32_t*)r.data)) = d;
  r.count = 1;
}
var::var(uint32_t d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint32;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new uint32_t;
  (*((uint32_t*)r.data)) = d;
  r.count = 1;
}
var::var(int64_t d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int64;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new int64_t;
  (*((int64_t*)r.data)) = d;
  r.count = 1;
}
var::var(uint64_t d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint64;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new uint64_t;
  (*((uint64_t*)r.data)) = d;
  r.count = 1;
}
var::var(float d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Float;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new float;
  (*((float*)r.data)) = d;
  r.count = 1;
}
var::var(double d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Double;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new double;
  (*((double*)r.data)) = d;
  r.count = 1;
}
var::var(const char * d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::String;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new string;
  (*((string*)r.data)) = d;
  r.count = 1;
}
var::var(string d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::String;
  //newVar[(int)ref->t](ref);
  //setVar(ref, d);
  r.data = new string;
  (*((string*)r.data)) = d;
  r.count = 1;
}
////////functions
//functions
var::var(function<void()> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void()>;
  (*((function<void()>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 0;
  r.count = 1;
}
var::var(function<void(var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var)>;
  (*((function<void(var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 1;
  r.count = 1;
}
var::var(function<void(var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var, var)>;
  (*((function<void(var, var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 2;
  r.count = 1;
}
var::var(function<void(var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var, var, var)>;
  (*((function<void(var, var, var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 3;
  r.count = 1;
}
var::var(function<void(var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var, var, var, var)>;
  (*((function<void(var, var, var, var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 4;
  r.count = 1;
}
var::var(function<void(var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var, var, var, var, var)>;
  (*((function<void(var, var, var, var, var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 5;
  r.count = 1;
}
var::var(function<void(var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var, var, var, var, var, var)>;
  (*((function<void(var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 6;
  r.count = 1;
}
var::var(function<void(var, var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var, var, var, var, var, var, var)>;
  (*((function<void(var, var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 7;
  r.count = 1;
}
var::var(function<void(var, var, var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var, var, var, var, var, var, var, var)>;
  (*((function<void(var, var, var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 8;
  r.count = 1;
}
var::var(function<void(var, var, var, var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var, var, var, var, var, var, var, var, var)>;
  (*((function<void(var, var, var, var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 9;
  r.count = 1;
}
var::var(function<void(var, var, var, var, var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<void(var, var, var, var, var, var, var, var, var, var)>;
  (*((function<void(var, var, var, var, var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = false;
  r.numberArgs = 10;
  r.count = 1;
}
var::var(function<var()> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var()>;
  (*((function<var()>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 0;
  r.count = 1;
}
var::var(function<var(var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var)>;
  (*((function<var(var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 1;
  r.count = 1;
}
var::var(function<var(var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var, var)>;
  (*((function<var(var, var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 2;
  r.count = 1;
}
var::var(function<var(var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var, var, var)>;
  (*((function<var(var, var, var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 3;
  r.count = 1;
}
var::var(function<var(var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var, var, var, var)>;
  (*((function<var(var, var, var, var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 4;
  r.count = 1;
}
var::var(function<var(var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var, var, var, var, var)>;
  (*((function<var(var, var, var, var, var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 5;
  r.count = 1;
}
var::var(function<var(var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var, var, var, var, var, var)>;
  (*((function<var(var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 6;
  r.count = 1;
}
var::var(function<var(var, var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var, var, var, var, var, var, var)>;
  (*((function<var(var, var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 7;
  r.count = 1;
}
var::var(function<var(var, var, var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var, var, var, var, var, var, var, var)>;
  (*((function<var(var, var, var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 8;
  r.count = 1;
}
var::var(function<var(var, var, var, var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var, var, var, var, var, var, var, var, var)>;
  (*((function<var(var, var, var, var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 9;
  r.count = 1;
}
var::var(function<var(var, var, var, var, var, var, var, var, var, var)> d)
{
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Function;
  r.data = new function<var(var, var, var, var, var, var, var, var, var, var)>;
  (*((function<var(var, var, var, var, var, var, var, var, var, var)>*)r.data)) = d;
  r.isVar = true;
  r.numberArgs = 10;
  r.count = 1;
}

//end functions



/////// end funtions

var::var(const var & v)
{
  ref = v.ref;
  ref->count++;
}
var::~var()
{
  resetVar[(int)ref->t](ref);
}

VarType var::Type()
{
  return ref->t;
}
/*
var::operator bool()
{
  //cout << "cast to bool" el;
  return castVarToBool[(int)ref->t](*ref);
}
var::operator char()
{
  //cout << "cast to bool" el;
  return castVarToChar[(int)ref->t](*ref);
}
var::operator int8_t()
{
  //cout << "cast to int64" el;
  return castVarToInt8[(int)ref->t](*ref);
}
var::operator uint8_t()
{
  //cout << "cast to int64" el;
  return castVarToUint8[(int)ref->t](*ref);
}
var::operator int16_t()
{
  //cout << "cast to int64" el;
  return castVarToInt16[(int)ref->t](*ref);
}
var::operator uint16_t()
{
  //cout << "cast to int64" el;
  return castVarToUint16[(int)ref->t](*ref);
}
var::operator int32_t()
{
  //cout << "cast to int64" el;
  return castVarToInt32[(int)ref->t](*ref);
}
var::operator uint32_t()
{
  //cout << "cast to int64" el;
  return castVarToUint32[(int)ref->t](*ref);
}
var::operator int64_t()
{
  //cout << "cast to int64" el;
  return castVarToInt64[(int)ref->t](*ref);
}
var::operator uint64_t()
{
  //cout << "cast to int64" el;
  return castVarToUint64[(int)ref->t](*ref);
}
var::operator float()
{
  //cout << "cast to double" el;
  return castVarToFloat[(int)ref->t](*ref);
}
var::operator double()
{
  //cout << "cast to double" el;
  return castVarToDouble[(int)ref->t](*ref);
}
var::operator string()
{
  return castVarToString[(int)ref->t](*ref);
}
*/
//////////
/*
var::operator bool*()
{
	return castVarPtrToBoolPtr[(int)ref->t](*ref);
}
var::operator char*()
{
	return castVarPtrToCharPtr[(int)ref->t](*ref);
}
var::operator int8_t*()
{
	return castVarPtrToInt8Ptr[(int)ref->t](*ref);
}
var::operator uint8_t*()
{
	return castVarPtrToUint8Ptr[(int)ref->t](*ref);
}
var::operator int16_t*()
{
	return castVarPtrToInt16Ptr[(int)ref->t](*ref);
}
var::operator uint16_t*()
{
	return castVarPtrToUint16Ptr[(int)ref->t](*ref);
}
var::operator int32_t*()
{
	return castVarPtrToInt32Ptr[(int)ref->t](*ref);
}
var::operator uint32_t*()
{
	return castVarPtrToUint32Ptr[(int)ref->t](*ref);
}
var::operator int64_t*()
{
	return castVarPtrToInt64Ptr[(int)ref->t](*ref);
}
var::operator uint64_t*()
{
	return castVarPtrToUint64Ptr[(int)ref->t](*ref);
}
var::operator float*()
{
  return castVarPtrToFloatPtr[(int)ref->t](*ref);
}
var::operator double*()
{
  return castVarPtrToDoublePtr[(int)ref->t](*ref);
}
var::operator string*()
{
  return castVarPtrToStringPtr[(int)ref->t](*ref);
}
var::operator vector<var>*()
{
  return castVarPtrToListPtr[(int)ref->t](*ref);
}
var::operator unordered_map<string, var>*()
{
  return castVarPtrToMapPtr[(int)ref->t](*ref);
}
var::operator VarGetSet*()
{
  return castVarPtrToGetSetPtr[(int)ref->t](*ref);
}
*/
///////////////
//////////

var::operator bool&()
{
	return castVarRefToBoolRef[(int)ref->t](*ref);
}
var::operator char&()
{
	return castVarRefToCharRef[(int)ref->t](*ref);
}
var::operator int8_t&()
{
	return castVarRefToInt8Ref[(int)ref->t](*ref);
}
var::operator uint8_t&()
{
	return castVarRefToUint8Ref[(int)ref->t](*ref);
}
var::operator int16_t&()
{
	return castVarRefToInt16Ref[(int)ref->t](*ref);
}
var::operator uint16_t&()
{
	return castVarRefToUint16Ref[(int)ref->t](*ref);
}
var::operator int32_t&()
{
	return castVarRefToInt32Ref[(int)ref->t](*ref);
}
var::operator uint32_t&()
{
	return castVarRefToUint32Ref[(int)ref->t](*ref);
}
var::operator int64_t&()
{
	return castVarRefToInt64Ref[(int)ref->t](*ref);
}
var::operator uint64_t&()
{
	return castVarRefToUint64Ref[(int)ref->t](*ref);
}
var::operator float&()
{
  return castVarRefToFloatRef[(int)ref->t](*ref);
}
var::operator double&()
{
  return castVarRefToDoubleRef[(int)ref->t](*ref);
}
var::operator string&()
{
  return castVarRefToStringRef[(int)ref->t](*ref);
}
var::operator vector<var>&()
{
  return castVarRefToListRef[(int)ref->t](*ref);
}
var::operator unordered_map<string, var>&()
{
  return castVarRefToMapRef[(int)ref->t](*ref);
}
var::operator VarGetSet&()
{
  return castVarRefToGetSetRef[(int)ref->t](*ref);
}

///equals operators
var & var::operator = (bool d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Bool;
  r.data = new bool;
  (*((bool*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (char d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Char;
  r.data = new char;
  (*((char*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (int8_t d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int8;
  r.data = new int8_t;
  (*((int8_t*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (uint8_t d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint8;
  r.data = new uint8_t;
  (*((uint8_t*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (int16_t d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int16;
  r.data = new int16_t;
  (*((int16_t*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (uint16_t d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint16;
  r.data = new uint16_t;
  (*((uint16_t*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (int32_t d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int32;
  r.data = new int32_t;
  (*((int32_t*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (uint32_t d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint32;
  r.data = new uint32_t;
  (*((uint32_t*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (int64_t d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int64;
  r.data = new int64_t;
  (*((int64_t*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (uint64_t d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint64;
  r.data = new uint64_t;
  (*((uint64_t*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (float d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Float;
  r.data = new float;
  (*((float*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (double d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Double;
  r.data = new double;
  (*((double*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (string d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::String;
  r.data = new string;
  (*((string*)r.data)) = d;
  r.count = 1;
  return (*this);
}
var & var::operator = (var d)
{
  VarRef & r = *d.ref;
  equalsVar[(int)r.t](ref, d);
  return (*this);
}
//end equals operators

///functions
var var::operator()(var a1 = var(), var a2 = var(), var a3 = var(),
var a4 = var(), var a5 = var(), var a6 = var(), var a7 = var(),
var a8 = var(), var a9 = var(), var a10 = var())
{
  VarRef & r = *ref;
  if(r.t ==VarType::Function)
  {
    return callVarFunc[(int)r.isVar][r.numberArgs](r, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  }
  return var();
}
/// end functions
//list
var & var::l()
{
	if(ref->t != VarType::List)
	{
		resetVar[(int)ref->t](ref);
		ref = new VarRef;
		VarRef & r = *ref;
		r.t = VarType::List;
		r.data = new vector<var>;
		r.count = 1;

	}
	return (*this);
}
var & var::l(var d)
{
	if(ref->t != VarType::List)
	{
		resetVar[(int)ref->t](ref);
		ref = new VarRef;
		VarRef & r = *ref;
		r.t = VarType::List;
		r.data = new vector<var>;
		r.count = 1;
	}

	VarRef & r1 = *ref;
	(*(vector<var>*)r1.data).push_back(d);

	return (*this);
}
var & var::operator[](int i)
{
	vector<var> & vv = (*this);
	return vv[i];
}
//end list
//map
var & var::m()
{
	if(ref->t != VarType::Map)
	{
		resetVar[(int)ref->t](ref);
		ref = new VarRef;
		VarRef & r = *ref;
		r.t = VarType::Map;
		r.data = new unordered_map<string, var>;
		r.count = 1;

	}
	return (*this);
}
var & var::m(const char * k, var d)
{
	if(ref->t != VarType::Map)
	{
		resetVar[(int)ref->t](ref);
		ref = new VarRef;
		VarRef & r = *ref;
		r.t = VarType::Map;
		r.data = new unordered_map<string, var>;
		r.count = 1;
	}

	VarRef & r1 = *ref;
	(*(unordered_map<string, var>*)r1.data)[k] = d;

	return (*this);
}
var & var::m(string k, var d)
{
	if(ref->t != VarType::Map)
	{
		resetVar[(int)ref->t](ref);
		ref = new VarRef;
		VarRef & r = *ref;
		r.t = VarType::Map;
		r.data = new unordered_map<string, var>;
		r.count = 1;
	}

	VarRef & r1 = *ref;
	(*(unordered_map<string, var>*)r1.data)[k] = d;

	return (*this);
}
var & var::operator[](const char * k)
{
	unordered_map<string, var> & mm = (*this);
	return mm[k];
}
var & var::operator[](string k)
{
	unordered_map<string, var> & mm = (*this);
	return mm[k];
}
//end map

#endif
