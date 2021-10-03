#ifndef CASTVARPTR_CPP
#define CASTVARPTR_CPP

bool * castVarToBoolPtr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
bool * castVarToBoolPtr_good(VarRef & r)
{
  return ((bool*)r.data);
}

bool * (*castVarPtrToBoolPtr[])(VarRef & r) = {
  castVarToBoolPtr_bad, //undefined
  castVarToBoolPtr_good, //bool
  castVarToBoolPtr_bad, //char
  castVarToBoolPtr_bad, //int8
  castVarToBoolPtr_bad, //uint8
  castVarToBoolPtr_bad, //int16
  castVarToBoolPtr_bad, //uint16
  castVarToBoolPtr_bad, //int32
  castVarToBoolPtr_bad, //uint32
  castVarToBoolPtr_bad, //int64
  castVarToBoolPtr_bad, //uint64
  castVarToBoolPtr_bad,  //float
  castVarToBoolPtr_bad, //double
  castVarToBoolPtr_bad, //string
  castVarToBoolPtr_bad, //list
  castVarToBoolPtr_bad, //map
  castVarToBoolPtr_bad, //getset
  castVarToBoolPtr_bad}; //function
//////
char * castVarToCharPtr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
char * castVarToCharPtr_good(VarRef & r)
{
  return ((char*)r.data);
}

char * (*castVarPtrToCharPtr[])(VarRef & r) = {
  castVarToCharPtr_bad, //undefined
  castVarToCharPtr_bad, //bool
  castVarToCharPtr_good, //char
  castVarToCharPtr_bad, //int8
  castVarToCharPtr_bad, //uint8
  castVarToCharPtr_bad, //int16
  castVarToCharPtr_bad, //uint16
  castVarToCharPtr_bad, //int32
  castVarToCharPtr_bad, //uint32
  castVarToCharPtr_bad, //int64
  castVarToCharPtr_bad, //uint64
  castVarToCharPtr_bad,  //float
  castVarToCharPtr_bad, //double
  castVarToCharPtr_bad, //string
  castVarToCharPtr_bad, //list
  castVarToCharPtr_bad, //map
  castVarToCharPtr_bad, //getset
  castVarToCharPtr_bad}; //function
//////
int8_t * castVarToInt8Ptr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
int8_t * castVarToInt8Ptr_good(VarRef & r)
{
  return ((int8_t*)r.data);
}

int8_t * (*castVarPtrToInt8Ptr[])(VarRef & r) = {
  castVarToInt8Ptr_bad, //undefined
  castVarToInt8Ptr_bad, //bool
  castVarToInt8Ptr_bad, //char
  castVarToInt8Ptr_good, //int8
  castVarToInt8Ptr_bad, //uint8
  castVarToInt8Ptr_bad, //int16
  castVarToInt8Ptr_bad, //uint16
  castVarToInt8Ptr_bad, //int32
  castVarToInt8Ptr_bad, //uint32
  castVarToInt8Ptr_bad, //int64
  castVarToInt8Ptr_bad, //uint64
  castVarToInt8Ptr_bad,  //float
  castVarToInt8Ptr_bad, //double
  castVarToInt8Ptr_bad, //string
  castVarToInt8Ptr_bad, //list
  castVarToInt8Ptr_bad, //map
  castVarToInt8Ptr_bad, //getset
  castVarToInt8Ptr_bad}; //function
//////
uint8_t * castVarToUint8Ptr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
uint8_t * castVarToUint8Ptr_good(VarRef & r)
{
  return ((uint8_t*)r.data);
}

uint8_t * (*castVarPtrToUint8Ptr[])(VarRef & r) = {
  castVarToUint8Ptr_bad, //undefined
  castVarToUint8Ptr_bad, //bool
  castVarToUint8Ptr_bad, //char
  castVarToUint8Ptr_bad, //int8
  castVarToUint8Ptr_good, //uint8
  castVarToUint8Ptr_bad, //int16
  castVarToUint8Ptr_bad, //uint16
  castVarToUint8Ptr_bad, //int32
  castVarToUint8Ptr_bad, //uint32
  castVarToUint8Ptr_bad, //int64
  castVarToUint8Ptr_bad, //uint64
  castVarToUint8Ptr_bad,  //float
  castVarToUint8Ptr_bad, //double
  castVarToUint8Ptr_bad, //string
  castVarToUint8Ptr_bad, //list
  castVarToUint8Ptr_bad, //map
  castVarToUint8Ptr_bad, //getset
  castVarToUint8Ptr_bad}; //function
