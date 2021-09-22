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
		v = varfunc(var)
		{
			cout << "here1" el;
			return "hi rthe";
		};
		cout << v() el;
	}
	catch(Exception ex)
	{
		cout << "file: " << ex.FileName << " line: " << ex.LineNumber << " " << ex.Message el;
	}


	return 0;
}
