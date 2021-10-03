#include <iostream>
#include <unordered_map>
#include <map>
#include <stdint.h>
#include <string>
#include <vector>
#include <functional>
using namespace std;

#define el << "\r\n"

#define unimplemented throw "unimplemented"
#define todohere throw "todo"
#include "Var.cpp"

void func11(var v)
{
  cout << "in func11\r\n";
  v = 1222;
}
int main()
{
  try
  {
    var mm;
		mm
		.m("win", var()
			.m("title", "ima title")
			.m("width", 123)
			.m("height", 124)


		);

		cout << mm["win"]["title"] el;
  }
  catch(const char * msg)
  {
    cout << msg el;
  }

  cout << "done 2\r\n";
  return 0;
}
