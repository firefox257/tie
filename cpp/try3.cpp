
#include <iostream>
#include <stdint.h>
#include <string>
#include <unordered_map>
#include <map>
#include <vector>
#include <list>
#include <functional>
#include "var.cpp"
using namespace std;
#define el << "\r\n"


class try1
{

public:
	try1()
	{

	}
};


try1 & operator +(try1 & t1, int i1)
{
	cout<< "plus operator extended " el;
	return t1;
}

int main()
{
	try1 t1;
	t1 = t1 + 333;

	var v1 = (umapvar)
	{
		{"title", "thi is a title"},
		{"func",
		funcvar(void, int i1)
		{
			cout << "i1: " << i1 el;
		}},
		{"i1", (umapvar)
			{
				{"func2",
				funcvar(void)
				{
					cout << "func2" el;
				}},

			}
		}

	};

	v1["i1"]["func2"].call<void>();

	return 0;
}