//////
//////
int16_t * castVarToInt16Ptr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
int16_t * castVarToInt16Ptr_good(VarRef & r)
{
  return ((int16_t*)r.data);
}

int16_t * (*castVarPtrToInt16Ptr[])(VarRef & r) = {
  castVarToInt16Ptr_bad, //undefined
  castVarToInt16Ptr_bad, //bool
  castVarToInt16Ptr_bad, //char
  castVarToInt16Ptr_bad, //int8
  castVarToInt16Ptr_bad, //uint8
  castVarToInt16Ptr_good, //int16
  castVarToInt16Ptr_bad, //uint16
  castVarToInt16Ptr_bad, //int32
  castVarToInt16Ptr_bad, //uint32
  castVarToInt16Ptr_bad, //int64
  castVarToInt16Ptr_bad, //uint64
  castVarToInt16Ptr_bad,  //float
  castVarToInt16Ptr_bad, //double
  castVarToInt16Ptr_bad, //string
  castVarToInt16Ptr_bad, //list
  castVarToInt16Ptr_bad, //map
  castVarToInt16Ptr_bad, //getset
  castVarToInt16Ptr_bad}; //function
//////
uint16_t * castVarToUint16Ptr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
uint16_t * castVarToUint16Ptr_good(VarRef & r)
{
  return ((uint16_t*)r.data);
}

uint16_t * (*castVarPtrToUint16Ptr[])(VarRef & r) = {
  castVarToUint16Ptr_bad, //undefined
  castVarToUint16Ptr_bad, //bool
  castVarToUint16Ptr_bad, //char
  castVarToUint16Ptr_bad, //int8
  castVarToUint16Ptr_bad, //uint8
  castVarToUint16Ptr_bad, //int16
  castVarToUint16Ptr_good, //uint16
  castVarToUint16Ptr_bad, //int32
  castVarToUint16Ptr_bad, //uint32
  castVarToUint16Ptr_bad, //int64
  castVarToUint16Ptr_bad, //uint64
  castVarToUint16Ptr_bad,  //float
  castVarToUint16Ptr_bad, //double
  castVarToUint16Ptr_bad, //string
  castVarToUint16Ptr_bad, //list
  castVarToUint16Ptr_bad, //map
  castVarToUint16Ptr_bad, //getset
  castVarToUint16Ptr_bad}; //function
//////
//////
int32_t * castVarToInt32Ptr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
int32_t * castVarToInt32Ptr_good(VarRef & r)
{
  return ((int32_t*)r.data);
}

int32_t * (*castVarPtrToInt32Ptr[])(VarRef & r) = {
  castVarToInt32Ptr_bad, //undefined
  castVarToInt32Ptr_bad, //bool
  castVarToInt32Ptr_bad, //char
  castVarToInt32Ptr_bad, //int8
  castVarToInt32Ptr_bad, //uint8
  castVarToInt32Ptr_bad, //int16
  castVarToInt32Ptr_bad, //uint16
  castVarToInt32Ptr_good, //int32
  castVarToInt32Ptr_bad, //uint32
  castVarToInt32Ptr_bad, //int64
  castVarToInt32Ptr_bad, //uint64
  castVarToInt32Ptr_bad,  //float
  castVarToInt32Ptr_bad, //double
  castVarToInt32Ptr_bad, //string
  castVarToInt32Ptr_bad, //list
  castVarToInt32Ptr_bad, //map
  castVarToInt32Ptr_bad, //getset
  castVarToInt32Ptr_bad}; //function
//////
uint32_t * castVarToUint32Ptr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
uint32_t * castVarToUint32Ptr_good(VarRef & r)
{
  return ((uint32_t*)r.data);
}

uint32_t * (*castVarPtrToUint32Ptr[])(VarRef & r) = {
  castVarToUint32Ptr_bad, //undefined
  castVarToUint32Ptr_bad, //bool
  castVarToUint32Ptr_bad, //char
  castVarToUint32Ptr_bad, //int8
  castVarToUint32Ptr_bad, //uint8
  castVarToUint32Ptr_bad, //int16
  castVarToUint32Ptr_bad, //uint16
  castVarToUint32Ptr_bad, //int32
  castVarToUint32Ptr_good, //uint32
  castVarToUint32Ptr_bad, //int64
  castVarToUint32Ptr_bad, //uint64
  castVarToUint32Ptr_bad,  //float
  castVarToUint32Ptr_bad, //double
  castVarToUint32Ptr_bad, //string
  castVarToUint32Ptr_bad, //list
  castVarToUint32Ptr_bad, //map
  castVarToUint32Ptr_bad, //getset
  castVarToUint32Ptr_bad}; //function
