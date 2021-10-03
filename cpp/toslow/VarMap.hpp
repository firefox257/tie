#ifndef VARMAP_HPP
#define VARMAP_HPP


#include <iostream>
#include <functional>
#include <string>
#include <stdint.h>
#include <map>
#include "VarType.hpp"
#include "Exception.hpp"
#include "VarBase.hpp"
using namespace std;

#define BASE VarMap

class BASE: public VarBase
{
	map<string, var> data;

	class NativeObjectBase
	{
		public:

		virtual void * Get()
		{
			return 0;
		}
		virtual void Create()
		{

		}
		virtual void Delete()
		{

		}

	};

	template<typename A>
	class NativeObject: public NativeObjectBase
	{
		A * ptr = 0;
		public:
		NativeObject()
		{
			Create();
		}
		~NativeObject()
		{
			Delete();
		}
		virtual void * Get()
		{
			return ptr;
		}
		virtual void Create()
		{
			ptr = new A;
		}
		virtual void Delete()
		{
			delete(ptr);
			ptr = 0;
		}


	};
	NativeObjectBase * obj = 0;
	virtual void ThrowNotImplemented(string file, int line);
	virtual void ThrowException(string file, int line, string msg);

	public:
	virtual VarType::Types Type();

	BASE();
	~BASE();
	/////////////////////////
	//virtual void CloneOrMapTo(VarBase * & ptr);
	//map
	virtual void m(string n, var & v);
	virtual var & operator[](string i);
	//end map
	//native map functions for objects.
	template<typename A>
	void CreateObject();
	void * GetObject();
	bool HasObject();
	//end native map functions for objects.

	virtual void outstream(ostream & out);

};



#endif
