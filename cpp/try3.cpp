
#include <iostream>
#include <stdint.h>
#include <string>
#include <unordered_map>
#include <map>
#include <vector>
#include <list>
#include <functional>
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


	return 0;
}
