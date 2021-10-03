#ifndef COUTVAR_CPP
#define COUTVAR_CPP
#include <stdint.h>
#include <iostream>
using namespace std;



void coutVarUndefined(VarRef & r,ostream & out);
void coutVarBool(VarRef & r,ostream & out);
void coutVarChar(VarRef & r,ostream & out);
void coutVarInt8(VarRef & r,ostream & out);
void coutVarUint8(VarRef & r,ostream & out);
void coutVarInt16(VarRef & r,ostream & out);
void coutVarUint16(VarRef & r,ostream & out);
void coutVarInt32(VarRef & r,ostream & out);
void coutVarUint32(VarRef & r,ostream & out);
void coutVarInt64(VarRef & r,ostream & out);
void coutVarUint64(VarRef & r,ostream & out);
void coutVarFloat(VarRef & r,ostream & out);
void coutVarDouble(VarRef & r,ostream & out);
void coutVarString(VarRef & r,ostream & out);
void coutVarList(VarRef & r,ostream & out);
void coutVarMap(VarRef & r,ostream & out);
void coutVarGetSet(VarRef & r,ostream & out);
void coutVarFunction(VarRef & r,ostream & out);

void(*coutVar[])(VarRef & r, ostream & out) = {
coutVarUndefined,
coutVarBool,
coutVarChar,
coutVarInt8,
coutVarUint8,
coutVarInt16,
coutVarUint16,
coutVarInt32,
coutVarUint32,
coutVarInt64,
coutVarUint64,
coutVarFloat,
coutVarDouble,
coutVarString,
coutVarList,
coutVarMap,
coutVarGetSet,
coutVarFunction
};

void coutVarUndefined(VarRef & r,ostream & out)
{
  out << "Undefined";
}
void coutVarBool(VarRef & r,ostream & out)
{
  out << (*((bool*)r.data));
}
void coutVarChar(VarRef & r,ostream & out)
{
  out << (*((char*)r.data));
}
void coutVarInt8(VarRef & r,ostream & out)
{
  out << (*((int8_t*)r.data));
}
void coutVarUint8(VarRef & r,ostream & out)
{
  out << (*((uint8_t*)r.data));
}
void coutVarInt16(VarRef & r,ostream & out)
{
  out << (*((int16_t*)r.data));
}
void coutVarUint16(VarRef & r,ostream & out)
{
  out << (*((uint16_t*)r.data));
}
void coutVarInt32(VarRef & r,ostream & out)
{
  out << (*((int32_t*)r.data));
}
void coutVarUint32(VarRef & r,ostream & out)
{
  out << (*((uint32_t*)r.data));
}
void coutVarInt64(VarRef & r,ostream & out)
{
  out << (*((int64_t*)r.data));
}
void coutVarUint64(VarRef & r,ostream & out)
{
  out << (*((uint64_t*)r.data));
}
void coutVarFloat(VarRef & r,ostream & out)
{
  out << (*((float*)r.data));
}
void coutVarDouble(VarRef & r,ostream & out)
{
  out << (*((double*)r.data));
}
void coutVarString(VarRef & r,ostream & out)
{
  out << (*((string*)r.data));
}
void coutVarList(VarRef & r,ostream & out)
{
  out << "List";
}
void coutVarMap(VarRef & r,ostream & out)
{
  out << "Map";
}
void coutVarGetSet(VarRef & r,ostream & out)
{
  VarGetSet & gs = (*((VarGetSet*)r.data));
  if(gs.isGet)
  {
    //out << gs.Get();
    var vv = gs.Get();
    VarRef & rr = *vv.ref;
    coutVar[(int)rr.t](rr, out);
  }
}
void coutVarFunction(VarRef & r,ostream & out)
{
  out << "Function";
}

/*
void(*coutVar[]) = {
coutVarUndefined,
coutVarBool,
coutVarChar,
coutVarInt8,
coutVarUint8,
coutVarInt16,
coutVarUint16,
coutVarInt32,
coutVarUint32,
coutVarInt64,
coutVarUint64,
coutVarFloat,
coutVarDouble,
coutVarString,
coutVarList,
coutVarMap,
coutVarGetSet,
coutVarFunction
};
*/

#endif
