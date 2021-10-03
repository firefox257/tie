#ifndef EXCEPTION_CPP
#define EXCEPTION_CPP

#include <iostream>
#include <string>
using namespace std;



struct Exception
{
	string Message;
	string FileName;
	int LineNumber;
	Exception(string msg = "", string fileName = "", int lineNumber = -1)
	{
		Message = msg;
		FileName = fileName;
		LineNumber = lineNumber;
	}
	friend ostream & operator << (ostream & out, const Exception ex)
	{
		cout << ex.FileName << " " << ex.LineNumber << ": " << ex.Message << "\r\n";
		return out;
	}
};


#endif
