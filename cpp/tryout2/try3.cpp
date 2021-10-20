#include<iostream>
#include<stdlib.h>
#include "var.cpp"
using namespace std;

#define el << "\r\n"

extern int i1;


int i1 = 123;



namespace try1
{

	int i2 = 124;
}

int main()
{
	cout << i1 el;
	cout << try1::i2 el;

  return 0;
}
