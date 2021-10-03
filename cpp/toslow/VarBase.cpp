#ifndef VARBASE_CPP
#define VARBASE_CPP

#include "VarBase.hpp"

#define BASE VarBase


void BASE::ThrowNotImplemented(string file, int line)
{
	throw Exception("Not implmented.", file, line);
}
void BASE::ThrowException(string file, int line, string msg)
{
	throw Exception(msg, file, line);
}

//public:
VarType::Types BASE::Type()
{
	static const VarType::Types t = VarType::Undefined;
	return t;
}

BASE::BASE()
{

}
BASE::BASE(bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(const char * d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(string d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//function
BASE::BASE(function<void()> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var, var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<void(var, var, var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var()> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var, var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
BASE::BASE(function<var(var, var, var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end function


BASE::operator bool()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return false;
}
BASE::operator int8_t()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
BASE::operator uint8_t()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
BASE::operator int16_t()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
BASE::operator uint16_t()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
BASE::operator int32_t()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
BASE::operator uint32_t()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
BASE::operator int64_t()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
BASE::operator uint64_t()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
BASE::operator float()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
BASE::operator double()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0.0;
}
BASE::operator string()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return "";
}
/////////////////////////
void BASE::operator = (bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (const char * d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::operator = (string d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}

void BASE::CloneOrMapTo(VarBase * & ptr)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//addition
void BASE::Add2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Add1(VarBase * & r, const char * d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}void BASE::Add1(VarBase * & r, string d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end addition
//subtraction
void BASE::Sub2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Sub1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end subtraction
//Multiplication
void BASE::Mul2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Mul1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}

//end Multiplication
//Division
void BASE::Div2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Div1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end Division
//equals
void BASE::Eq2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Eq1(VarBase * & r, string d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end equals
//less than
void BASE::Le2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Le1(VarBase * & r, string d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end less than
//less then eq
void BASE::LeEq2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::LeEq1(VarBase * & r, string d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end less than eq
//greater than
void BASE::Gr2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Gr1(VarBase * & r, string d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end greater than
//greater then eq
void BASE::GrEq2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::GrEq1(VarBase * & r, string d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end greater than eq
//Not equal
void BASE::NotEq2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, float d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, double d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::NotEq1(VarBase * & r, string d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end Not equal
//Not
bool BASE::Not()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return false;
}
//end Not
//or
void BASE::Or2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Or1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Or1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Or1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Or1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Or1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Or1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Or1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Or1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Or1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end or
//and
void BASE::And2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::And1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::And1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::And1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::And1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::And1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::And1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::And1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::And1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::And1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end and
//xor
void BASE::Xor2(VarBase * & r, VarBase * & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Xor1(VarBase * & r, bool d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Xor1(VarBase * & r, int8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Xor1(VarBase * & r, uint8_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Xor1(VarBase * & r, int16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Xor1(VarBase * & r, uint16_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Xor1(VarBase * & r, int32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Xor1(VarBase * & r, uint32_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Xor1(VarBase * & r, int64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::Xor1(VarBase * & r, uint64_t d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end xor
//bitshift
void BASE::LeftBitShift(VarBase * & r, int d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::RightBitShift(VarBase * & r, int d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end bitshift
//plusplus
void BASE::PlusPlus()
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end plusplus
//minusminus
void BASE::MinusMinus()
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end minus minus
//list
void BASE::l(var & d)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
var & BASE::operator[](int i)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
int BASE::Size()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return 0;
}
//end list
//map
void BASE::m(string n, var & v)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
var & BASE::operator[](string i)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end map
//function
void BASE::f(function<void()> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<void(var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<void(var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}

void BASE::f(function<void(var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<void(var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<void(var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<void(var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<void(var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<void(var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<void(var, var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<void(var, var, var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var()> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var, var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::f(function<var(var, var, var, var, var, var, var, var, var, var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
var BASE::f(var * args, int count)
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return var();
}
//end function
//getter setter
void BASE::g(function<var()> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::s(function<void(var)> func)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
void BASE::gs(function<var()> funcg, function<void(var)> funcs)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
var BASE::g()
{
	ThrowNotImplemented(__FILE__, __LINE__);
	return var();
}
void BASE::s(var)
{
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end getter setter

void BASE::outstream(ostream & out)
{
	out << "var Not Implemented \r\n";
}







#endif
