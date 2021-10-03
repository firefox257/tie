#ifndef CASTVAR_CPP
#define CASTVAR_CPP

bool castVarUndefinedToBool(VarRef & r)
{
  unimplemented;
  return false;
}
bool castVarBoolToBool(VarRef & r)
{
  return *((bool*)r.data);
}
bool castVarCharToBool(VarRef & r)
{
  return *((char*)r.data);
}
bool castVarInt8ToBool(VarRef & r)
{
  return *((int8_t*)r.data);
}
bool castVarUint8ToBool(VarRef & r)
{
  return *((uint8_t*)r.data);
}
bool castVarInt16ToBool(VarRef & r)
{
  return *((int16_t*)r.data);
}
bool castVarUint16ToBool(VarRef & r)
{
  return *((uint16_t*)r.data);
}
bool castVarInt32ToBool(VarRef & r)
{
  return *((int32_t*)r.data);
}
bool castVarUint32ToBool(VarRef & r)
{
  return *((uint32_t*)r.data);
}
bool castVarInt64ToBool(VarRef & r)
{
  return *((int64_t*)r.data);
}
bool castVarUint64ToBool(VarRef & r)
{
  return *((uint64_t*)r.data);
}
bool castVarFloatToBool(VarRef & r)
{
  return *((float*)r.data);
}
bool castVarDoubleToBool(VarRef & r)
{
  return *((double*)r.data);
}
bool castVarStringToBool(VarRef & r)
{
  return (*((string*)r.data)) == "1" || (*((string*)r.data)) == "true";
}
bool castVarListToBool(VarRef & r)
{
  unimplemented;
  return false;
}
bool castVarMapToBool(VarRef & r)
{
  unimplemented;
  return false;
}
bool castVarGetSetToBool(VarRef & r)
{
  return (bool)((VarGetSet*)r.data)->Get();
}
bool castVarFunctionToBool(VarRef & r)
{
  unimplemented;
  return false;
}
bool (*castVarToBool[])(VarRef & r) = {
  castVarUndefinedToBool,
  castVarBoolToBool,
  castVarCharToBool,
  castVarInt8ToBool,
  castVarUint8ToBool,
  castVarInt16ToBool,
  castVarUint16ToBool,
  castVarInt32ToBool,
  castVarUint32ToBool,
  castVarInt64ToBool,
  castVarUint64ToBool,
  castVarFloatToBool,
  castVarDoubleToBool,
  castVarStringToBool,
  castVarListToBool,
  castVarMapToBool,
  castVarGetSetToBool,
  castVarFunctionToBool};
