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


var BaseDom()
{
	var o;
	o.m("display", "inline-block")
	.m("offsettop", 0)
	.m("offsetleft", 0);
	return o;
}

int main()
{
	try
	{
		cout << "start \r\n";
		double d1 =0.0;
		for(int i = 0; i < 10000000; i++)
		{
			d1 = d1 * i + 1;
		}
		cout << "end \r\n";

		cout << "start \r\n";
		var d2 =0.0;
		int count = 0;
		for(var i = 0; i < 10000000; i++)
		{
			d2 = d2 * i + 1;
			/*count++;
			if(count > 10000)
			{
				cout << i el;
				count = 0;
			}*/
		}
		cout << "end \r\n";
	}
	catch(Exception ex)
	{
		cout << ex;
	}


	return 0;
}
