#ifndef CASTVARREF_CPP
#define CASTVARREV_CPP

bool nullbool;
bool & castVarToBoolRef_bad(VarRef & r)
{
  unimplemented;

  return nullbool;
}
bool & castVarToBoolRef_good(VarRef & r)
{
  return (*((bool*)r.data));
}

bool & (*castVarRefToBoolRef[])(VarRef & r) = {
  castVarToBoolRef_bad, //undefined
  castVarToBoolRef_good, //bool
  castVarToBoolRef_bad, //char
  castVarToBoolRef_bad, //int8
  castVarToBoolRef_bad, //uint8
  castVarToBoolRef_bad, //int16
  castVarToBoolRef_bad, //uint16
  castVarToBoolRef_bad, //int32
  castVarToBoolRef_bad, //uint32
  castVarToBoolRef_bad, //int64
  castVarToBoolRef_bad, //uint64
  castVarToBoolRef_bad,  //float
  castVarToBoolRef_bad, //double
  castVarToBoolRef_bad, //string
  castVarToBoolRef_bad, //list
  castVarToBoolRef_bad, //map
  castVarToBoolRef_bad, //getset
  castVarToBoolRef_bad}; //function
//////
char nullchar;
char & castVarToCharRef_bad(VarRef & r)
{
  unimplemented;
  return nullchar;
}
char & castVarToCharRef_good(VarRef & r)
{
  return (*((char*)r.data));
}

char & (*castVarRefToCharRef[])(VarRef & r) = {
  castVarToCharRef_bad, //undefined
  castVarToCharRef_bad, //bool
  castVarToCharRef_good, //char
  castVarToCharRef_bad, //int8
  castVarToCharRef_bad, //uint8
  castVarToCharRef_bad, //int16
  castVarToCharRef_bad, //uint16
  castVarToCharRef_bad, //int32
  castVarToCharRef_bad, //uint32
  castVarToCharRef_bad, //int64
  castVarToCharRef_bad, //uint64
  castVarToCharRef_bad,  //float
  castVarToCharRef_bad, //double
  castVarToCharRef_bad, //string
  castVarToCharRef_bad, //list
  castVarToCharRef_bad, //map
  castVarToCharRef_bad, //getset
  castVarToCharRef_bad}; //function
//////
int8_t nullint8;
int8_t & castVarToInt8Ref_bad(VarRef & r)
{
  unimplemented;
  return nullint8;
}
int8_t & castVarToInt8Ref_good(VarRef & r)
{
  return (*((int8_t*)r.data));
}

int8_t & (*castVarRefToInt8Ref[])(VarRef & r) = {
  castVarToInt8Ref_bad, //undefined
  castVarToInt8Ref_bad, //bool
  castVarToInt8Ref_bad, //char
  castVarToInt8Ref_good, //int8
  castVarToInt8Ref_bad, //uint8
  castVarToInt8Ref_bad, //int16
  castVarToInt8Ref_bad, //uint16
  castVarToInt8Ref_bad, //int32
  castVarToInt8Ref_bad, //uint32
  castVarToInt8Ref_bad, //int64
  castVarToInt8Ref_bad, //uint64
  castVarToInt8Ref_bad,  //float
  castVarToInt8Ref_bad, //double
  castVarToInt8Ref_bad, //string
  castVarToInt8Ref_bad, //list
  castVarToInt8Ref_bad, //map
  castVarToInt8Ref_bad, //getset
  castVarToInt8Ref_bad}; //function
//////
uint8_t nulluint8;
uint8_t & castVarToUint8Ref_bad(VarRef & r)
{
  unimplemented;
  return nulluint8;
}
uint8_t & castVarToUint8Ref_good(VarRef & r)
{
  return (*((uint8_t*)r.data));
}

uint8_t & (*castVarRefToUint8Ref[])(VarRef & r) = {
  castVarToUint8Ref_bad, //undefined
  castVarToUint8Ref_bad, //bool
  castVarToUint8Ref_bad, //char
  castVarToUint8Ref_bad, //int8
  castVarToUint8Ref_good, //uint8
  castVarToUint8Ref_bad, //int16
  castVarToUint8Ref_bad, //uint16
  castVarToUint8Ref_bad, //int32
  castVarToUint8Ref_bad, //uint32
  castVarToUint8Ref_bad, //int64
  castVarToUint8Ref_bad, //uint64
  castVarToUint8Ref_bad,  //float
  castVarToUint8Ref_bad, //double
  castVarToUint8Ref_bad, //string
  castVarToUint8Ref_bad, //list
  castVarToUint8Ref_bad, //map
  castVarToUint8Ref_bad, //getset
  castVarToUint8Ref_bad}; //function
