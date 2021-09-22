#ifndef VARSTRING_CPP
#define VARSTRING_CPP

#include "VarString.hpp"

#define BASE VarString
#define BASEDATA string


void BASE::ThrowNotImplemented(string file, int line)
{
	throw Exception("var string Not implmented.", file, line);
}
void BASE::ThrowException(string file, int line, string msg)
{
	throw Exception("var string " + msg, file, line);
}

//public:
VarType::Types BASE::Type()
{
	static const VarType::Types t = VarType::String;
	return t;
}

BASE::BASE()
{
	
}
BASE::BASE(const char * d)
{
	data = d;
}

BASE::BASE(string d)
{
	data = d;
}


BASE::operator bool()
{
	if(data == "1" || data == "true") return true;
	return false;
}
BASE::operator int8_t()
{
	return (int8_t)stoi(data);
}
BASE::operator uint8_t()
{
	return (uint8_t)stoi(data);
}
BASE::operator int16_t()
{
	return (int16_t)stoi(data);
}
BASE::operator uint16_t()
{
	return (uint16_t)stoi(data);
}
BASE::operator int32_t()
{
	return (int32_t)stoi(data);
}
BASE::operator uint32_t()
{
	return (uint32_t)stol(data);
}
BASE::operator int64_t()
{
	return (int64_t)stol(data);
}
BASE::operator uint64_t()
{
	return (uint64_t)(stol(data)&&0xffffffffffffffff);
}
BASE::operator float()
{
	return (float)stof(data);
}
BASE::operator double()
{
	return (double)stod(data);
}
BASE::operator string()
{
	return data;
}
/////////////////////////
void BASE::operator = (bool d)
{
	data = to_string(d);
}
void BASE::operator = (int8_t d)
{
	data = to_string(d);
}
void BASE::operator = (uint8_t d)
{
	data = to_string(d);
}
void BASE::operator = (int16_t d)
{
	data = to_string(d);
}
void BASE::operator = (uint16_t d)
{
	data = to_string(d);
}
void BASE::operator = (int32_t d)
{
	data = to_string(d);
}
void BASE::operator = (uint32_t d)
{
	data = to_string(d);
}
void BASE::operator = (int64_t d)
{
	data = to_string(d);
}
void BASE::operator = (uint64_t d)
{
	data = to_string(d);
}
void BASE::operator = (float d)
{
	data = to_string(d);
}
void BASE::operator = (double d)
{
	data = to_string(d);
}
void BASE::operator = (const char * d)
{
	data = d;
}
void BASE::operator = (string d)
{
	data = d;
}

void BASE::CloneOrMapTo(VarBase * & ptr)
{
	ptr = new VarString(data);
}
//addition
void BASE::Add2(VarBase * & r, VarBase * & v)
{
	v->Add1(r, data);
}
void BASE::Add1(VarBase * & r, bool d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, int8_t d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, uint8_t d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, int16_t d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, uint16_t d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, int32_t d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, uint32_t d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, int64_t d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, uint64_t d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, float d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, double d)
{
	r = new VarString(to_string(d) + data);
}
void BASE::Add1(VarBase * & r, const char * d)
{
	r = new VarString(d + data);
}
void BASE::Add1(VarBase * & r, string d)
{
	r = new VarString(d + data);
}
//end addition

//end Division
//equals
void BASE::Eq2(VarBase * & r, VarBase * & v)
{
	v->Eq1(r, data);
}
void BASE::Eq1(VarBase * & r, bool d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, int8_t d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, uint8_t d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, int16_t d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, uint16_t d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, int32_t d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, uint32_t d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, int64_t d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, uint64_t d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, float d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, double d)
{
	r = new VarBool(to_string(d) == data);
}
void BASE::Eq1(VarBase * & r, string d)
{
	//todo later
	r = new VarBool(d == data);
}
//end equals
//less than
void BASE::Le2(VarBase * & r, VarBase * & v)
{
	v->Le1(r, data);
}
void BASE::Le1(VarBase * & r, bool d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, int8_t d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, uint8_t d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, int16_t d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, uint16_t d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, int32_t d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, uint32_t d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, int64_t d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, uint64_t d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, float d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, double d)
{
	r = new VarBool(to_string(d) < data);
}
void BASE::Le1(VarBase * & r, string d)
{
	//todo later
	r = new VarBool(d < data);
}
//end less than
//less then eq
void BASE::LeEq2(VarBase * & r, VarBase * & v)
{
	v->LeEq1(r, data);
}
void BASE::LeEq1(VarBase * & r, bool d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, int8_t d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, uint8_t d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, int16_t d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, uint16_t d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, int32_t d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, uint32_t d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, int64_t d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, uint64_t d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, float d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, double d)
{
	r = new VarBool(to_string(d) <= data);
}
void BASE::LeEq1(VarBase * & r, string d)
{
	//todo later
	r = new VarBool(d <= data);
}
//end less than eq
//greater than
void BASE::Gr2(VarBase * & r, VarBase * & v)
{
	v->Gr1(r, data);
}
void BASE::Gr1(VarBase * & r, bool d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, int8_t d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, uint8_t d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, int16_t d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, uint16_t d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, int32_t d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, uint32_t d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, int64_t d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, uint64_t d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, float d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, double d)
{
	r = new VarBool(to_string(d) > data);
}
void BASE::Gr1(VarBase * & r, string d)
{
	//todo later
	r = new VarBool(d > data);
}
//end greater than
//greater then eq
void BASE::GrEq2(VarBase * & r, VarBase * & v)
{
	v->GrEq1(r, data);
}
void BASE::GrEq1(VarBase * & r, bool d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, int8_t d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, uint8_t d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, int16_t d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, uint16_t d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, int32_t d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, uint32_t d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, int64_t d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, uint64_t d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, float d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, double d)
{
	r = new VarBool(to_string(d) >= data);
}
void BASE::GrEq1(VarBase * & r, string d)
{
	//todo later
	r = new VarBool(d >= data);
}
//end greater than eq
//Not equal
void BASE::NotEq2(VarBase * & r, VarBase * & v)
{
	v->NotEq1(r, data);
}
void BASE::NotEq1(VarBase * & r, bool d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, int8_t d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, uint8_t d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, int16_t d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, uint16_t d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, int32_t d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, uint32_t d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, int64_t d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, uint64_t d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, float d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, double d)
{
	r = new VarBool(to_string(d) != data);
}
void BASE::NotEq1(VarBase * & r, string d)
{
	//todo later
	r = new VarBool(d != data);
}
//end Not equal


void BASE::outstream(ostream & out)
{
	out << data;
}





#endif
