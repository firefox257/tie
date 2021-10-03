#include <iostream>
#include <unordered_map>
#include <map>
#include <stdint.h>
#include <string>
#include <vector>
using namespace std;

#define el << "\r\n"

enum class VarType
{
  Undefined,
  Bool,
  Int64,
  Double,
  String,
  List,
  Map,
  Funciton
};



void varNewUndefined(void * & v)
{
	v = 0;
}
void varNewBool(void * & v)
{
	v = new bool;
}
void varNewInt64(void * & v)
{
	v = new int64_t;
}
void varNewDouble(void * & v)
{
	v = new double;
}
void varNewString(void * & v)
{
	v = new string;
}

void(*varNew[])(void*&) = {varNewUndefined, varNewBool, varNewInt64, varNewDouble, varNewString};

void varDeleteUndefined(void * & v)
{
	v = 0;
}
void varDeleteBool(void * & v)
{
	delete((bool*)v);
	v = 0;
}
void varDeleteInt64(void * & v)
{
	delete((int64_t*)v);
	v = 0;
}
void varDeleteDouble(void * & v)
{
	delete((double*)v);
	v = 0;
}
void varDeleteString(void * & v)
{
	delete((string*)v);
	v = 0;
}

void(*varDelete[])(void*&) = {varDeleteUndefined, varDeleteBool, varDeleteInt64, varDeleteDouble, varDeleteString};



class var
{
	void * data = 0;
	int * count = 0;
	VarType * t = 0;
public:
	var()
	{
		count = new int;
		*count = 1;
		t = new VarType;
		*t = VarType::Undefined;
	}
	var(bool b)
	{
		count = new int;
		*count = 1;
		t = new VarType;
		*t = VarType::Undefined;
	}

};

int main()
{


  return 0;
}
