#ifndef VARUNDEFINEDOPERATORS_CPP
#define VARUNDEFINEDOPERATORS_CPP
#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
using namespace std;
#include "VarOperators.hpp"

namespace VarUndefinedOperators
{
	void newVar(VarRef * & ref)
	{
		ref = new VarRef();
		VarRef & r = *ref;
		r.t = VarType::Undefined;
		r.count = 1;
	}
	void (*newVarAtType[55])(VarRef *& ref);
	void reset(VarRef * & ref)
	{
		VarRef & r = *ref;
		r.count--;
		if(r.count <=0)
		{
			delete(ref);
			ref = 0;
		}
	}
	VarType varType()
	{
		return VarType::Undefined;
	}

	//casts to reference
	void castUndefined(VarRef *& ref)
	{
		//do nothing.
	}
	bool & castBool(VarRef *& ref)
	{
		notimplemented;
		return nullBool;
	}
	char & castChar(VarRef *& ref)
	{
		notimplemented;
		return nullChar;
	}
	int8_t & castInt8(VarRef *& ref)
	{
		notimplemented;
		return nullInt8;
	}
	uint8_t & castUint8(VarRef *& ref)
	{
		notimplemented;
		return nullUint8;
	}
	int16_t & castInt16(VarRef *& ref)
	{
		notimplemented;
		return nullInt16;
	}
	uint16_t & castUint16(VarRef *& ref)
	{
		notimplemented;
		return nullUint16;
	}
	int32_t & castInt32(VarRef *& ref)
	{
		notimplemented;
		return nullInt32;
	}
	uint32_t & castUint32(VarRef *& ref)
	{
		notimplemented;
		return nullUint32;
	}
	int64_t & castInt64(VarRef *& ref)\
	{
		notimplemented;
		return nullInt64;
	}
	uint64_t & castUint64(VarRef *& ref)
	{
		notimplemented;
		return nullUint64;
	}
	float & castFloat(VarRef *& ref)
	{
		notimplemented;
		return nullFloat;
	}
	double & castDouble(VarRef *& ref)
	{
		notimplemented;
		return nullDouble;
	}
	string & castString(VarRef *& ref)
	{
		notimplemented;
		return nullString;
	}
	vector<bool> & castListBool(VarRef *& ref)
	{
		notimplemented;
		return nullListBool;
	}
	vector<char> & castListChar(VarRef *& ref)
	{
		notimplemented;
		return nullListChar;
	}
	vector<int8_t> & castListInt8(VarRef *& ref)
	{
		notimplemented;
		return nullListInt8;
	}
	vector<uint8_t> & castListUint8(VarRef *& ref)
	{
		notimplemented;
		return nullListUint8;
	}
	vector<int16_t> & castListInt16(VarRef *& ref)
	{
		notimplemented;
		return nullListInt16;
	}
	vector<uint16_t> & castListUint16(VarRef *& ref)
	{
		notimplemented;
		return nullListUint16;
	}
	vector<int32_t> & castListInt32(VarRef *& ref)
	{
		notimplemented;
		return nullListInt32;
	}
	vector<uint32_t> & castListUint32(VarRef *& ref)
	{
		notimplemented;
		return nullListUint32;
	}
	vector<int64_t> & castListInt64(VarRef *& ref)
	{
		notimplemented;
		return nullListInt64;
	}
	vector<uint64_t> & castListUint64(VarRef *& ref)
	{
		notimplemented;
		return nullListUint64;
	}
	vector<float> & castListFloat(VarRef *& ref)
	{
		notimplemented;
		return nullListFloat;
	}
	vector<double> & castListDouble(VarRef *& ref)
	{
		notimplemented;
		return nullListDouble;
	}
	vector<string> & castListString(VarRef *& ref)
	{
		notimplemented;
		return nullListString;
	}
	vector<var> & castListVar(VarRef *& ref)
	{
		notimplemented;
		return nullListVar;
	}
	unordered_map<int64_t, var> & castMapInt64Var(VarRef *& ref)
	{
		notimplemented;
		return nullListMapInt64Var;
	}
	unordered_map<double, var> & castMapDoubleVar(VarRef *& ref)
	{
		notimplemented;
		return nullListMapDoubleVar;
	}
	unordered_map<string, var> & castMapStringVar(VarRef *& ref)
	{
		notimplemented;
		return nullListMapStringVar;
	}
	VarGetSet & castVarGetSet(VarRef *& ref)
	{
		notimplemented;
		return nullGetSet;
	}
	function<void()> & castFunctionVoid0(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid0;
	}
	function<void(var)> & castFunctionVoid1(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid1;
	}
	function<void(var, var)> & castFunctionVoid2(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid2;
	}
	function<void(var, var, var)> & castFunctionVoid3(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid3;
	}
	function<void(var, var, var, var)> & castFunctionVoid4(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid4;
	}
	function<void(var, var, var, var, var)> & castFunctionVoid5(VarRef *& re)
	{
		notimplemented;
		return nullFunctionVoid5;
	}
	function<void(var, var, var, var, var, var)> & castFunctionVoid6(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid6;
	}
	function<void(var, var, var, var, var, var, var)> & castFunctionVoid7(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid7;
	}
	function<void(var, var, var, var, var, var, var, var)> & castFunctionVoid8(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid8;
	}
	function<void(var, var, var, var, var, var, var, var, var)> & castFunctionVoid9(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid9;
	}
	function<void(var, var, var, var, var, var, var, var, var, var)> & castFunctionVoid10(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVoid10;
	}
	function<var()> & castFunctionVar0(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar0;
	}
	function<var(var)> & castFunctionVar1(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar1;
	}
	function<var(var, var)> & castFunctionVar2(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar2;
	}
	function<var(var, var, var)> & castFunctionVar3(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar3;
	}
	function<var(var, var, var, var)> & castFunctionVar4(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar4;
	}
	function<var(var, var, var, var, var)> & castFunctionVar5(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar5;
	}
	function<var(var, var, var, var, var, var)> & castFunctionVar6(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar6;
	}
	function<var(var, var, var, var, var, var, var)> & castFunctionVar7(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar7;
	}
	function<var(var, var, var, var, var, var, var, var)> & castFunctionVar8(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar8;
	}
	function<var(var, var, var, var, var, var, var, var, var)> & castFunctionVar9(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar9;
	}
	function<var(var, var, var, var, var, var, var, var, var, var)> & castFunctionVar10(VarRef *& ref)
	{
		notimplemented;
		return nullFunctionVar10;
	}
	//equals
	void equalsBool(VarRef*& ref, bool d)
	{
		notimplemented;
	}
	void equalsChar(VarRef*& ref, char d)
	{
		notimplemented;
	}
	void equalsInt8(VarRef*& ref, int8_t d)
	{
		notimplemented;
	}
	void equalsUint8(VarRef*& ref, uint8_t d)
	{
		notimplemented;
	}
	void equalsInt16(VarRef*& ref, int16_t d)
	{
		notimplemented;
	}
	void equalsUint16(VarRef*& ref, uint16_t d)
	{
		notimplemented;
	}
	void equalsInt32(VarRef*& ref, int32_t d)
	{
		notimplemented;
	}
	void equalsUint32(VarRef*& ref, uint32_t d)
	{
		notimplemented;
	}
	void equalsInt64(VarRef*& ref, int64_t d)
	{
		notimplemented;
	}
	void equalsUint64(VarRef*& ref, uint64_t d)
	{
		notimplemented;
	}
	void equalsFloat(VarRef*& ref, float d)
	{
		notimplemented;
	}
	void equalsDouble(VarRef*& ref, double d)
	{
		notimplemented;
	}
	void equalsString(VarRef*& ref, string d)
	{
		notimplemented;
	}
	void equalsFunctionVoid0(VarRef*& ref, function<void()> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid1(VarRef*& ref, function<void(var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid2(VarRef*& ref, function<void(var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid3(VarRef*& ref, function<void(var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid4(VarRef*& ref, function<void(var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid5(VarRef*& ref, function<void(var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid6(VarRef*& ref, function<void(var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid7(VarRef*& ref, function<void(var, var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid8(VarRef*& ref, function<void(var, var, var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid9(VarRef*& ref, function<void(var, var, var, var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVoid10(VarRef*& ref, function<void(var, var, var, var, var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar0(VarRef*& ref, function<var()> d)
	{
		notimplemented;
	}
	void equalsFunctionVar1(VarRef*& ref, function<var(var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar2(VarRef*& ref, function<var(var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar3(VarRef*& ref, function<var(var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar4(VarRef*& ref, function<var(var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar5(VarRef*& ref, function<var(var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar6(VarRef*& ref, function<var(var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar7(VarRef*& ref, function<var(var, var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar8(VarRef*& ref, function<var(var, var, var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar9(VarRef*& ref, function<var(var, var, var, var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void equalsFunctionVar10(VarRef*& ref, function<var(var, var, var, var, var, var, var, var, var, var)> d)
	{
		notimplemented;
	}
	void (*equalsVar[55])(VarRef*&ref1, VarRef*&ref2);
	//end equals
	//opSquare []
	bool & opBoolSqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullBool;
	}
	char & opCharSqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullChar;
	}
	int8_t & opInt8SqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullInt8;
	}
	uint8_t & opUint8SqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullUint8;
	}
	int16_t & opInt16SqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullInt16;
	}
	uint16_t & opUint16SqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullUint16;
	}
	int32_t & opInt32SqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullInt32;
	}
	uint32_t & opUint32SqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullUint32;
	}
	int64_t & opInt64SqInt64(VarRef *& ref, int64_t i)\
	{
		notimplemented;
		return nullInt64;
	}
	uint64_t & opUint64SqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullUint64;
	}
	float & opFloatSqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullFloat;
	}
	double & opDoubleSqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullDouble;
	}
	string & opStringSqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullString;
	}
	var & opVarSqInt64(VarRef *& ref, int64_t i)
	{
		notimplemented;
		return nullVar;
	}
	var & opVarSqDouble(VarRef *& ref, double i)
	{
		notimplemented;
		return nullVar;
	}
	var & opVarSqString(VarRef *& ref, string i)
	{
		notimplemented;
		return nullVar;
	}
	//end opSq []
	//list add and map set
	void addBoolListItem(VarRef *& ref, bool d)
	{
		notimplemented;
	}
	void addCharListItem(VarRef *& ref, char d)
	{
		notimplemented;
	}
	void addInt8ListItem(VarRef *& ref, int8_t d)
	{
		notimplemented;
	}
	void addUint8ListItem(VarRef *& ref, uint8_t d)
	{
		notimplemented;
	}
	void addInt16ListItem(VarRef *& ref, int16_t d)
	{
		notimplemented;
	}
	void addUint16ListItem(VarRef *& ref, uint16_t d)
	{
		notimplemented;
	}
	void addInt32ListItem(VarRef *& ref, int32_t d)
	{
		notimplemented;
	}
	void addUint32ListItem(VarRef *& ref, uint32_t d)
	{
		notimplemented;
	}
	void addInt64ListItem(VarRef *& ref, int64_t d)
	{
		notimplemented;
	}
	void addUint64ListItem(VarRef *& ref, uint64_t d)
	{
		notimplemented;
	}
	void addFloatListItem(VarRef *& ref, float d)
	{
		notimplemented;
	}
	void addDoubleListItem(VarRef *& ref, double d)
	{
		notimplemented;
	}
	void addStringListItem(VarRef *& ref, string d)
	{
		notimplemented;
	}
	void addVarListItem(VarRef *& ref, var d)
	{
		notimplemented;
	}
	void setMapItemInt64(VarRef *& ref, int64_t k, var v)
	{
		notimplemented;
	}
	void setMapItemDouble(VarRef *& ref, double k, var v)
	{
		notimplemented;
	}
	void setMapItemString(VarRef *& ref, string k, var v)
	{
		notimplemented;
	}
	//end list add and map set
	//getter setter
	void getter(VarRef *& ref, function<var()> func)
	{
		notimplemented;
	}
	void setter(VarRef *& ref, function<void(var)> func)
	{
		notimplemented;
	}
	void getterSetter(VarRef *& ref, function<var()> funcg, function<void(var)> funcs)
	{
		notimplemented;
	}
	//end getter setter
	var callFunction(VarRef *& ref, var args[10])
	{
		notimplemented;
	}

	void coutVar(VarRef*&ref, ostream & out)
	{
		out << "Undefined";
	}

	VarOperators Operators(
		newVar,
		//newVarAtType,
		reset,
		varType
	);
		/*
			//casts to reference
		castUndefined,
		castBool,

		castChar,
		castInt8,
		castUint8,
		castInt16,
		castUint16,
		castInt32,
		castUint32,
		castInt64,
		castUint64,
		castFloat,
		castDouble,
		castString,
		castListBool,
		castListChar,
		castListInt8,
		castListUint8,
		castListInt16,
		castListUint16,
		castListInt32,
		castListUint32,
		castListInt64,
		castListUint64,
		castListFloat,
		castListDouble,
		castListString,
		castListVar,
		castMapInt64Var,
		castMapDoubleVar,
		castMapStringVar,
		castVarGetSet,
		castFunctionVoid0,
		castFunctionVoid1,
		castFunctionVoid2,
		castFunctionVoid3,
		castFunctionVoid4,
		castFunctionVoid5,
		castFunctionVoid6,
		castFunctionVoid7,
		castFunctionVoid8,
		castFunctionVoid9,
		castFunctionVoid10,
		castFunctionVar0,
		castFunctionVar1,
		castFunctionVar2,
		castFunctionVar3,
		castFunctionVar4,
		castFunctionVar5,
		castFunctionVar6,
		castFunctionVar7,
		castFunctionVar8,
		castFunctionVar9,
		castFunctionVar10,
			//equals
		equalsBool,
		equalsChar,
		equalsInt8,
		equalsUint8,
		equalsInt16,
		equalsUint16,
		equalsInt32,
		equalsUint32,
		equalsInt64,
		equalsUint64,
		equalsFloat,
		equalsDouble,
		equalsString,
		equalsFunctionVoid0,
		equalsFunctionVoid1,
		equalsFunctionVoid2,
		equalsFunctionVoid3,
		equalsFunctionVoid4,
		equalsFunctionVoid5,
		equalsFunctionVoid6,
		equalsFunctionVoid7,
		equalsFunctionVoid8,
		equalsFunctionVoid9,
		equalsFunctionVoid10,
		equalsFunctionVar0,
		equalsFunctionVar1,
		equalsFunctionVar2,
		equalsFunctionVar3,
		equalsFunctionVar4,
		equalsFunctionVar5,
		equalsFunctionVar6,
		equalsFunctionVar7,
		equalsFunctionVar8,
		equalsFunctionVar9,
		equalsFunctionVar10,
			0,//void(*equalsVar[])(VarRef*&ref1, VarRef*&ref2);
			//end equals
			//opSquare []
		opBoolSqInt64,
		opCharSqInt64,
		opInt8SqInt64,
		opUint8SqInt64,
		opInt16SqInt64,
		opUint16SqInt64,
		opInt32SqInt64,
		opUint32SqInt64,
		opInt64SqInt64,
		opUint64SqInt64,
		opFloatSqInt64,
		opDoubleSqInt64,
		opStringSqInt64,
		opVarSqInt64,
		opVarSqDouble,
		opVarSqString,
			//end opSq []
			//list add and map set
		addBoolListItem,
		addCharListItem,
		addInt8ListItem,
		addUint8ListItem,
		addInt16ListItem,
		addUint16ListItem,
		addInt32ListItem,
		addUint32ListItem,
		addInt64ListItem,
		addUint64ListItem,
		addFloatListItem,
		addDoubleListItem,
		addStringListItem,
		addVarListItem,
		setMapItemInt64,
		setMapItemDouble,
		setMapItemString,
			//end list add and map set
			//getter setter
		getter,
		setter,
		getterSetter,
			//end getter setter
		callFunction,

		coutVar

	};//*/


}//end namespace

#endif
