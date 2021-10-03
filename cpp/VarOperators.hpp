#ifndef VAROPERATORS_HPP
#define VAROPERATORS_HPP
#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
#include "VarRef.hpp"
#include "VarGetSet.hpp"
using namespace std;
//#include "VarType.hpp"

void * nullobj = 0;
#define nullBool (*((bool*)nullobj))
#define nullChar (*((char*)nullobj))
#define nullInt8 (*((int8_t*)nullobj))
#define nullUint8 (*((uint8_t*)nullobj))
#define nullInt16 (*((int16_t*)nullobj))
#define nullUint16 (*((uint16_t*)nullobj))
#define nullInt32 (*((int32_t*)nullobj))
#define nullUint32 (*((uint32_t*)nullobj))
#define nullInt64 (*((int64_t*)nullobj))
#define nullUint64 (*((uint64_t*)nullobj))
#define nullFloat (*((float*)nullobj))
#define nullDouble (*((double*)nullobj))
#define nullString (*((string*)nullobj))
#define nullVar (*((var*)nullobj))
#define nullListBool (*((vector<bool>*)nullobj))
#define nullListChar (*((vector<char>*)nullobj))
#define nullListInt8 (*((vector<int8_t>*)nullobj))
#define nullListUint8 (*((vector<uint8_t>*)nullobj))
#define nullListInt16 (*((vector<int16_t>*)nullobj))
#define nullListUint16 (*((vector<uint16_t>*)nullobj))
#define nullListInt32 (*((vector<int32_t>*)nullobj))
#define nullListUint32 (*((vector<uint32_t>*)nullobj))
#define nullListInt64 (*((vector<int64_t>*)nullobj))
#define nullListUint64 (*((vector<uint64_t>*)nullobj))
#define nullListFloat (*((vector<float>*)nullobj))
#define nullListDouble (*((vector<double>*)nullobj))
#define nullListString (*((vector<string>*)nullobj))
#define nullListVar (*((vector<var>*)nullobj))
#define nullListMapInt64Var (*((unordered_map<int64_t, var>*)nullobj))
#define nullListMapDoubleVar (*((unordered_map<double, var>*)nullobj));
#define nullListMapStringVar (*((unordered_map<string, var>*)nullobj));
#define nullGetSet (*((VarGetSet*)nullobj));
#define nullFunctionVoid0 (*((function<void()>*)nullobj));
#define nullFunctionVoid1 (*((function<void(var)>*)nullobj));
#define nullFunctionVoid2 (*((function<void(var, var)>*)nullobj));
#define nullFunctionVoid3 (*((function<void(var, var, var)>*)nullobj));
#define nullFunctionVoid4 (*((function<void(var, var, var, var)>*)nullobj));
#define nullFunctionVoid5 (*((function<void(var, var, var, var, var)>*)nullobj));
#define nullFunctionVoid6 (*((function<void(var, var, var, var, var, var)>*)nullobj));
#define nullFunctionVoid7 (*((function<void(var, var, var, var, var, var, var)>*)nullobj));
#define nullFunctionVoid8 (*((function<void(var, var, var, var, var, var, var, var)>*)nullobj));
#define nullFunctionVoid9 (*((function<void(var, var, var, var, var, var, var, var, var)>*)nullobj));
#define nullFunctionVoid10 (*((function<void(var, var, var, var, var, var, var, var, var, var)>*)nullobj));
#define nullFunctionVar0 (*((function<var()>*)nullobj));
#define nullFunctionVar1 (*((function<var(var)>*)nullobj));
#define nullFunctionVar2 (*((function<var(var, var)>*)nullobj));
#define nullFunctionVar3 (*((function<var(var, var, var)>*)nullobj));
#define nullFunctionVar4 (*((function<var(var, var, var, var)>*)nullobj));
#define nullFunctionVar5 (*((function<var(var, var, var, var, var)>*)nullobj));
#define nullFunctionVar6 (*((function<var(var, var, var, var, var, var)>*)nullobj));
#define nullFunctionVar7 (*((function<var(var, var, var, var, var, var, var)>*)nullobj));
#define nullFunctionVar8 (*((function<var(var, var, var, var, var, var, var, var)>*)nullobj));
#define nullFunctionVar9 (*((function<var(var, var, var, var, var, var, var, var, var)>*)nullobj));
#define nullFunctionVar10 (*((function<var(var, var, var, var, var, var, var, var, var, var)>*)nullobj));

