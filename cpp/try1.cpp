#include <iostream>
#include <stdint.h>
#include <string>
#include <unordered_map>
#include <map>
#include <vector>
#include <list>
#include <functional>
#include <type_traits>
using namespace std;
#define el << "\r\n"





class try1
{
	public:
	try1()
	{

	}

};


ostream & operator << (ostream & os, try1 t1)
{
	cout << "try1";
	return os;
}




int main()
{
	try1 t1;
	cout << t1;


	return 0;
}
