#ifndef RESETVAR_CPP
#define RESETVAR_CPP


void resetVarUndefined(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete(ref);
    ref = 0;
  }
}
void resetVarBool(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((bool*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarChar(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((char*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarInt8(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((int8_t*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarUint8(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((uint8_t*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarInt16(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((int16_t*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarUint16(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((uint16_t*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarInt32(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((int32_t*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarUint32(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((uint32_t*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarInt64(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((int64_t*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarUint64(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((uint64_t*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFloat(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((float*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarDouble(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((double*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarString(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((string*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarList(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((vector<var>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarMap(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((unordered_map<string, var>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarGetSet(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((VarGetSet*)r.data);
    delete(ref);
    ref = 0;
  }
}
//reset functions
void resetVarFuncV0(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void()>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV1(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV2(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV3(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV4(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV5(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV6(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV7(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var, var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV8(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var, var, var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV9(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var, var, var, var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncV10(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<void(var, var, var, var, var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
///////////////////funciont return VarRef
void resetVarFuncVar0(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var()>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar1(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar2(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar3(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar4(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar5(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar6(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar7(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var, var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar8(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var, var, var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar9(VarRef* & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var, var, var, var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void resetVarFuncVar10(VarRef * & ref)
{
  VarRef & r = *ref;
  r.count--;
  if(r.count <= 0)
  {
    delete((function<var(var, var, var, var, var, var, var, var, var, var)>*)r.data);
    delete(ref);
    ref = 0;
  }
}
void (*resetVarFunc[][11])(VarRef * & ref) = {
  {resetVarFuncV0,
    resetVarFuncV1,
    resetVarFuncV2,
    resetVarFuncV3,
    resetVarFuncV4,
    resetVarFuncV5,
    resetVarFuncV6,
    resetVarFuncV7,
    resetVarFuncV8,
    resetVarFuncV9,
    resetVarFuncV10},
  {resetVarFuncVar0,
    resetVarFuncVar1,
    resetVarFuncVar2,
    resetVarFuncVar3,
    resetVarFuncVar4,
    resetVarFuncVar5,
    resetVarFuncVar6,
    resetVarFuncVar7,
    resetVarFuncVar8,
    resetVarFuncVar9,
    resetVarFuncVar10}
};
//end reset functions
void resetVarFunction(VarRef * & ref)
{
  VarRef & r = *ref;
  resetVarFunc[(int)r.isVar][(int)r.numberArgs](ref);
}

void (*resetVar[])(VarRef * &ref) = {
  resetVarUndefined,
  resetVarBool,
  resetVarChar,
  resetVarInt8,
  resetVarUint8,
  resetVarInt16,
  resetVarUint16,
  resetVarInt32,
  resetVarUint32,
  resetVarInt64,
  resetVarUint64,
  resetVarFloat,
  resetVarDouble,
  resetVarString,
  resetVarList,
  resetVarMap,
  resetVarGetSet,
  resetVarFunction};


#endif
