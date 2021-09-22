#ifndef VARFLOAT_CPP
#define VARFLOAT_CPP

#include "VarUint32.hpp"

#define BASE VarFloat
#define BASEDATA float


void BASE::ThrowNotImplemented(string file, int line)
{
	throw Exception("var float Not implmented.", file, line);
}
void BASE::ThrowException(string file, int line, string msg)
{
	throw Exception("var float " + msg, file, line);
}

//public:
VarType::Types BASE::Type()
{
	static const VarType::Types t = VarType::Float;
	return t;
}

BASE::BASE()
{
	
}
BASE::BASE(float d)
{
	data = d;
}

BASE::operator bool()
{
	return (bool)data;
}
BASE::operator int8_t()
{
	return (int8_t)data;
}
BASE::operator uint8_t()
{
	return (uint8_t)data;
}
BASE::operator int16_t()
{
	return (int16_t)data;
}
BASE::operator uint16_t()
{
	return (uint16_t)data;
}
BASE::operator int32_t()
{
	return (int32_t)data;
}
BASE::operator uint32_t()
{
	return (uint32_t)data;
}
BASE::operator int64_t()
{
	return (int64_t)data;
}
BASE::operator uint64_t()
{
	return (uint64_t)data;
}
BASE::operator float()
{
	return (float)data;
}
BASE::operator double()
{
	return (double)data;
}
BASE::operator string()
{
	return to_string(data);
}
/////////////////////////
void BASE::operator = (bool d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (int8_t d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (uint8_t d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (int16_t d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (uint16_t d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (int32_t d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (uint32_t d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (int64_t d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (uint64_t d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (float d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (double d)
{
	data = (BASEDATA)d;
}
void BASE::operator = (const char * d)
{
	data = (BASEDATA)stoi(d);
}
void BASE::operator = (string d)
{
	data = (BASEDATA)stoi(d);
}

void BASE::CloneOrMapTo(VarBase * & ptr)
{
	ptr = new VarFloat(data);
}
//addition
void BASE::Add2(VarBase * & r, VarBase * & v)
{
	v->Add1(r, data);
}
void BASE::Add1(VarBase * & r, bool d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, int8_t d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, uint8_t d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, int16_t d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, uint16_t d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, int32_t d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, uint32_t d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, int64_t d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, uint64_t d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, float d)
{
	r = new VarFloat(d + data);
}
void BASE::Add1(VarBase * & r, double d)
{
	r = new VarDouble(d + data);
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
	v->Sub1(r, data);
}
void BASE::Sub1(VarBase * & r, bool d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, int8_t d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, uint8_t d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, int16_t d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, uint16_t d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, int32_t d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, uint32_t d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, int64_t d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, uint64_t d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, float d)
{
	r = new VarFloat(d - data);
}
void BASE::Sub1(VarBase * & r, double d)
{
	r = new VarDouble(d - data);
}
//end subtraction
//Multiplication
void BASE::Mul2(VarBase * & r, VarBase * & v)
{
	v->Mul1(r, data);
}
void BASE::Mul1(VarBase * & r, bool d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, int8_t d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, uint8_t d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, int16_t d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, uint16_t d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, int32_t d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, uint32_t d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, int64_t d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, uint64_t d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, float d)
{
	r = new VarFloat(d * data);
}
void BASE::Mul1(VarBase * & r, double d)
{
	r = new VarDouble(d * data);
}

//end Multiplication
//Division
void BASE::Div2(VarBase * & r, VarBase * & v)
{
	v->Div1(r, data);
}
void BASE::Div1(VarBase * & r, bool d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, int8_t d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, uint8_t d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, int16_t d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, uint16_t d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, int32_t d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, uint32_t d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, int64_t d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, uint64_t d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, float d)
{
	r = new VarFloat(d / data);
}
void BASE::Div1(VarBase * & r, double d)
{
	r = new VarDouble(d / data);
}
//end Division
//equals
void BASE::Eq2(VarBase * & r, VarBase * & v)
{
	v->Eq1(r, data);
}
void BASE::Eq1(VarBase * & r, bool d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, int8_t d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, uint8_t d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, int16_t d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, uint16_t d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, int32_t d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, uint32_t d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, int64_t d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, uint64_t d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, float d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, double d)
{
	r = new VarBool(d == data);
}
void BASE::Eq1(VarBase * & r, string d)
{
	//todo later
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end equals
//less than
void BASE::Le2(VarBase * & r, VarBase * & v)
{
	v->Le1(r, data);
}
void BASE::Le1(VarBase * & r, bool d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, int8_t d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, uint8_t d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, int16_t d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, uint16_t d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, int32_t d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, uint32_t d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, int64_t d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, uint64_t d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, float d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, double d)
{
	r = new VarBool(d < data);
}
void BASE::Le1(VarBase * & r, string d)
{
	//todo later
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end less than
//less then eq
void BASE::LeEq2(VarBase * & r, VarBase * & v)
{
	v->LeEq1(r, data);
}
void BASE::LeEq1(VarBase * & r, bool d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, int8_t d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, uint8_t d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, int16_t d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, uint16_t d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, int32_t d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, uint32_t d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, int64_t d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, uint64_t d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, float d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, double d)
{
	r = new VarBool(d <= data);
}
void BASE::LeEq1(VarBase * & r, string d)
{
	//todo later
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end less than eq
//greater than
void BASE::Gr2(VarBase * & r, VarBase * & v)
{
	v->Gr1(r, data);
}
void BASE::Gr1(VarBase * & r, bool d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, int8_t d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, uint8_t d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, int16_t d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, uint16_t d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, int32_t d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, uint32_t d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, int64_t d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, uint64_t d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, float d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, double d)
{
	r = new VarBool(d > data);
}
void BASE::Gr1(VarBase * & r, string d)
{
	//todo later
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end greater than
//greater then eq
void BASE::GrEq2(VarBase * & r, VarBase * & v)
{
	v->GrEq1(r, data);
}
void BASE::GrEq1(VarBase * & r, bool d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, int8_t d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, uint8_t d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, int16_t d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, uint16_t d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, int32_t d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, uint32_t d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, int64_t d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, uint64_t d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, float d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, double d)
{
	r = new VarBool(d >= data);
}
void BASE::GrEq1(VarBase * & r, string d)
{
	//todo later
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end greater than eq
//Not equal
void BASE::NotEq2(VarBase * & r, VarBase * & v)
{
	v->NotEq1(r, data);
}
void BASE::NotEq1(VarBase * & r, bool d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, int8_t d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, uint8_t d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, int16_t d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, uint16_t d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, int32_t d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, uint32_t d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, int64_t d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, uint64_t d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, float d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, double d)
{
	r = new VarBool(d != data);
}
void BASE::NotEq1(VarBase * & r, string d)
{
	//todo later
	ThrowNotImplemented(__FILE__, __LINE__);
}
//end Not equal
//Not
bool BASE::Not()
{
	return !data;
}
//end Not
//plusplus
void BASE::PlusPlus()
{
	data++;
}
//end plusplus
//minusminus
void BASE::MinusMinus()
{
	data--;
}
//end minus minus

void BASE::outstream(ostream & out)
{
	out << data;
}




#endif