//////
//////
int16_t nullint16;
int16_t & castVarToInt16Ref_bad(VarRef & r)
{
  unimplemented;
  return nullint16;
}
int16_t & castVarToInt16Ref_good(VarRef & r)
{
  return (*((int16_t*)r.data));
}

int16_t & (*castVarRefToInt16Ref[])(VarRef & r) = {
  castVarToInt16Ref_bad, //undefined
  castVarToInt16Ref_bad, //bool
  castVarToInt16Ref_bad, //char
  castVarToInt16Ref_bad, //int8
  castVarToInt16Ref_bad, //uint8
  castVarToInt16Ref_good, //int16
  castVarToInt16Ref_bad, //uint16
  castVarToInt16Ref_bad, //int32
  castVarToInt16Ref_bad, //uint32
  castVarToInt16Ref_bad, //int64
  castVarToInt16Ref_bad, //uint64
  castVarToInt16Ref_bad,  //float
  castVarToInt16Ref_bad, //double
  castVarToInt16Ref_bad, //string
  castVarToInt16Ref_bad, //list
  castVarToInt16Ref_bad, //map
  castVarToInt16Ref_bad, //getset
  castVarToInt16Ref_bad}; //function
//////
uint16_t nulluint16;
uint16_t & castVarToUint16Ref_bad(VarRef & r)
{
  unimplemented;
  return nulluint16;
}
uint16_t & castVarToUint16Ref_good(VarRef & r)
{
  return (*((uint16_t*)r.data));
}

uint16_t & (*castVarRefToUint16Ref[])(VarRef & r) = {
  castVarToUint16Ref_bad, //undefined
  castVarToUint16Ref_bad, //bool
  castVarToUint16Ref_bad, //char
  castVarToUint16Ref_bad, //int8
  castVarToUint16Ref_bad, //uint8
  castVarToUint16Ref_bad, //int16
  castVarToUint16Ref_good, //uint16
  castVarToUint16Ref_bad, //int32
  castVarToUint16Ref_bad, //uint32
  castVarToUint16Ref_bad, //int64
  castVarToUint16Ref_bad, //uint64
  castVarToUint16Ref_bad,  //float
  castVarToUint16Ref_bad, //double
  castVarToUint16Ref_bad, //string
  castVarToUint16Ref_bad, //list
  castVarToUint16Ref_bad, //map
  castVarToUint16Ref_bad, //getset
  castVarToUint16Ref_bad}; //function
//////
//////
int32_t nullint32;
int32_t & castVarToInt32Ref_bad(VarRef & r)
{
  unimplemented;
  return nullint32;
}
int32_t & castVarToInt32Ref_good(VarRef & r)
{
  return (*((int32_t*)r.data));
}

int32_t & (*castVarRefToInt32Ref[])(VarRef & r) = {
  castVarToInt32Ref_bad, //undefined
  castVarToInt32Ref_bad, //bool
  castVarToInt32Ref_bad, //char
  castVarToInt32Ref_bad, //int8
  castVarToInt32Ref_bad, //uint8
  castVarToInt32Ref_bad, //int16
  castVarToInt32Ref_bad, //uint16
  castVarToInt32Ref_good, //int32
  castVarToInt32Ref_bad, //uint32
  castVarToInt32Ref_bad, //int64
  castVarToInt32Ref_bad, //uint64
  castVarToInt32Ref_bad,  //float
  castVarToInt32Ref_bad, //double
  castVarToInt32Ref_bad, //string
  castVarToInt32Ref_bad, //list
  castVarToInt32Ref_bad, //map
  castVarToInt32Ref_bad, //getset
  castVarToInt32Ref_bad}; //function
//////
uint32_t nulluint32;
uint32_t & castVarToUint32Ref_bad(VarRef & r)
{
  unimplemented;
  return nulluint32;
}
uint32_t & castVarToUint32Ref_good(VarRef & r)
{
  return (*((uint32_t*)r.data));
}

uint32_t & (*castVarRefToUint32Ref[])(VarRef & r) = {
  castVarToUint32Ref_bad, //undefined
  castVarToUint32Ref_bad, //bool
  castVarToUint32Ref_bad, //char
  castVarToUint32Ref_bad, //int8
  castVarToUint32Ref_bad, //uint8
  castVarToUint32Ref_bad, //int16
  castVarToUint32Ref_bad, //uint16
  castVarToUint32Ref_bad, //int32
  castVarToUint32Ref_good, //uint32
  castVarToUint32Ref_bad, //int64
  castVarToUint32Ref_bad, //uint64
  castVarToUint32Ref_bad,  //float
  castVarToUint32Ref_bad, //double
  castVarToUint32Ref_bad, //string
  castVarToUint32Ref_bad, //list
  castVarToUint32Ref_bad, //map
  castVarToUint32Ref_bad, //getset
  castVarToUint32Ref_bad}; //function