//////
//////
int64_t * castVarToInt64Ptr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
int64_t * castVarToInt64Ptr_good(VarRef & r)
{
  return ((int64_t*)r.data);
}

int64_t * (*castVarPtrToInt64Ptr[])(VarRef & r) = {
  castVarToInt64Ptr_bad, //undefined
  castVarToInt64Ptr_bad, //bool
  castVarToInt64Ptr_bad, //char
  castVarToInt64Ptr_bad, //int8
  castVarToInt64Ptr_bad, //uint8
  castVarToInt64Ptr_bad, //int16
  castVarToInt64Ptr_bad, //uint16
  castVarToInt64Ptr_bad, //int32
  castVarToInt64Ptr_bad, //uint32
  castVarToInt64Ptr_bad, //int64
  castVarToInt64Ptr_good, //uint64
  castVarToInt64Ptr_bad,  //float
  castVarToInt64Ptr_bad, //double
  castVarToInt64Ptr_bad, //string
  castVarToInt64Ptr_bad, //list
  castVarToInt64Ptr_bad, //map
  castVarToInt64Ptr_bad, //getset
  castVarToInt64Ptr_bad}; //function
//////
uint64_t * castVarToUint64Ptr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
uint64_t * castVarToUint64Ptr_good(VarRef & r)
{
  return ((uint64_t*)r.data);
}

uint64_t * (*castVarPtrToUint64Ptr[])(VarRef & r) = {
  castVarToUint64Ptr_bad, //undefined
  castVarToUint64Ptr_bad, //bool
  castVarToUint64Ptr_bad, //char
  castVarToUint64Ptr_bad, //int8
  castVarToUint64Ptr_bad, //uint8
  castVarToUint64Ptr_bad, //int16
  castVarToUint64Ptr_bad, //uint16
  castVarToUint64Ptr_bad, //int32
  castVarToUint64Ptr_bad, //uint32
  castVarToUint64Ptr_bad, //int64
  castVarToUint64Ptr_good, //uint64
  castVarToUint64Ptr_bad,  //float
  castVarToUint64Ptr_bad, //double
  castVarToUint64Ptr_bad, //string
  castVarToUint64Ptr_bad, //list
  castVarToUint64Ptr_bad, //map
  castVarToUint64Ptr_bad, //getset
  castVarToUint64Ptr_bad}; //function
//////
//////
float * castVarToFloatPtr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
float * castVarToFloatPtr_good(VarRef & r)
{
  return ((float*)r.data);
}

float * (*castVarPtrToFloatPtr[])(VarRef & r) = {
  castVarToFloatPtr_bad, //undefined
  castVarToFloatPtr_bad, //bool
  castVarToFloatPtr_bad, //char
  castVarToFloatPtr_bad, //int8
  castVarToFloatPtr_bad, //uint8
  castVarToFloatPtr_bad, //int16
  castVarToFloatPtr_bad, //uint16
  castVarToFloatPtr_bad, //int32
  castVarToFloatPtr_bad, //uint32
  castVarToFloatPtr_bad, //int64
  castVarToFloatPtr_bad, //uint64
  castVarToFloatPtr_good,  //float
  castVarToFloatPtr_bad, //double
  castVarToFloatPtr_bad, //string
  castVarToFloatPtr_bad, //list
  castVarToFloatPtr_bad, //map
  castVarToFloatPtr_bad, //getset
  castVarToFloatPtr_bad}; //function
//////
//////
double * castVarToDoublePtr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
double * castVarToDoublePtr_good(VarRef & r)
{
  return ((double*)r.data);
}

double * (*castVarPtrToDoublePtr[])(VarRef & r) = {
  castVarToDoublePtr_bad, //undefined
  castVarToDoublePtr_bad, //bool
  castVarToDoublePtr_bad, //char
  castVarToDoublePtr_bad, //int8
  castVarToDoublePtr_bad, //uint8
  castVarToDoublePtr_bad, //int16
  castVarToDoublePtr_bad, //uint16
  castVarToDoublePtr_bad, //int32
  castVarToDoublePtr_bad, //uint32
  castVarToDoublePtr_bad, //int64
  castVarToDoublePtr_bad, //uint64
  castVarToDoublePtr_bad,  //float
  castVarToDoublePtr_good, //double
  castVarToDoublePtr_bad, //string
  castVarToDoublePtr_bad, //list
  castVarToDoublePtr_bad, //map
  castVarToDoublePtr_bad, //getset
  castVarToDoublePtr_bad}; //function
