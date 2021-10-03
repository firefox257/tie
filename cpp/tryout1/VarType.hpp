#ifndef VARTYPE_HPP
#define VARTYPE_HPP

/*
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
*/

enum class VarType
{
  Undefined,
  Bool,
  Char,
  Int8,
  Uint8,
  Int16,
  Uint16,
  Int32,
  Uint32,
  Int64,
  Uint64,
  Float,
  Double,
  String,
  List,
  Map,
  GetSet,
  Function
};

const char * VarTypeName(VarType t)
{
  switch(t)
  {
    case VarType::Undefined:
    return "Undefined";
    case VarType::Bool:
    return "Bool";
    case VarType::Char:
    return "Char";
    case VarType::Int8:
    return "Int8";
    case VarType::Uint8:
    return "Uint8";
    case VarType::Int16:
    return "Int16";
    case VarType::Uint16:
    return "Uint16";
    case VarType::Int32:
    return "Int32";
    case VarType::Uint32:
    return "Uint32";
    case VarType::Int64:
    return "Int64";
    case VarType::Uint64:
    return "Uint64";
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
    case VarType::GetSet:
    return "GetSet";
    case VarType::Function:
    return "Function";

  };
  return "";
}

#endif