//////
//////
int64_t nullint64;
int64_t & castVarToInt64Ref_bad(VarRef & r)
{
  unimplemented;
  return nullint64;
}
int64_t & castVarToInt64Ref_good(VarRef & r)
{
  return (*((int64_t*)r.data));
}

int64_t & (*castVarRefToInt64Ref[])(VarRef & r) = {
  castVarToInt64Ref_bad, //undefined
  castVarToInt64Ref_bad, //bool
  castVarToInt64Ref_bad, //char
  castVarToInt64Ref_bad, //int8
  castVarToInt64Ref_bad, //uint8
  castVarToInt64Ref_bad, //int16
  castVarToInt64Ref_bad, //uint16
  castVarToInt64Ref_bad, //int32
  castVarToInt64Ref_bad, //uint32
  castVarToInt64Ref_bad, //int64
  castVarToInt64Ref_good, //uint64
  castVarToInt64Ref_bad,  //float
  castVarToInt64Ref_bad, //double
  castVarToInt64Ref_bad, //string
  castVarToInt64Ref_bad, //list
  castVarToInt64Ref_bad, //map
  castVarToInt64Ref_bad, //getset
  castVarToInt64Ref_bad}; //function
//////
uint64_t nulluint64;
uint64_t & castVarToUint64Ref_bad(VarRef & r)
{
  unimplemented;
  return nulluint64;
}
uint64_t & castVarToUint64Ref_good(VarRef & r)
{
  return (*((uint64_t*)r.data));
}

uint64_t & (*castVarRefToUint64Ref[])(VarRef & r) = {
  castVarToUint64Ref_bad, //undefined
  castVarToUint64Ref_bad, //bool
  castVarToUint64Ref_bad, //char
  castVarToUint64Ref_bad, //int8
  castVarToUint64Ref_bad, //uint8
  castVarToUint64Ref_bad, //int16
  castVarToUint64Ref_bad, //uint16
  castVarToUint64Ref_bad, //int32
  castVarToUint64Ref_bad, //uint32
  castVarToUint64Ref_bad, //int64
  castVarToUint64Ref_good, //uint64
  castVarToUint64Ref_bad,  //float
  castVarToUint64Ref_bad, //double
  castVarToUint64Ref_bad, //string
  castVarToUint64Ref_bad, //list
  castVarToUint64Ref_bad, //map
  castVarToUint64Ref_bad, //getset
  castVarToUint64Ref_bad}; //function
//////
//////
float nullfloat;
float & castVarToFloatRef_bad(VarRef & r)
{
  unimplemented;
  return nullfloat;
}
float & castVarToFloatRef_good(VarRef & r)
{
  return (*((float*)r.data));
}

float & (*castVarRefToFloatRef[])(VarRef & r) = {
  castVarToFloatRef_bad, //undefined
  castVarToFloatRef_bad, //bool
  castVarToFloatRef_bad, //char
  castVarToFloatRef_bad, //int8
  castVarToFloatRef_bad, //uint8
  castVarToFloatRef_bad, //int16
  castVarToFloatRef_bad, //uint16
  castVarToFloatRef_bad, //int32
  castVarToFloatRef_bad, //uint32
  castVarToFloatRef_bad, //int64
  castVarToFloatRef_bad, //uint64
  castVarToFloatRef_good,  //float
  castVarToFloatRef_bad, //double
  castVarToFloatRef_bad, //string
  castVarToFloatRef_bad, //list
  castVarToFloatRef_bad, //map
  castVarToFloatRef_bad, //getset
  castVarToFloatRef_bad}; //function
//////
//////
double nulldouble;
double & castVarToDoubleRef_bad(VarRef & r)
{
  unimplemented;
  return nulldouble;
}
double & castVarToDoubleRef_good(VarRef & r)
{
  return (*((double*)r.data));
}

double & (*castVarRefToDoubleRef[])(VarRef & r) = {
  castVarToDoubleRef_bad, //undefined
  castVarToDoubleRef_bad, //bool
  castVarToDoubleRef_bad, //char
  castVarToDoubleRef_bad, //int8
  castVarToDoubleRef_bad, //uint8
  castVarToDoubleRef_bad, //int16
  castVarToDoubleRef_bad, //uint16
  castVarToDoubleRef_bad, //int32
  castVarToDoubleRef_bad, //uint32
  castVarToDoubleRef_bad, //int64
  castVarToDoubleRef_bad, //uint64
  castVarToDoubleRef_bad,  //float
  castVarToDoubleRef_good, //double
  castVarToDoubleRef_bad, //string
  castVarToDoubleRef_bad, //list
  castVarToDoubleRef_bad, //map
  castVarToDoubleRef_bad, //getset
  castVarToDoubleRef_bad}; //function