struct VarOperators
{
	void (*newVar)(VarRef * & ref);
	void (*newVarAtType[55])(VarRef *& ref);
	void (*reset)(VarRef * & ref);
	VarType (*varType)();

	//casts to reference
	void (*castUndefined)(VarRef *& ref);
	bool & (*castBool)(VarRef *& ref);
	char & (*castChar)(VarRef *& ref);
	int8_t & (*castInt8)(VarRef *& ref);
	uint8_t & (*castUint8)(VarRef *& ref);
	int16_t & (*castInt16)(VarRef *& ref);
	uint16_t & (*castUint16)(VarRef *& ref);
	int32_t & (*castInt32)(VarRef *& ref);
	uint32_t & (*castUint32)(VarRef *& ref);
	int64_t & (*castInt64)(VarRef *& ref);
	uint64_t & (*castUint64)(VarRef *& ref);
	float & (*castFloat)(VarRef *& ref);
	double & (*castDouble)(VarRef *& ref);
	string & (*castString)(VarRef *& ref);
	vector<bool> & (*castListBool)(VarRef *& ref);
	vector<char> & (*castListChar)(VarRef *& ref);
	vector<int8_t> & (*castListInt8)(VarRef *& ref);
	vector<uint8_t> & (*castListUint8)(VarRef *& ref);
	vector<int16_t> & (*castListInt16)(VarRef *& ref);
	vector<uint16_t> & (*castListUint16)(VarRef *& ref);
	vector<int32_t> & (*castListInt32)(VarRef *& ref);
	vector<uint32_t> & (*castListUint32)(VarRef *& ref);
	vector<int64_t> & (*castListInt64)(VarRef *& ref);
	vector<uint64_t> & (*castListUint64)(VarRef *& ref);
	vector<float> & (*castListFloat)(VarRef *& ref);
	vector<double> & (*castListDouble)(VarRef *& ref);
	vector<string> & (*castListString)(VarRef *& ref);
	vector<var> & (*castListVar)(VarRef *& ref);
	unordered_map<int64_t, var> & (*castMapInt64Var)(VarRef *& ref);
	unordered_map<double, var> & (*castMapDoubleVar)(VarRef *& ref);
	unordered_map<string, var> & (*castMapStringVar)(VarRef *& ref);
	VarGetSet & (*castVarGetSet)(VarRef *& ref);
	function<void()> & (*castFunctionVoid0)(VarRef *& ref);
	function<void(var)> & (*castFunctionVoid1)(VarRef *& ref);
	function<void(var, var)> & (*castFunctionVoid2)(VarRef *& ref);
	function<void(var, var, var)> & (*castFunctionVoid3)(VarRef *& ref);
	function<void(var, var, var, var)> & (*castFunctionVoid4)(VarRef *& ref);
	function<void(var, var, var, var, var)> & (*castFunctionVoid5)(VarRef *& ref);
	function<void(var, var, var, var, var, var)> & (*castFunctionVoid6)(VarRef *& ref);
	function<void(var, var, var, var, var, var, var)> & (*castFunctionVoid7)(VarRef *& ref);
	function<void(var, var, var, var, var, var, var, var)> & (*castFunctionVoid8)(VarRef *& ref);
	function<void(var, var, var, var, var, var, var, var, var)> & (*castFunctionVoid9)(VarRef *& ref);
	function<void(var, var, var, var, var, var, var, var, var, var)> & (*castFunctionVoid10)(VarRef *& ref);
	function<var()> & (*castFunctionVar0)(VarRef *& ref);
	function<var(var)> & (*castFunctionVar1)(VarRef *& ref);
	function<var(var, var)> & (*castFunctionVar2)(VarRef *& ref);
	function<var(var, var, var)> & (*castFunctionVar3)(VarRef *& ref);
	function<var(var, var, var, var)> & (*castFunctionVar4)(VarRef *& ref);
	function<var(var, var, var, var, var)> & (*castFunctionVar5)(VarRef *& ref);
	function<var(var, var, var, var, var, var)> & (*castFunctionVar6)(VarRef *& ref);
	function<var(var, var, var, var, var, var, var)> & (*castFunctionVar7)(VarRef *& ref);
	function<var(var, var, var, var, var, var, var, var)> & (*castFunctionVar8)(VarRef *& ref);
	function<var(var, var, var, var, var, var, var, var, var)> & (*castFunctionVar9)(VarRef *& ref);
	function<var(var, var, var, var, var, var, var, var, var, var)> & (*castFunctionVar10)(VarRef *& ref);
	//equals
	void(*equalsBool)(VarRef*& ref, bool d);
	void(*equalsChar)(VarRef*& ref, char d);
	void(*equalsInt8)(VarRef*& ref, int8_t d);
	void(*equalsUint8)(VarRef*& ref, uint8_t d);
	void(*equalsInt16)(VarRef*& ref, int16_t d);
	void(*equalsUint16)(VarRef*& ref, uint16_t d);
	void(*equalsInt32)(VarRef*& ref, int32_t d);
	void(*equalsUint32)(VarRef*& ref, uint32_t d);
	void(*equalsInt64)(VarRef*& ref, int64_t d);
	void(*equalsUint64)(VarRef*& ref, uint64_t d);
	void(*equalsFloat)(VarRef*& ref, float d);
	void(*equalsDouble)(VarRef*& ref, double d);
	void(*equalsString)(VarRef*& ref, string d);
	void(*equalsFunctionVoid0)(VarRef*& ref, function<void()> d);
	void(*equalsFunctionVoid1)(VarRef*& ref, function<void(var)> d);
	void(*equalsFunctionVoid2)(VarRef*& ref, function<void(var, var)> d);
	void(*equalsFunctionVoid3)(VarRef*& ref, function<void(var, var, var)> d);
	void(*equalsFunctionVoid4)(VarRef*& ref, function<void(var, var, var, var)> d);
	void(*equalsFunctionVoid5)(VarRef*& ref, function<void(var, var, var, var, var)> d);
	void(*equalsFunctionVoid6)(VarRef*& ref, function<void(var, var, var, var, var, var)> d);
	void(*equalsFunctionVoid7)(VarRef*& ref, function<void(var, var, var, var, var, var, var)> d);
	void(*equalsFunctionVoid8)(VarRef*& ref, function<void(var, var, var, var, var, var, var, var)> d);
	void(*equalsFunctionVoid9)(VarRef*& ref, function<void(var, var, var, var, var, var, var, var, var)> d);
	void(*equalsFunctionVoid10)(VarRef*& ref, function<void(var, var, var, var, var, var, var, var, var, var)> d);
	void(*equalsFunctionVar0)(VarRef*& ref, function<var()> d);
	void(*equalsFunctionVar1)(VarRef*& ref, function<var(var)> d);
	void(*equalsFunctionVar2)(VarRef*& ref, function<var(var, var)> d);
	void(*equalsFunctionVar3)(VarRef*& ref, function<var(var, var, var)> d);
	void(*equalsFunctionVar4)(VarRef*& ref, function<var(var, var, var, var)> d);
	void(*equalsFunctionVar5)(VarRef*& ref, function<var(var, var, var, var, var)> d);
	void(*equalsFunctionVar6)(VarRef*& ref, function<var(var, var, var, var, var, var)> d);
	void(*equalsFunctionVar7)(VarRef*& ref, function<var(var, var, var, var, var, var, var)> d);
	void(*equalsFunctionVar8)(VarRef*& ref, function<var(var, var, var, var, var, var, var, var)> d);
	void(*equalsFunctionVar9)(VarRef*& ref, function<var(var, var, var, var, var, var, var, var, var)> d);
	void(*equalsFunctionVar10)(VarRef*& ref, function<var(var, var, var, var, var, var, var, var, var, var)> d);
	void(*equalsVar[55])(VarRef*&ref1, VarRef*&ref2);
	//end equals
	//opSquare []
	bool & (*opBoolSqInt64)(VarRef *& ref, int64_t i);
	char & (*opCharSqInt64)(VarRef *& ref, int64_t i);
	int8_t & (*opInt8SqInt64)(VarRef *& ref, int64_t i);
	uint8_t & (*opUint8SqInt64)(VarRef *& ref, int64_t i);
	int16_t & (*opInt16SqInt64)(VarRef *& ref, int64_t i);
	uint16_t & (*opUint16SqInt64)(VarRef *& ref, int64_t i);
	int32_t & (*opInt32SqInt64)(VarRef *& ref, int64_t i);
	uint32_t & (*opUint32SqInt64)(VarRef *& ref, int64_t i);
	int64_t & (*opInt64SqInt64)(VarRef *& ref, int64_t i);
	uint64_t & (*opUint64SqInt64)(VarRef *& ref, int64_t i);
	float & (*opFloatSqInt64)(VarRef *& ref, int64_t i);
	double & (*opDoubleSqInt64)(VarRef *& ref, int64_t i);
	string & (*opStringSqInt64)(VarRef *& ref, int64_t i);
	var & (*opVarSqInt64)(VarRef *& ref, int64_t i);
	var & (*opVarSqDouble)(VarRef *& ref, double i);
	var & (*opVarSqString)(VarRef *& ref, string i);
	//end opSq []
	//list add and map set
	void (*addBoolListItem)(VarRef *& ref, bool d);
	void (*addCharListItem)(VarRef *& ref, char d);
	void (*addInt8ListItem)(VarRef *& ref, int8_t d);
	void (*addUint8ListItem)(VarRef *& ref, uint8_t d);
	void (*addInt16ListItem)(VarRef *& ref, int16_t d);
	void (*addUint16ListItem)(VarRef *& ref, uint16_t d);
	void (*addInt32ListItem)(VarRef *& ref, int32_t d);
	void (*addUint32ListItem)(VarRef *& ref, uint32_t d);
	void (*addInt64ListItem)(VarRef *& ref, int64_t d);
	void (*addUint64ListItem)(VarRef *& ref, uint64_t d);
	void (*addFloatListItem)(VarRef *& ref, float d);
	void (*addDoubleListItem)(VarRef *& ref, double d);
	void (*addStringListItem)(VarRef *& ref, string d);
	void (*addVarListItem)(VarRef *& ref, var d);
	void (*setMapItemInt64)(VarRef *& ref, int64_t k, var v);
	void (*setMapItemDouble)(VarRef *& ref, double k, var v);
	void (*setMapItemString)(VarRef *& ref, string k, var v);
	//end list add and map set
	//getter setter
	void (*getter)(VarRef *& ref, function<var()> func);
	void (*setter)(VarRef *& ref, function<void(var)> func);
	void (*getterSetter)(VarRef *& ref, function<var()> funcg, function<void(var)> funcs);
	//end getter setter
	var (*callFunction)(VarRef *& ref, var args[10]);

	void (*coutVar)(VarRef*&ref, ostream & out);
///start operators
	VarOperators(
		void (*_newVar)(VarRef * & ref),
		//void (*_newVarAtType[55])(VarRef *& ref),
		void (*_reset)(VarRef * & ref),
		VarType (*_varType)()
	)
	{
		newVar = _newVar;
		//newVarAtType =  (	void (*[55])(VarRef *& ref)) _newVarAtType;
		reset = _reset;
		varType = _varType;
	}
///end operators



};

#endif
