#include <iostream>
#include <string>
#include <stdint.h>
#include <vector>
#include <unordered_map>
using namespace std;
#define el << "\r\n"


#include "Exception.cpp"
#include "Var.hpp"
#include "Var.cpp"


#define varfunc(R, ...) (function<R(__VA_ARGS__)>)[&](__VA_ARGS__)->R

int main()
{
	try
	{
		var v;
		v.m("bla", var()
			.gs(
				varfunc(var)
				{
					cout << "getting" el;
					return 123;
				},
				varfunc(void, var v)
				{
					cout << "setting " << v el;
				}
			)
		);

		v["bla"] = 125;
		var vv = v["bla"];
		cout << vv el;

		v["bla"] = VarType::Undefined;
		v["bla"] = "hi";
		cout << v["bla"] el;
	}
	catch(Exception ex)
	{
		cout << "file: " << ex.FileName << " line: " << ex.LineNumber << " " << ex.Message el;
	}


	return 0;
}