////////////////////////////////////////////////
char castVarUndefinedToChar(VarRef & r)
{
  unimplemented;
  return 0;
}
char castVarBoolToChar(VarRef & r)
{
  return *((bool*)r.data);
}
char castVarCharToChar(VarRef & r)
{
  return *((char*)r.data);
}
char castVarInt8ToChar(VarRef & r)
{
  return *((int8_t*)r.data);
}
char castVarUint8ToChar(VarRef & r)
{
  return *((uint8_t*)r.data);
}
char castVarInt16ToChar(VarRef & r)
{
  return *((int16_t*)r.data);
}
char castVarUint16ToChar(VarRef & r)
{
  return *((uint16_t*)r.data);
}
char castVarInt32ToChar(VarRef & r)
{
  return *((int32_t*)r.data);
}
char castVarUint32ToChar(VarRef & r)
{
  return *((uint32_t*)r.data);
}
char castVarInt64ToChar(VarRef & r)
{
  return *((int64_t*)r.data);
}
char castVarUint64ToChar(VarRef & r)
{
  return *((uint64_t*)r.data);
}
char castVarFloatToChar(VarRef & r)
{
  return *((float*)r.data);
}
char castVarDoubleToChar(VarRef & r)
{
  return *((double*)r.data);
}
char castVarStringToChar(VarRef & r)
{
  return stoi(*((string*)r.data));
}
char castVarListToChar(VarRef & r)
{
  unimplemented;
  return 0;
}
char castVarMapToChar(VarRef & r)
{
  unimplemented;
  return 0;
}
char castVarGetSetToChar(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
char castVarFunctionToChar(VarRef & r)
{
  unimplemented;
  return 0;
}
char (*castVarToChar[])(VarRef & r) = {
  castVarUndefinedToChar,
  castVarBoolToChar,
  castVarCharToChar,
  castVarInt8ToChar,
  castVarUint8ToChar,
  castVarInt16ToChar,
  castVarUint16ToChar,
  castVarInt32ToChar,
  castVarUint32ToChar,
  castVarInt64ToChar,
  castVarUint64ToChar,
  castVarFloatToChar,
  castVarDoubleToChar,
  castVarStringToChar,
  castVarListToChar,
  castVarMapToChar,
  castVarGetSetToChar,
  castVarFunctionToChar};
/////////////////////////////
int8_t castVarUndefinedToInt8(VarRef & r)
{
  unimplemented;
  return 0;
}
int8_t castVarBoolToInt8(VarRef & r)
{
  return *((bool*)r.data);
}
int8_t castVarCharToInt8(VarRef & r)
{
  return *((char*)r.data);
}
int8_t castVarInt8ToInt8(VarRef & r)
{
  return *((int8_t*)r.data);
}
int8_t castVarUint8ToInt8(VarRef & r)
{
  return *((uint8_t*)r.data);
}
int8_t castVarInt16ToInt8(VarRef & r)
{
  return *((int16_t*)r.data);
}
int8_t castVarUint16ToInt8(VarRef & r)
{
  return *((uint16_t*)r.data);
}
int8_t castVarInt32ToInt8(VarRef & r)
{
  return *((int32_t*)r.data);
}
int8_t castVarUint32ToInt8(VarRef & r)
{
  return *((uint32_t*)r.data);
}
int8_t castVarInt64ToInt8(VarRef & r)
{
  return *((int64_t*)r.data);
}
int8_t castVarUint64ToInt8(VarRef & r)
{
  return *((uint64_t*)r.data);
}
int8_t castVarFloatToInt8(VarRef & r)
{
  return *((float*)r.data);
}
int8_t castVarDoubleToInt8(VarRef & r)
{
  return *((double*)r.data);
}
int8_t castVarStringToInt8(VarRef & r)
{
  return stoi(*((string*)r.data));
}
int8_t castVarListToInt8(VarRef & r)
{
  unimplemented;
  return 0;
}
int8_t castVarMapToInt8(VarRef & r)
{
  unimplemented;
  return 0;
}
int8_t castVarGetSetToInt8(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
int8_t castVarFunctionToInt8(VarRef & r)
{
  unimplemented;
  return 0;
}
int8_t (*castVarToInt8[])(VarRef & r) = {
  castVarUndefinedToInt8,
  castVarBoolToInt8,
  castVarCharToInt8,
  castVarInt8ToInt8,
  castVarUint8ToInt8,
  castVarInt16ToInt8,
  castVarUint16ToInt8,
  castVarInt32ToInt8,
  castVarUint32ToInt8,
  castVarInt64ToInt8,
  castVarUint64ToInt8,
  castVarFloatToInt8,
  castVarDoubleToInt8,
  castVarStringToInt8,
  castVarListToInt8,
  castVarMapToInt8,
  castVarGetSetToInt8,
  castVarFunctionToInt8};
/////////////////////////////
uint8_t castVarUndefinedToUint8(VarRef & r)
{
  unimplemented;
  return 0;
}
uint8_t castVarBoolToUint8(VarRef & r)
{
  return *((bool*)r.data);
}
uint8_t castVarCharToUint8(VarRef & r)
{
  return *((char*)r.data);
}
uint8_t castVarInt8ToUint8(VarRef & r)
{
  return *((int8_t*)r.data);
}
uint8_t castVarUint8ToUint8(VarRef & r)
{
  return *((uint8_t*)r.data);
}
uint8_t castVarInt16ToUint8(VarRef & r)
{
  return *((int16_t*)r.data);
}
uint8_t castVarUint16ToUint8(VarRef & r)
{
  return *((uint16_t*)r.data);
}
uint8_t castVarInt32ToUint8(VarRef & r)
{
  return *((int32_t*)r.data);
}
uint8_t castVarUint32ToUint8(VarRef & r)
{
  return *((uint32_t*)r.data);
}
uint8_t castVarInt64ToUint8(VarRef & r)
{
  return *((int64_t*)r.data);
}
uint8_t castVarUint64ToUint8(VarRef & r)
{
  return *((uint64_t*)r.data);
}
uint8_t castVarFloatToUint8(VarRef & r)
{
  return *((float*)r.data);
}
uint8_t castVarDoubleToUint8(VarRef & r)
{
  return *((double*)r.data);
}
uint8_t castVarStringToUint8(VarRef & r)
{
  return stoi(*((string*)r.data));
}
uint8_t castVarListToUint8(VarRef & r)
{
  unimplemented;
  return 0;
}
uint8_t castVarMapToUint8(VarRef & r)
{
  unimplemented;
  return 0;
}
uint8_t castVarGetSetToUint8(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
uint8_t castVarFunctionToUint8(VarRef & r)
{
  unimplemented;
  return 0;
}
uint8_t (*castVarToUint8[])(VarRef & r) = {
  castVarUndefinedToUint8,
  castVarBoolToUint8,
  castVarCharToUint8,
  castVarInt8ToUint8,
  castVarUint8ToUint8,
  castVarInt16ToUint8,
  castVarUint16ToUint8,
  castVarInt32ToUint8,
  castVarUint32ToUint8,
  castVarInt64ToUint8,
  castVarUint64ToUint8,
  castVarFloatToUint8,
  castVarDoubleToUint8,
  castVarStringToUint8,
  castVarListToUint8,
  castVarMapToUint8,
  castVarGetSetToUint8,
  castVarFunctionToUint8};
/////////////////////////////
/////////////////////////////
int16_t castVarUndefinedToInt16(VarRef & r)
{
  unimplemented;
  return false;
}
int16_t castVarBoolToInt16(VarRef & r)
{
  return *((bool*)r.data);
}
int16_t castVarCharToInt16(VarRef & r)
{
  return *((char*)r.data);
}
int16_t castVarInt8ToInt16(VarRef & r)
{
  return *((int8_t*)r.data);
}
int16_t castVarUint8ToInt16(VarRef & r)
{
  return *((uint8_t*)r.data);
}
int16_t castVarInt16ToInt16(VarRef & r)
{
  return *((int16_t*)r.data);
}
int16_t castVarUint16ToInt16(VarRef & r)
{
  return *((uint16_t*)r.data);
}
int16_t castVarInt32ToInt16(VarRef & r)
{
  return *((int32_t*)r.data);
}
int16_t castVarUint32ToInt16(VarRef & r)
{
  return *((uint32_t*)r.data);
}
int16_t castVarInt64ToInt16(VarRef & r)
{
  return *((int64_t*)r.data);
}
int16_t castVarUint64ToInt16(VarRef & r)
{
  return *((uint64_t*)r.data);
}
int16_t castVarFloatToInt16(VarRef & r)
{
  return *((float*)r.data);
}
int16_t castVarDoubleToInt16(VarRef & r)
{
  return *((double*)r.data);
}
int16_t castVarStringToInt16(VarRef & r)
{
  return stoi(*((string*)r.data));
}
int16_t castVarListToInt16(VarRef & r)
{
  unimplemented;
  return 0;
}
int16_t castVarMapToInt16(VarRef & r)
{
  unimplemented;
  return 0;
}
int16_t castVarGetSetToInt16(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
int16_t castVarFunctionToInt16(VarRef & r)
{
  unimplemented;
  return 0;
}
int16_t (*castVarToInt16[])(VarRef & r) = {
  castVarUndefinedToInt16,
  castVarBoolToInt16,
  castVarCharToInt16,
  castVarInt8ToInt16,
  castVarUint8ToInt16,
  castVarInt16ToInt16,
  castVarUint16ToInt16,
  castVarInt32ToInt16,
  castVarUint32ToInt16,
  castVarInt64ToInt16,
  castVarUint64ToInt16,
  castVarFloatToInt16,
  castVarDoubleToInt16,
  castVarStringToInt16,
  castVarListToInt16,
  castVarMapToInt16,
  castVarGetSetToInt16,
  castVarFunctionToInt16};
/////////////////////////////
uint16_t castVarUndefinedToUint16(VarRef & r)
{
  unimplemented;
  return 0;
}
uint16_t castVarBoolToUint16(VarRef & r)
{
  return *((bool*)r.data);
}
uint16_t castVarCharToUint16(VarRef & r)
{
  return *((char*)r.data);
}
uint16_t castVarInt8ToUint16(VarRef & r)
{
  return *((int8_t*)r.data);
}
uint16_t castVarUint8ToUint16(VarRef & r)
{
  return *((uint8_t*)r.data);
}
uint16_t castVarInt16ToUint16(VarRef & r)
{
  return *((int16_t*)r.data);
}
uint16_t castVarUint16ToUint16(VarRef & r)
{
  return *((uint16_t*)r.data);
}
uint16_t castVarInt32ToUint16(VarRef & r)
{
  return *((int32_t*)r.data);
}
uint16_t castVarUint32ToUint16(VarRef & r)
{
  return *((uint32_t*)r.data);
}
uint16_t castVarInt64ToUint16(VarRef & r)
{
  return *((int64_t*)r.data);
}
uint16_t castVarUint64ToUint16(VarRef & r)
{
  return *((uint64_t*)r.data);
}
uint16_t castVarFloatToUint16(VarRef & r)
{
  return *((float*)r.data);
}
uint16_t castVarDoubleToUint16(VarRef & r)
{
  return *((double*)r.data);
}
uint16_t castVarStringToUint16(VarRef & r)
{
  return stoi(*((string*)r.data));
}
uint16_t castVarListToUint16(VarRef & r)
{
  unimplemented;
  return 0;
}
uint16_t castVarMapToUint16(VarRef & r)
{
  unimplemented;
  return 0;
}
uint16_t castVarGetSetToUint16(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
uint16_t castVarFunctionToUint16(VarRef & r)
{
  unimplemented;
  return 0;
}
uint16_t (*castVarToUint16[])(VarRef & r) = {
  castVarUndefinedToUint16,
  castVarBoolToUint16,
  castVarCharToUint16,
  castVarInt8ToUint16,
  castVarUint8ToUint16,
  castVarInt16ToUint16,
  castVarUint16ToUint16,
  castVarInt32ToUint16,
  castVarUint32ToUint16,
  castVarInt64ToUint16,
  castVarUint64ToUint16,
  castVarFloatToUint16,
  castVarDoubleToUint16,
  castVarStringToUint16,
  castVarListToUint16,
  castVarMapToUint16,
  castVarGetSetToUint16,
  castVarFunctionToUint16};
/////////////////////////////
int32_t castVarUndefinedToInt32(VarRef & r)
{
  unimplemented;
  return 0;
}
int32_t castVarBoolToInt32(VarRef & r)
{
  return *((bool*)r.data);
}
int32_t castVarCharToInt32(VarRef & r)
{
  return *((char*)r.data);
}
int32_t castVarInt8ToInt32(VarRef & r)
{
  return *((int8_t*)r.data);
}
int32_t castVarUint8ToInt32(VarRef & r)
{
  return *((uint8_t*)r.data);
}
int32_t castVarInt16ToInt32(VarRef & r)
{
  return *((int16_t*)r.data);
}
int32_t castVarUint16ToInt32(VarRef & r)
{
  return *((uint16_t*)r.data);
}
int32_t castVarInt32ToInt32(VarRef & r)
{
  return *((int32_t*)r.data);
}
int32_t castVarUint32ToInt32(VarRef & r)
{
  return *((uint32_t*)r.data);
}
int32_t castVarInt64ToInt32(VarRef & r)
{
  return *((int64_t*)r.data);
}
int32_t castVarUint64ToInt32(VarRef & r)
{
  return *((uint64_t*)r.data);
}
int32_t castVarFloatToInt32(VarRef & r)
{
  return *((float*)r.data);
}
int32_t castVarDoubleToInt32(VarRef & r)
{
  return *((double*)r.data);
}
int32_t castVarStringToInt32(VarRef & r)
{
  return stoi(*((string*)r.data));
}
int32_t castVarListToInt32(VarRef & r)
{
  unimplemented;
  return 0;
}
int32_t castVarMapToInt32(VarRef & r)
{
  unimplemented;
  return 0;
}
int32_t castVarGetSetToInt32(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
int32_t castVarFunctionToInt32(VarRef & r)
{
  unimplemented;
  return 0;
}
int32_t (*castVarToInt32[])(VarRef & r) = {
  castVarUndefinedToInt32,
  castVarBoolToInt32,
  castVarCharToInt32,
  castVarInt8ToInt32,
  castVarUint8ToInt32,
  castVarInt16ToInt32,
  castVarUint16ToInt32,
  castVarInt32ToInt32,
  castVarUint32ToInt32,
  castVarInt64ToInt32,
  castVarUint64ToInt32,
  castVarFloatToInt32,
  castVarDoubleToInt32,
  castVarStringToInt32,
  castVarListToInt32,
  castVarMapToInt32,
  castVarGetSetToInt32,
  castVarFunctionToInt32};
/////////////////////////////
uint32_t castVarUndefinedToUint32(VarRef & r)
{
  unimplemented;
  return 0;
}
uint32_t castVarBoolToUint32(VarRef & r)
{
  return *((bool*)r.data);
}
uint32_t castVarCharToUint32(VarRef & r)
{
  return *((char*)r.data);
}
uint32_t castVarInt8ToUint32(VarRef & r)
{
  return *((int8_t*)r.data);
}
uint32_t castVarUint8ToUint32(VarRef & r)
{
  return *((uint8_t*)r.data);
}
uint32_t castVarInt16ToUint32(VarRef & r)
{
  return *((int16_t*)r.data);
}
uint32_t castVarUint16ToUint32(VarRef & r)
{
  return *((uint16_t*)r.data);
}
uint32_t castVarInt32ToUint32(VarRef & r)
{
  return *((int32_t*)r.data);
}
uint32_t castVarUint32ToUint32(VarRef & r)
{
  return *((uint32_t*)r.data);
}
uint32_t castVarInt64ToUint32(VarRef & r)
{
  return *((int64_t*)r.data);
}
uint32_t castVarUint64ToUint32(VarRef & r)
{
  return *((uint64_t*)r.data);
}
uint32_t castVarFloatToUint32(VarRef & r)
{
  return *((float*)r.data);
}
uint32_t castVarDoubleToUint32(VarRef & r)
{
  return *((double*)r.data);
}
uint32_t castVarStringToUint32(VarRef & r)
{
  return stoi(*((string*)r.data));
}
uint32_t castVarListToUint32(VarRef & r)
{
  unimplemented;
  return 0;
}
uint32_t castVarMapToUint32(VarRef & r)
{
  unimplemented;
  return 0;
}
uint32_t castVarGetSetToUint32(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
uint32_t castVarFunctionToUint32(VarRef & r)
{
  unimplemented;
  return 0;
}
uint32_t (*castVarToUint32[])(VarRef & r) = {
  castVarUndefinedToUint32,
  castVarBoolToUint32,
  castVarCharToUint32,
  castVarInt8ToUint32,
  castVarUint8ToUint32,
  castVarInt16ToUint32,
  castVarUint16ToUint32,
  castVarInt32ToUint32,
  castVarUint32ToUint32,
  castVarInt64ToUint32,
  castVarUint64ToUint32,
  castVarFloatToUint32,
  castVarDoubleToUint32,
  castVarStringToUint32,
  castVarListToUint32,
  castVarMapToUint32,
  castVarGetSetToUint32,
  castVarFunctionToUint32};
/////////////////////////////
/////////////////////////////
int64_t castVarUndefinedToInt64(VarRef & r)
{
  unimplemented;
  return 0;
}
int64_t castVarBoolToInt64(VarRef & r)
{
  return *((bool*)r.data);
}
int64_t castVarCharToInt64(VarRef & r)
{
  return *((char*)r.data);
}
int64_t castVarInt8ToInt64(VarRef & r)
{
  return *((int8_t*)r.data);
}
int64_t castVarUint8ToInt64(VarRef & r)
{
  return *((uint8_t*)r.data);
}
int64_t castVarInt16ToInt64(VarRef & r)
{
  return *((int16_t*)r.data);
}
int64_t castVarUint16ToInt64(VarRef & r)
{
  return *((uint16_t*)r.data);
}
int64_t castVarInt32ToInt64(VarRef & r)
{
  return *((int32_t*)r.data);
}
int64_t castVarUint32ToInt64(VarRef & r)
{
  return *((uint32_t*)r.data);
}
int64_t castVarInt64ToInt64(VarRef & r)
{
  return *((int64_t*)r.data);
}
int64_t castVarUint64ToInt64(VarRef & r)
{
  return *((uint64_t*)r.data);
}
int64_t castVarFloatToInt64(VarRef & r)
{
  return *((float*)r.data);
}
int64_t castVarDoubleToInt64(VarRef & r)
{
  return *((double*)r.data);
}
int64_t castVarStringToInt64(VarRef & r)
{
  return stol(*((string*)r.data));
}
int64_t castVarListToInt64(VarRef & r)
{
  unimplemented;
  return 0;
}
int64_t castVarMapToInt64(VarRef & r)
{
  unimplemented;
  return 0;
}
int64_t castVarGetSetToInt64(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
int64_t castVarFunctionToInt64(VarRef & r)
{
  unimplemented;
  return 0;
}
int64_t (*castVarToInt64[])(VarRef & r) = {
  castVarUndefinedToInt64,
  castVarBoolToInt64,
  castVarCharToInt64,
  castVarInt8ToInt64,
  castVarUint8ToInt64,
  castVarInt16ToInt64,
  castVarUint16ToInt64,
  castVarInt32ToInt64,
  castVarUint32ToInt64,
  castVarInt64ToInt64,
  castVarUint64ToInt64,
  castVarFloatToInt64,
  castVarDoubleToInt64,
  castVarStringToInt64,
  castVarListToInt64,
  castVarMapToInt64,
  castVarGetSetToInt64,
  castVarFunctionToInt64};
/////////////////////////////
uint64_t castVarUndefinedToUint64(VarRef & r)
{
  unimplemented;
  return 0;
}
uint64_t castVarBoolToUint64(VarRef & r)
{
  return *((bool*)r.data);
}
uint64_t castVarCharToUint64(VarRef & r)
{
  return *((char*)r.data);
}
uint64_t castVarInt8ToUint64(VarRef & r)
{
  return *((int8_t*)r.data);
}
uint64_t castVarUint8ToUint64(VarRef & r)
{
  return *((uint8_t*)r.data);
}
uint64_t castVarInt16ToUint64(VarRef & r)
{
  return *((int16_t*)r.data);
}
uint64_t castVarUint16ToUint64(VarRef & r)
{
  return *((uint16_t*)r.data);
}
uint64_t castVarInt32ToUint64(VarRef & r)
{
  return *((int32_t*)r.data);
}
uint64_t castVarUint32ToUint64(VarRef & r)
{
  return *((uint32_t*)r.data);
}
uint64_t castVarInt64ToUint64(VarRef & r)
{
  return *((int64_t*)r.data);
}
uint64_t castVarUint64ToUint64(VarRef & r)
{
  return *((uint64_t*)r.data);
}
uint64_t castVarFloatToUint64(VarRef & r)
{
  return *((float*)r.data);
}
uint64_t castVarDoubleToUint64(VarRef & r)
{
  return *((double*)r.data);
}
uint64_t castVarStringToUint64(VarRef & r)
{
  return stoul(*((string*)r.data));
}
uint64_t castVarListToUint64(VarRef & r)
{
  unimplemented;
  return 0;
}
uint64_t castVarMapToUint64(VarRef & r)
{
  unimplemented;
  return 0;
}
uint64_t castVarGetSetToUint64(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
uint64_t castVarFunctionToUint64(VarRef & r)
{
  unimplemented;
  return 0;
}
uint64_t (*castVarToUint64[])(VarRef & r) = {
  castVarUndefinedToUint64,
  castVarBoolToUint64,
  castVarCharToUint64,
  castVarInt8ToUint64,
  castVarUint8ToUint64,
  castVarInt16ToUint64,
  castVarUint16ToUint64,
  castVarInt32ToUint64,
  castVarUint32ToUint64,
  castVarInt64ToUint64,
  castVarUint64ToUint64,
  castVarFloatToUint64,
  castVarDoubleToUint64,
  castVarStringToUint64,
  castVarListToUint64,
  castVarMapToUint64,
  castVarGetSetToUint64,
  castVarFunctionToUint64};
/////////////////////////////
/////////////////////////////
float castVarUndefinedToFloat(VarRef & r)
{
  unimplemented;
  return 0;
}
float castVarBoolToFloat(VarRef & r)
{
  return *((bool*)r.data);
}
float castVarCharToFloat(VarRef & r)
{
  return *((char*)r.data);
}
float castVarInt8ToFloat(VarRef & r)
{
  return *((int8_t*)r.data);
}
float castVarUint8ToFloat(VarRef & r)
{
  return *((uint8_t*)r.data);
}
float castVarInt16ToFloat(VarRef & r)
{
  return *((int16_t*)r.data);
}
float castVarUint16ToFloat(VarRef & r)
{
  return *((uint16_t*)r.data);
}
float castVarInt32ToFloat(VarRef & r)
{
  return *((int32_t*)r.data);
}
float castVarUint32ToFloat(VarRef & r)
{
  return *((uint32_t*)r.data);
}
float castVarInt64ToFloat(VarRef & r)
{
  return *((int64_t*)r.data);
}
float castVarUint64ToFloat(VarRef & r)
{
  return *((uint64_t*)r.data);
}
float castVarFloatToFloat(VarRef & r)
{
  return *((float*)r.data);
}
float castVarDoubleToFloat(VarRef & r)
{
  return *((double*)r.data);
}
float castVarStringToFloat(VarRef & r)
{
  return stod(*((string*)r.data));
}
float castVarListToFloat(VarRef & r)
{
  unimplemented;
  return 0;
}
float castVarMapToFloat(VarRef & r)
{
  unimplemented;
  return 0;
}
float castVarGetSetToFloat(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
float castVarFunctionToFloat(VarRef & r)
{
  unimplemented;
  return 0;
}
float (*castVarToFloat[])(VarRef & r) = {
  castVarUndefinedToFloat,
  castVarBoolToFloat,
  castVarCharToFloat,
  castVarInt8ToFloat,
  castVarUint8ToFloat,
  castVarInt16ToFloat,
  castVarUint16ToFloat,
  castVarInt32ToFloat,
  castVarUint32ToFloat,
  castVarInt64ToFloat,
  castVarUint64ToFloat,
  castVarFloatToFloat,
  castVarDoubleToFloat,
  castVarStringToFloat,
  castVarListToFloat,
  castVarMapToFloat,
  castVarGetSetToFloat,
  castVarFunctionToFloat};
/////////////////////////////
/////////////////////////////
double castVarUndefinedToDouble(VarRef & r)
{
  unimplemented;
  return 0;
}
double castVarBoolToDouble(VarRef & r)
{
  return *((bool*)r.data);
}
double castVarCharToDouble(VarRef & r)
{
  return *((char*)r.data);
}
double castVarInt8ToDouble(VarRef & r)
{
  return *((int8_t*)r.data);
}
double castVarUint8ToDouble(VarRef & r)
{
  return *((uint8_t*)r.data);
}
double castVarInt16ToDouble(VarRef & r)
{
  return *((int16_t*)r.data);
}
double castVarUint16ToDouble(VarRef & r)
{
  return *((uint16_t*)r.data);
}
double castVarInt32ToDouble(VarRef & r)
{
  return *((int32_t*)r.data);
}
double castVarUint32ToDouble(VarRef & r)
{
  return *((uint32_t*)r.data);
}
double castVarInt64ToDouble(VarRef & r)
{
  return *((int64_t*)r.data);
}
double castVarUint64ToDouble(VarRef & r)
{
  return *((uint64_t*)r.data);
}
double castVarFloatToDouble(VarRef & r)
{
  return *((float*)r.data);
}
double castVarDoubleToDouble(VarRef & r)
{
  return *((double*)r.data);
}
double castVarStringToDouble(VarRef & r)
{
  return stod(*((string*)r.data));
}
double castVarListToDouble(VarRef & r)
{
  unimplemented;
  return 0;
}
double castVarMapToDouble(VarRef & r)
{
  unimplemented;
  return 0;
}
double castVarGetSetToDouble(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
double castVarFunctionToDouble(VarRef & r)
{
  unimplemented;
  return 0;
}
double (*castVarToDouble[])(VarRef & r) = {
  castVarUndefinedToDouble,
  castVarBoolToDouble,
  castVarCharToDouble,
  castVarInt8ToDouble,
  castVarUint8ToDouble,
  castVarInt16ToDouble,
  castVarUint16ToDouble,
  castVarInt32ToDouble,
  castVarUint32ToDouble,
  castVarInt64ToDouble,
  castVarUint64ToDouble,
  castVarFloatToDouble,
  castVarDoubleToDouble,
  castVarStringToDouble,
  castVarListToDouble,
  castVarMapToDouble,
  castVarGetSetToDouble,
  castVarFunctionToDouble};
/////////////////////////////
///////////////////////////////////////
string castVarUndefinedToString(VarRef & r)
{
  unimplemented;
  return "";
}
string castVarBoolToString(VarRef & r)
{
  return to_string(*((bool*)r.data));
}
string castVarCharToString(VarRef & r)
{
  return to_string(*((char*)r.data));
}
string castVarInt8ToString(VarRef & r)
{
  return to_string(*((int8_t*)r.data));
}
string castVarUint8ToString(VarRef & r)
{
  return to_string(*((uint8_t*)r.data));
}
string castVarInt16ToString(VarRef & r)
{
  return to_string(*((int16_t*)r.data));
}
string castVarUint16ToString(VarRef & r)
{
  return to_string(*((uint16_t*)r.data));
}
string castVarInt32ToString(VarRef & r)
{
  return to_string(*((int32_t*)r.data));
}
string castVarUint32ToString(VarRef & r)
{
  return to_string(*((uint32_t*)r.data));
}
string castVarInt64ToString(VarRef & r)
{
  return to_string(*((int64_t*)r.data));
}
string castVarUint64ToString(VarRef & r)
{
  return to_string(*((uint64_t*)r.data));
}
string castVarFloatToString(VarRef & r)
{
  return to_string(*((float*)r.data));
}
string castVarDoubleToString(VarRef & r)
{
  return to_string(*((double*)r.data));
}
string castVarStringToString(VarRef & r)
{
  return (*((string*)r.data));
}
string castVarListToString(VarRef & r)
{
  unimplemented;
  return "";
}
string castVarMapToString(VarRef & r)
{
  unimplemented;
  return "";
}
string castVarGetSetToString(VarRef & r)
{
  return ((VarGetSet*)r.data)->Get();
}
string castVarFunctionToString(VarRef & r)
{
  unimplemented;
  return "";
}
string (*castVarToString[])(VarRef & r) = {
  castVarUndefinedToString,
  castVarBoolToString,
  castVarCharToString,
  castVarInt8ToString,
  castVarUint8ToString,
  castVarInt16ToString,
  castVarUint16ToString,
  castVarInt32ToString,
  castVarUint32ToString,
  castVarInt64ToString,
  castVarUint64ToString,
  castVarFloatToString,
  castVarDoubleToString,
  castVarStringToString,
  castVarListToString,
  castVarMapToString,
  castVarGetSetToString,
  castVarFunctionToString};


#endif
