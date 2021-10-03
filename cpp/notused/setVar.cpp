#ifndef SETVAR_CPP
#define SETVAR_CPP
/*
inline void setVar(VarRef * & ref, bool d)
{
  VarRef & r = *ref;
  (*((bool*)r.data)) = d;
}
inline void setVar(VarRef * & ref, char d)
{
  VarRef & r = *ref;
  (*((char*)r.data)) = d;
}
inline void setVar(VarRef * & ref, int8_t d)
{
  VarRef & r = *ref;
  (*((int8_t*)r.data)) = d;
}
inline void setVar(VarRef * & ref, uint8_t d)
{
  VarRef & r = *ref;
  (*((uint8_t*)r.data)) = d;
}
inline void setVar(VarRef * & ref, int16_t d)
{
  VarRef & r = *ref;
  (*((int16_t*)r.data)) = d;
}
inline void setVar(VarRef * & ref, uint16_t d)
{
  VarRef & r = *ref;
  (*((uint16_t*)r.data)) = d;
}
inline void setVar(VarRef * & ref, int32_t d)
{
  VarRef & r = *ref;
  (*((int8_t*)r.data)) = d;
}
inline void setVar(VarRef * & ref, uint32_t d)
{
  VarRef & r = *ref;
  (*((uint8_t*)r.data)) = d;
}
inline void setVar(VarRef  * & ref, int64_t d)
{
  VarRef & r = *ref;
  (*((int64_t*)r.data)) = d;
}
inline void setVar(VarRef  * & ref, uint64_t d)
{
  VarRef & r = *ref;
  (*((uint64_t*)r.data)) = d;
}
inline void setVar(VarRef  * & ref, float d)
{
  VarRef & r = *ref;
  (*((float*)r.data)) = d;
}
inline void setVar(VarRef  * & ref, double d)
{
  VarRef & r = *ref;
  (*((double*)r.data)) = d;
}
inline void setVar(VarRef  * & ref, const char * d)
{
  VarRef & r = *ref;
  (*((string*)r.data)) = d;
}
inline void setVar(VarRef  * & ref, string d)
{
  VarRef & r = *ref;
  (*((string*)r.data)) = d;
}
//?get set???

//var to var
void setVarVarUndefined(VarRef * & ref1, VarRef * & ref2)
{

}
void setVarVarBool(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarBool(ref1);
	(*((bool*)r1.data)) = (*((bool*)r2.data));
}
void setVarVarChar(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarBool(ref1);
	(*((char*)r1.data)) = (*((char*)r2.data));
}
void setVarVarInt8(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarInt8(ref1);
	(*((int8_t*)r1.data)) = (*((int8_t*)r2.data));
}
void setVarVarUint8(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarUint8(ref1);
	(*((uint8_t*)r1.data)) = (*((uint8_t*)r2.data));
}
void setVarVarInt16(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarInt16(ref1);
	(*((int16_t*)r1.data)) = (*((int16_t*)r2.data));
}
void setVarVarUint16(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarUint16(ref1);
	(*((uint16_t*)r1.data)) = (*((uint16_t*)r2.data));
}
void setVarVarInt32(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarInt32(ref1);
	(*((int32_t*)r1.data)) = (*((int32_t*)r2.data));
}
void setVarVarUint32(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarUint32(ref1);
	(*((uint32_t*)r1.data)) = (*((uint32_t*)r2.data));
}
void setVarVarInt64(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarInt64(ref1);
	(*((int64_t*)r1.data)) = (*((int64_t*)r2.data));
}
void setVarVarUint64(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarUint64(ref1);
	(*((uint64_t*)r1.data)) = (*((uint64_t*)r2.data));
}
void setVarVarFloat(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarFloat(ref1);
	(*((float*)r1.data)) = (*((float*)r2.data));
}
void setVarVarDouble(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarDouble(ref1);
	(*((double*)r1.data)) = (*((double*)r2.data));
}
void setVarVarString(VarRef * & ref1, VarRef * & ref2)
{
  VarRef & r1 = *ref1;
  VarRef & r2 = *ref2;
	newVarDouble(ref1);
	(*((string*)r1.data)) = (*((string*)r2.data));
}
void setVarVarList(VarRef * & ref1, VarRef * & ref2)
{
  ref1 = ref2;
  ref1->count++;
}
void setVarVarMap(VarRef * & ref1, VarRef * & ref2)
{
  ref1 = ref2;
  ref1->count++;
}
void setVarVarGetSet(VarRef * & ref1, VarRef * & ref2)
{
  ref1 = ref2;
  ref1->count++;
}
void setVarVarFunction(VarRef * & ref1, VarRef * & ref2)
{
  ref1 = ref2;
  ref1->count++;
}

void (*setVarVar[])(VarRef * & ref1, VarRef * & ref2) = {
setVarVarUndefined,
setVarVarBool,
setVarVarChar,
setVarVarInt8,
setVarVarUint8,
setVarVarInt16,
setVarVarUint16,
setVarVarInt32,
setVarVarUint32,
setVarVarInt64,
setVarVarUint64,
setVarVarFloat,
setVarVarDouble,
setVarVarString,
setVarVarList,
setVarVarMap,
setVarVarGetSet,
setVarVarFunction
};
*/

#endif