//////
//////
string * castVarToStringPtr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
string * castVarToStringPtr_good(VarRef & r)
{
  return ((string*)r.data);
}

string * (*castVarPtrToStringPtr[])(VarRef & r) = {
  castVarToStringPtr_bad, //undefined
  castVarToStringPtr_bad, //bool
  castVarToStringPtr_bad, //char
  castVarToStringPtr_bad, //int8
  castVarToStringPtr_bad, //uint8
  castVarToStringPtr_bad, //int16
  castVarToStringPtr_bad, //uint16
  castVarToStringPtr_bad, //int32
  castVarToStringPtr_bad, //uint32
  castVarToStringPtr_bad, //int64
  castVarToStringPtr_bad, //uint64
  castVarToStringPtr_bad,  //float
  castVarToStringPtr_bad, //double
  castVarToStringPtr_good, //string
  castVarToStringPtr_bad, //list
  castVarToStringPtr_bad, //map
  castVarToStringPtr_bad, //getset
  castVarToStringPtr_bad}; //function
//////
//////
vector<var> * castVarToListPtr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
vector<var> * castVarToListPtr_good(VarRef & r)
{
  return ((vector<var>*)r.data);
}

vector<var> * (*castVarPtrToListPtr[])(VarRef & r) = {
  castVarToListPtr_bad, //undefined
  castVarToListPtr_bad, //bool
  castVarToListPtr_bad, //char
  castVarToListPtr_bad, //int8
  castVarToListPtr_bad, //uint8
  castVarToListPtr_bad, //int16
  castVarToListPtr_bad, //uint16
  castVarToListPtr_bad, //int32
  castVarToListPtr_bad, //uint32
  castVarToListPtr_bad, //int64
  castVarToListPtr_bad, //uint64
  castVarToListPtr_bad,  //float
  castVarToListPtr_bad, //double
  castVarToListPtr_bad, //string
  castVarToListPtr_good, //list
  castVarToListPtr_bad, //map
  castVarToListPtr_bad, //getset
  castVarToListPtr_bad}; //function
//////
//////
unordered_map<string, var> * castVarToMapPtr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
unordered_map<string, var> * castVarToMapPtr_good(VarRef & r)
{
  return ((unordered_map<string, var>*)r.data);
}

unordered_map<string, var> * (*castVarPtrToMapPtr[])(VarRef & r) = {
  castVarToMapPtr_bad, //undefined
  castVarToMapPtr_bad, //bool
  castVarToMapPtr_bad, //char
  castVarToMapPtr_bad, //int8
  castVarToMapPtr_bad, //uint8
  castVarToMapPtr_bad, //int16
  castVarToMapPtr_bad, //uint16
  castVarToMapPtr_bad, //int32
  castVarToMapPtr_bad, //uint32
  castVarToMapPtr_bad, //int64
  castVarToMapPtr_bad, //uint64
  castVarToMapPtr_bad,  //float
  castVarToMapPtr_bad, //double
  castVarToMapPtr_bad, //string
  castVarToMapPtr_bad, //list
  castVarToMapPtr_good, //map
  castVarToMapPtr_bad, //getset
  castVarToMapPtr_bad}; //function
//////
//////
VarGetSet * castVarToGetSetPtr_bad(VarRef & r)
{
  unimplemented;
  return 0;
}
VarGetSet * castVarToGetSetPtr_good(VarRef & r)
{
  return ((VarGetSet*)r.data);
}

VarGetSet * (*castVarPtrToGetSetPtr[])(VarRef & r) = {
  castVarToGetSetPtr_bad, //undefined
  castVarToGetSetPtr_bad, //bool
  castVarToGetSetPtr_bad, //char
  castVarToGetSetPtr_bad, //int8
  castVarToGetSetPtr_bad, //uint8
  castVarToGetSetPtr_bad, //int16
  castVarToGetSetPtr_bad, //uint16
  castVarToGetSetPtr_bad, //int32
  castVarToGetSetPtr_bad, //uint32
  castVarToGetSetPtr_bad, //int64
  castVarToGetSetPtr_bad, //uint64
  castVarToGetSetPtr_bad,  //float
  castVarToGetSetPtr_bad, //double
  castVarToGetSetPtr_bad, //string
  castVarToGetSetPtr_bad, //list
  castVarToGetSetPtr_bad, //map
  castVarToGetSetPtr_good, //getset
  castVarToGetSetPtr_bad}; //function
//////


#endif
