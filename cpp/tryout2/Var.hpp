#ifndef VAR_HPP
#define VAR_HPP
#include <string>
#include <vector>
#include <unordered_map>
#include <functional>

#include "VarType.hpp"
#include "VarRef.hpp"
#include "Exception.hpp"
#define notimplemented throw Exception("Not implemented",__FILE__, __LINE__)

struct VarOperators;
class var
{
	VarOperators * op = 0;
	VarRef * ref = 0;
public:
	var();

};
#include "VarOperators.hpp"

#endif