//////
//////
string nullstring;
string & castVarToStringRef_bad(VarRef & r)
{
  unimplemented;
  return nullstring;
}
string & castVarToStringRef_good(VarRef & r)
{
  return (*((string*)r.data));
}

string & (*castVarRefToStringRef[])(VarRef & r) = {
  castVarToStringRef_bad, //undefined
  castVarToStringRef_bad, //bool
  castVarToStringRef_bad, //char
  castVarToStringRef_bad, //int8
  castVarToStringRef_bad, //uint8
  castVarToStringRef_bad, //int16
  castVarToStringRef_bad, //uint16
  castVarToStringRef_bad, //int32
  castVarToStringRef_bad, //uint32
  castVarToStringRef_bad, //int64
  castVarToStringRef_bad, //uint64
  castVarToStringRef_bad,  //float
  castVarToStringRef_bad, //double
  castVarToStringRef_good, //string
  castVarToStringRef_bad, //list
  castVarToStringRef_bad, //map
  castVarToStringRef_bad, //getset
  castVarToStringRef_bad}; //function
//////
//////
vector<var> nulllist;
vector<var> & castVarToListRef_bad(VarRef & r)
{
  unimplemented;
  return nulllist;
}
vector<var> & castVarToListRef_good(VarRef & r)
{
  return (*((vector<var>*)r.data));
}

vector<var> & (*castVarRefToListRef[])(VarRef & r) = {
  castVarToListRef_bad, //undefined
  castVarToListRef_bad, //bool
  castVarToListRef_bad, //char
  castVarToListRef_bad, //int8
  castVarToListRef_bad, //uint8
  castVarToListRef_bad, //int16
  castVarToListRef_bad, //uint16
  castVarToListRef_bad, //int32
  castVarToListRef_bad, //uint32
  castVarToListRef_bad, //int64
  castVarToListRef_bad, //uint64
  castVarToListRef_bad,  //float
  castVarToListRef_bad, //double
  castVarToListRef_bad, //string
  castVarToListRef_good, //list
  castVarToListRef_bad, //map
  castVarToListRef_bad, //getset
  castVarToListRef_bad}; //function
//////
//////
unordered_map<string, var> nullmap;
unordered_map<string, var> & castVarToMapRef_bad(VarRef & r)
{
  unimplemented;
  return nullmap;
}
unordered_map<string, var> & castVarToMapRef_good(VarRef & r)
{
  return (*((unordered_map<string, var>*)r.data));
}

unordered_map<string, var> & (*castVarRefToMapRef[])(VarRef & r) = {
  castVarToMapRef_bad, //undefined
  castVarToMapRef_bad, //bool
  castVarToMapRef_bad, //char
  castVarToMapRef_bad, //int8
  castVarToMapRef_bad, //uint8
  castVarToMapRef_bad, //int16
  castVarToMapRef_bad, //uint16
  castVarToMapRef_bad, //int32
  castVarToMapRef_bad, //uint32
  castVarToMapRef_bad, //int64
  castVarToMapRef_bad, //uint64
  castVarToMapRef_bad,  //float
  castVarToMapRef_bad, //double
  castVarToMapRef_bad, //string
  castVarToMapRef_bad, //list
  castVarToMapRef_good, //map
  castVarToMapRef_bad, //getset
  castVarToMapRef_bad}; //function
//////
//////
VarGetSet nullvargetset;
VarGetSet & castVarToGetSetRef_bad(VarRef & r)
{
  unimplemented;
  return nullvargetset;
}
VarGetSet & castVarToGetSetRef_good(VarRef & r)
{
  return (*((VarGetSet*)r.data));
}

VarGetSet & (*castVarRefToGetSetRef[])(VarRef & r) = {
  castVarToGetSetRef_bad, //undefined
  castVarToGetSetRef_bad, //bool
  castVarToGetSetRef_bad, //char
  castVarToGetSetRef_bad, //int8
  castVarToGetSetRef_bad, //uint8
  castVarToGetSetRef_bad, //int16
  castVarToGetSetRef_bad, //uint16
  castVarToGetSetRef_bad, //int32
  castVarToGetSetRef_bad, //uint32
  castVarToGetSetRef_bad, //int64
  castVarToGetSetRef_bad, //uint64
  castVarToGetSetRef_bad,  //float
  castVarToGetSetRef_bad, //double
  castVarToGetSetRef_bad, //string
  castVarToGetSetRef_bad, //list
  castVarToGetSetRef_bad, //map
  castVarToGetSetRef_good, //getset
  castVarToGetSetRef_bad}; //function
//////



#endif
