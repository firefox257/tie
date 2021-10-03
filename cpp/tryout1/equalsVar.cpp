#ifndef EQUALSVAR_CPP
#define EQUALSVAR_CPP

void equalsVarUndefined(VarRef * & ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Undefined;
  r.data = 0;
  r.count = 1;
}
void equalsVarBool(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Bool;
  r.data = new bool;
  (*((bool*)r.data)) = (bool)d;
  r.count = 1;
}
void equalsVarChar(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Char;
  r.data = new char;
  (*((char*)r.data)) = (char)d;
  r.count = 1;
}
void equalsVarInt8(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int8;
  r.data = new int8_t;
  (*((int8_t*)r.data)) = (int8_t)d;
  r.count = 1;
}
void equalsVarUint8(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint8;
  r.data = new uint8_t;
  (*((uint8_t*)r.data)) = (uint8_t)d;
  r.count = 1;
}
void equalsVarInt16(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int16;
  r.data = new int16_t;
  (*((int16_t*)r.data)) = (int16_t)d;
  r.count = 1;
}
void equalsVarUint16(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint16;
  r.data = new uint16_t;
  (*((uint16_t*)r.data)) = (uint16_t)d;
  r.count = 1;
}
void equalsVarInt32(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int32;
  r.data = new int32_t;
  (*((int32_t*)r.data)) = (int32_t)d;
  r.count = 1;
}
void equalsVarUint32(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint32;
  r.data = new uint32_t;
  (*((uint32_t*)r.data)) = d;
  r.count = 1;
}
void equalsVarInt64(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Int64;
  r.data = new int64_t;
  (*((int64_t*)r.data)) = (uint32_t)d;
  r.count = 1;
}
void equalsVarUint64(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Uint64;
  r.data = new uint64_t;
  (*((uint64_t*)r.data)) = (uint64_t)d;
  r.count = 1;
}
void equalsVarFloat(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Float;
  r.data = new float;
  (*((float*)r.data)) = (float)d;
  r.count = 1;
}
void equalsVarDouble(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::Double;
  r.data = new double;
  (*((double*)r.data)) = (double)d;
  r.count = 1;
}
void equalsVarString(VarRef *& ref, var & d)
{
  resetVar[(int)ref->t](ref);
  ref = new VarRef;
  VarRef & r = *ref;
  r.t = VarType::String;
  r.data = new string;
  (*((string*)r.data)) = (string)d;
  r.count = 1;
}
void equalsVarList(VarRef *& ref, var & d)
{
    resetVar[(int)ref->t](ref);
    ref = d.ref;
    ref->count++;
}
void equalsVarMap(VarRef *& ref, var & d)
{
    resetVar[(int)ref->t](ref);
    ref = d.ref;
    ref->count++;
}
void equalsVarGetSet(VarRef *& ref, var & d)
{
    resetVar[(int)ref->t](ref);
    ref = d.ref;
    ref->count++;
}
void equalsVarFunction(VarRef *& ref, var & d)
{
    resetVar[(int)ref->t](ref);
    ref = d.ref;
    ref->count++;
}

