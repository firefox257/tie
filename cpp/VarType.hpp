#ifndef VARTYPE_HPP
#define VARTYPE_HPP

#include <string>
using namespace std;
class VarType
{
	public:
	enum Types
	{
		Undefined,
		Bool,
		Uint8,
		Int8,
		Uint16,
		Int16,
		Uint32,
		Int32,
		Uint64,
		Int64,
		Float,
		Double,
		String,
		List,
		Map,
		Function,
		GetSet
	};
};
string  VarTypeName(VarType::Types t)
{
	switch (t)
	{
		case VarType::Undefined:
			return "Undefined";
		case VarType::Bool:
			return "Bool";
		case VarType::Uint8:
			return "Uint8";
		case VarType::Int8:
			return "Int8";
		case VarType::Uint16:
			return "Uint16";
		case VarType::Int16:
			return "Int16";
		case VarType::Uint32:
			return "Uint32";
		case VarType::Int32:
			return "Int32";
		case VarType::Uint64:
			return "Uint64";
		case VarType::Int64:
			return "Int64";
		case VarType::Float:
			return "Float";
		case VarType::Double:
			return "Double";
		case VarType::String:
			return "String";
		case VarType::List:
			return "List";
		case VarType::Map:
			return "Map";
		case VarType::Function:
			return "Function";
		case VarType::GetSet:
			return "GetSet";
	};

}


#endif