void(*equalsVar[])(VarRef *& ref, var & d) ={
equalsVarUndefined,
equalsVarBool,
equalsVarChar,
equalsVarInt8,
equalsVarUint8,
equalsVarInt16,
equalsVarUint16,
equalsVarInt32,
equalsVarUint32,
equalsVarInt64,
equalsVarUint64,
equalsVarFloat,
equalsVarDouble,
equalsVarString,
equalsVarList,
equalsVarMap,
equalsVarGetSet,
equalsVarFunction
};
////////////start bool
void equalsBoolBool(VarRef *& ref, var & d)
{
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	(*((bool*)r1.data)) = (*((bool*)r2.data));
}
void equalsBoolChar(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new char;
	r1.t = VarType::Char;
	r1.count = 1;
	(*((char*)r1.data)) = (*((char*)r2.data));
}
void equalsBoolInt8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int8_t;
	r1.t = VarType::Int8;
	r1.count = 1;
	(*((int8_t*)r1.data)) = (*((int8_t*)r2.data));
}
void equalsBoolUint8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint8_t;
	r1.t = VarType::Uint8;
	r1.count = 1;
	(*((uint8_t*)r1.data)) = (*((uint8_t*)r2.data));
}
void equalsBoolInt16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int16_t;
	r1.t = VarType::Int16;
	r1.count = 1;
	(*((int16_t*)r1.data)) = (*((int16_t*)r2.data));
}
void equalsBoolUint16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint16_t;
	r1.t = VarType::Uint16;
	r1.count = 1;
	(*((uint16_t*)r1.data)) = (*((uint16_t*)r2.data));
}
void equalsBoolInt32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int32_t;
	r1.t = VarType::Int32;
	r1.count = 1;
	(*((int32_t*)r1.data)) = (*((int32_t*)r2.data));
}
void equalsBoolUint32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint32_t;
	r1.t = VarType::Uint32;
	r1.count = 1;
	(*((uint32_t*)r1.data)) = (*((uint32_t*)r2.data));
}
void equalsBoolInt64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int64_t;
	r1.t = VarType::Int64;
	r1.count = 1;
	(*((int64_t*)r1.data)) = (*((int64_t*)r2.data));
}
void equalsBoolUint64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint64_t;
	r1.t = VarType::Uint64;
	r1.count = 1;
	(*((uint64_t*)r1.data)) = (*((uint64_t*)r2.data));
}
void equalsBoolFloat(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new float;
	r1.t = VarType::Float;
	r1.count = 1;
	(*((float*)r1.data)) = (*((float*)r2.data));
}
void equalsBoolDouble(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new double;
	r1.t = VarType::Double;
	r1.count = 1;
	(*((double*)r1.data)) = (*((double*)r2.data));
}
void equalsBoolString(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new string;
	r1.t = VarType::String;
	r1.count = 1;
	(*((string*)r1.data)) = (*((string*)r2.data));
}
void equalsBoolList(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsBoolMap(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsBoolGetSet(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsBoolFunction(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
/////end bool
////////////start char
void equalsCharBool(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new bool;
	r1.t = VarType::Bool;
	r1.count = 1;
	(*((bool*)r1.data)) = (*((bool*)r2.data));
}
void equalsCharChar(VarRef *& ref, var & d)
{
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	(*((char*)r1.data)) = (*((char*)r2.data));
}
void equalsCharInt8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int8_t;
	r1.t = VarType::Int8;
	r1.count = 1;
	(*((int8_t*)r1.data)) = (*((int8_t*)r2.data));
}
void equalsCharUint8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint8_t;
	r1.t = VarType::Uint8;
	r1.count = 1;
	(*((uint8_t*)r1.data)) = (*((uint8_t*)r2.data));
}
void equalsCharInt16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int16_t;
	r1.t = VarType::Int16;
	r1.count = 1;
	(*((int16_t*)r1.data)) = (*((int16_t*)r2.data));
}
void equalsCharUint16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint16_t;
	r1.t = VarType::Uint16;
	r1.count = 1;
	(*((uint16_t*)r1.data)) = (*((uint16_t*)r2.data));
}
void equalsCharInt32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int32_t;
	r1.t = VarType::Int32;
	r1.count = 1;
	(*((int32_t*)r1.data)) = (*((int32_t*)r2.data));
}
void equalsCharUint32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint32_t;
	r1.t = VarType::Uint32;
	r1.count = 1;
	(*((uint32_t*)r1.data)) = (*((uint32_t*)r2.data));
}
void equalsCharInt64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int64_t;
	r1.t = VarType::Int64;
	r1.count = 1;
	(*((int64_t*)r1.data)) = (*((int64_t*)r2.data));
}
void equalsCharUint64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint64_t;
	r1.t = VarType::Uint64;
	r1.count = 1;
	(*((uint64_t*)r1.data)) = (*((uint64_t*)r2.data));
}
void equalsCharFloat(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new float;
	r1.t = VarType::Float;
	r1.count = 1;
	(*((float*)r1.data)) = (*((float*)r2.data));
}
void equalsCharDouble(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new double;
	r1.t = VarType::Double;
	r1.count = 1;
	(*((double*)r1.data)) = (*((double*)r2.data));
}
void equalsCharString(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new string;
	r1.t = VarType::String;
	r1.count = 1;
	(*((string*)r1.data)) = (*((string*)r2.data));
}
void equalsCharList(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsCharMap(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsCharGetSet(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsCharFunction(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
/////end char
////////////start int8
void equalsInt8Bool(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new bool;
	r1.t = VarType::Bool;
	r1.count = 1;
	(*((bool*)r1.data)) = (*((bool*)r2.data));
}
void equalsInt8Char(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new char;
	r1.t = VarType::Char;
	r1.count = 1;
	(*((char*)r1.data)) = (*((char*)r2.data));
}
void equalsInt8Int8(VarRef *& ref, var & d)
{
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	(*((int8_t*)r1.data)) = (*((int8_t*)r2.data));
}
void equalsInt8Uint8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint8_t;
	r1.t = VarType::Uint8;
	r1.count = 1;
	(*((uint8_t*)r1.data)) = (*((uint8_t*)r2.data));
}
void equalsInt8Int16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int16_t;
	r1.t = VarType::Int16;
	r1.count = 1;
	(*((int16_t*)r1.data)) = (*((int16_t*)r2.data));
}
void equalsInt8Uint16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint16_t;
	r1.t = VarType::Uint16;
	r1.count = 1;
	(*((uint16_t*)r1.data)) = (*((uint16_t*)r2.data));
}
void equalsInt8Int32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int32_t;
	r1.t = VarType::Int32;
	r1.count = 1;
	(*((int32_t*)r1.data)) = (*((int32_t*)r2.data));
}
void equalsInt8Uint32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint32_t;
	r1.t = VarType::Uint32;
	r1.count = 1;
	(*((uint32_t*)r1.data)) = (*((uint32_t*)r2.data));
}
void equalsInt8Int64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int64_t;
	r1.t = VarType::Int64;
	r1.count = 1;
	(*((int64_t*)r1.data)) = (*((int64_t*)r2.data));
}
void equalsInt8Uint64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint64_t;
	r1.t = VarType::Uint64;
	r1.count = 1;
	(*((uint64_t*)r1.data)) = (*((uint64_t*)r2.data));
}
void equalsInt8Float(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new float;
	r1.t = VarType::Float;
	r1.count = 1;
	(*((float*)r1.data)) = (*((float*)r2.data));
}
void equalsInt8Double(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new double;
	r1.t = VarType::Double;
	r1.count = 1;
	(*((double*)r1.data)) = (*((double*)r2.data));
}
void equalsInt8String(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new string;
	r1.t = VarType::String;
	r1.count = 1;
	(*((string*)r1.data)) = (*((string*)r2.data));
}
void equalsInt8List(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsInt8Map(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsInt8GetSet(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsInt8Function(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
/////end int8
////////////start uint8
void equalsUint8Bool(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new bool;
	r1.t = VarType::Bool;
	r1.count = 1;
	(*((bool*)r1.data)) = (*((bool*)r2.data));
}
void equalsUint8Char(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new char;
	r1.t = VarType::Char;
	r1.count = 1;
	(*((char*)r1.data)) = (*((char*)r2.data));
}
void equalsUint8Int8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int8_t;
	r1.t = VarType::Int8;
	r1.count = 1;
	(*((int8_t*)r1.data)) = (*((int8_t*)r2.data));
}
void equalsUint8Uint8(VarRef *& ref, var & d)
{
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	(*((uint8_t*)r1.data)) = (*((uint8_t*)r2.data));
}
void equalsUint8Int16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int16_t;
	r1.t = VarType::Int16;
	r1.count = 1;
	(*((int16_t*)r1.data)) = (*((int16_t*)r2.data));
}
void equalsUint8Uint16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint16_t;
	r1.t = VarType::Uint16;
	r1.count = 1;
	(*((uint16_t*)r1.data)) = (*((uint16_t*)r2.data));
}
void equalsUint8Int32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int32_t;
	r1.t = VarType::Int32;
	r1.count = 1;
	(*((int32_t*)r1.data)) = (*((int32_t*)r2.data));
}
void equalsUint8Uint32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint32_t;
	r1.t = VarType::Uint32;
	r1.count = 1;
	(*((uint32_t*)r1.data)) = (*((uint32_t*)r2.data));
}
void equalsUint8Int64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int64_t;
	r1.t = VarType::Int64;
	r1.count = 1;
	(*((int64_t*)r1.data)) = (*((int64_t*)r2.data));
}
void equalsUint8Uint64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint64_t;
	r1.t = VarType::Uint64;
	r1.count = 1;
	(*((uint64_t*)r1.data)) = (*((uint64_t*)r2.data));
}
void equalsUint8Float(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new float;
	r1.t = VarType::Float;
	r1.count = 1;
	(*((float*)r1.data)) = (*((float*)r2.data));
}
void equalsUint8Double(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new double;
	r1.t = VarType::Double;
	r1.count = 1;
	(*((double*)r1.data)) = (*((double*)r2.data));
}
void equalsUint8String(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new string;
	r1.t = VarType::String;
	r1.count = 1;
	(*((string*)r1.data)) = (*((string*)r2.data));
}
void equalsUint8List(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsUint8Map(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsUint8GetSet(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsUint8Function(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
/////end uint8
////////////start int16
void equalsInt16Bool(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new bool;
	r1.t = VarType::Bool;
	r1.count = 1;
	(*((bool*)r1.data)) = (*((bool*)r2.data));
}
void equalsInt16Char(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new char;
	r1.t = VarType::Char;
	r1.count = 1;
	(*((char*)r1.data)) = (*((char*)r2.data));
}
void equalsInt16Int8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int8_t;
	r1.t = VarType::Int8;
	r1.count = 1;
	(*((int8_t*)r1.data)) = (*((int8_t*)r2.data));
}
void equalsInt16Uint8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint8_t;
	r1.t = VarType::Uint8;
	r1.count = 1;
	(*((uint8_t*)r1.data)) = (*((uint8_t*)r2.data));
}
void equalsInt16Int16(VarRef *& ref, var & d)
{
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	(*((int16_t*)r1.data)) = (*((int16_t*)r2.data));
}
void equalsInt16Uint16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint16_t;
	r1.t = VarType::Uint16;
	r1.count = 1;
	(*((uint16_t*)r1.data)) = (*((uint16_t*)r2.data));
}
void equalsInt16Int32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int32_t;
	r1.t = VarType::Int32;
	r1.count = 1;
	(*((int32_t*)r1.data)) = (*((int32_t*)r2.data));
}
void equalsInt16Uint32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint32_t;
	r1.t = VarType::Uint32;
	r1.count = 1;
	(*((uint32_t*)r1.data)) = (*((uint32_t*)r2.data));
}
void equalsInt16Int64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int64_t;
	r1.t = VarType::Int64;
	r1.count = 1;
	(*((int64_t*)r1.data)) = (*((int64_t*)r2.data));
}
void equalsInt16Uint64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint64_t;
	r1.t = VarType::Uint64;
	r1.count = 1;
	(*((uint64_t*)r1.data)) = (*((uint64_t*)r2.data));
}
void equalsInt16Float(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new float;
	r1.t = VarType::Float;
	r1.count = 1;
	(*((float*)r1.data)) = (*((float*)r2.data));
}
void equalsInt16Double(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new double;
	r1.t = VarType::Double;
	r1.count = 1;
	(*((double*)r1.data)) = (*((double*)r2.data));
}
void equalsInt16String(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new string;
	r1.t = VarType::String;
	r1.count = 1;
	(*((string*)r1.data)) = (*((string*)r2.data));
}
void equalsInt16List(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsInt16Map(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsInt16GetSet(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsInt16Function(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
/////end int16
////////////start uint16
void equalsUint16Bool(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new bool;
	r1.t = VarType::Bool;
	r1.count = 1;
	(*((bool*)r1.data)) = (*((bool*)r2.data));
}
void equalsUint16Char(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new char;
	r1.t = VarType::Char;
	r1.count = 1;
	(*((char*)r1.data)) = (*((char*)r2.data));
}
void equalsUint16Int8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int8_t;
	r1.t = VarType::Int8;
	r1.count = 1;
	(*((int8_t*)r1.data)) = (*((int8_t*)r2.data));
}
void equalsUint16Uint8(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint8_t;
	r1.t = VarType::Uint8;
	r1.count = 1;
	(*((uint8_t*)r1.data)) = (*((uint8_t*)r2.data));
}
void equalsUint16Int16(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int16_t;
	r1.t = VarType::Int16;
	r1.count = 1;
	(*((int16_t*)r1.data)) = (*((int16_t*)r2.data));
}
void equalsUint16Uint16(VarRef *& ref, var & d)
{
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	(*((uint16_t*)r1.data)) = (*((uint16_t*)r2.data));
}
void equalsUint16Int32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int32_t;
	r1.t = VarType::Int32;
	r1.count = 1;
	(*((int32_t*)r1.data)) = (*((int32_t*)r2.data));
}
void equalsUint16Uint32(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint32_t;
	r1.t = VarType::Uint32;
	r1.count = 1;
	(*((uint32_t*)r1.data)) = (*((uint32_t*)r2.data));
}
void equalsUint16Int64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new int64_t;
	r1.t = VarType::Int64;
	r1.count = 1;
	(*((int64_t*)r1.data)) = (*((int64_t*)r2.data));
}
void equalsUint16Uint64(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new uint64_t;
	r1.t = VarType::Uint64;
	r1.count = 1;
	(*((uint64_t*)r1.data)) = (*((uint64_t*)r2.data));
}
void equalsUint16Float(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new float;
	r1.t = VarType::Float;
	r1.count = 1;
	(*((float*)r1.data)) = (*((float*)r2.data));
}
void equalsUint16Double(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new double;
	r1.t = VarType::Double;
	r1.count = 1;
	(*((double*)r1.data)) = (*((double*)r2.data));
}
void equalsUint16String(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = new VarRef;
	VarRef & r1 = *ref;
	VarRef & r2 = *(d.ref);
	r1.data = new string;
	r1.t = VarType::String;
	r1.count = 1;
	(*((string*)r1.data)) = (*((string*)r2.data));
}
void equalsUint16List(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsUint16Map(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsUint16GetSet(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
void equalsUint16Function(VarRef *& ref, var & d)
{
	resetVar[(int)ref->t](ref);
	ref = d.ref;
	ref->count++;
}
/////end uint16

#endif
