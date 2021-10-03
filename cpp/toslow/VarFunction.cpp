#ifndef VARFUNCTION_CPP
#define VARFUNCTION_CPP

#include "VarFunction.hpp"

#define BASE VarFunction



void BASE::ThrowNotImplemented(string file, int line)
{
	throw Exception("var map Not implmented.", file, line);
}
void BASE::ThrowException(string file, int line, string msg)
{
	throw Exception("var map " + msg, file, line);
}

//public:
VarType::Types BASE::Type()
{
	static const VarType::Types t = VarType::Map;
	return t;
}

BASE::BASE()
{

}
BASE::~BASE()
{
	if(funcptr != 0)
	{
		delete((function<void()>*)funcptr);
	}
}
//function
BASE::BASE(function<void()> func)
{
	funcptr = new function<void()>();
	(*((function<void()>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void()>*)ptr))();
		return var();
	};
}
BASE::BASE(function<void(var)> func)
{
	funcptr = new function<void(var)>();
	(*((function<void(var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var)>*)ptr))(args[0]);
		return var();
	};
}
BASE::BASE(function<void(var, var)> func)
{
	funcptr = new function<void(var, var)>();
	(*((function<void(var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var)>*)ptr))(args[0], args[1]);
		return var();
	};
}
BASE::BASE(function<void(var, var, var)> func)
{
	funcptr = new function<void(var, var, var)>();
	(*((function<void(var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var)>*)ptr))(args[0], args[1], args[2]);
		return var();
	};
}
BASE::BASE(function<void(var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var)>();
	(*((function<void(var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3]);
		return var();
	};
}
BASE::BASE(function<void(var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4]);
		return var();
	};
}
BASE::BASE(function<void(var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5]);
		return var();
	};
}
BASE::BASE(function<void(var, var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6]);
		return var();
	};
}
BASE::BASE(function<void(var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
		return var();
	};
}
BASE::BASE(function<void(var, var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8]);
		return var();
	};
}
BASE::BASE(function<void(var, var, var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9]);
		return var();
	};
}
////////////////////////////
BASE::BASE(function<var()> func)
{
	funcptr = new function<var()>();
	(*((function<var()>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var()>*)ptr))();
	};
}
BASE::BASE(function<var(var)> func)
{
	funcptr = new function<var(var)>();
	(*((function<var(var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var)>*)ptr))(args[0]);
	};
}
BASE::BASE(function<var(var, var)> func)
{
	funcptr = new function<var(var, var)>();
	(*((function<var(var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var)>*)ptr))(args[0], args[1]);
	};
}
BASE::BASE(function<var(var, var, var)> func)
{
	funcptr = new function<var(var, var, var)>();
	(*((function<var(var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var)>*)ptr))(args[0], args[1], args[2]);
	};
}
BASE::BASE(function<var(var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var)>();
	(*((function<var(var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3]);
	};
}
BASE::BASE(function<var(var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4]);
	};
}
BASE::BASE(function<var(var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5]);
	};
}
BASE::BASE(function<var(var, var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6]);
	};
}
BASE::BASE(function<var(var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
	};
}
BASE::BASE(function<var(var, var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8]);
	};
}
BASE::BASE(function<var(var, var, var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9]);
	};
}
//end function
/*void BASE::CloneOrMapTo(VarBase * & ptr)
{
	asdf
	ptr = new VarFunction();

}*/
//function
void BASE::f(function<void()> func)
{
	funcptr = new function<void()>();
	(*((function<void()>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void()>*)ptr))();
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var)> func)
{
	funcptr = new function<void(var)>();
	(*((function<void(var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var)>*)ptr))(args[0]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var, var)> func)
{
	funcptr = new function<void(var, var)>();
	(*((function<void(var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var)>*)ptr))(args[0], args[1]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var, var, var)> func)
{
	funcptr = new function<void(var, var, var)>();
	(*((function<void(var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var)>*)ptr))(args[0], args[1], args[2]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var)>();
	(*((function<void(var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var, var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var, var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<void(var, var, var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<void(var, var, var, var, var, var, var, var, var, var)>();
	(*((function<void(var, var, var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		(*((function<void(var, var, var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9]);
		return var();
	};

	var args[] = {};
	datafunc(args, 0);
}
/////////////////
void BASE::f(function<var()> func)
{
	funcptr = new function<var()>();
	(*((function<var()>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var()>*)ptr))();
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var)> func)
{
	funcptr = new function<var(var)>();
	(*((function<var(var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var)>*)ptr))(args[0]);
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var, var)> func)
{
	funcptr = new function<var(var, var)>();
	(*((function<var(var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var)>*)ptr))(args[0], args[1]);
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var, var, var)> func)
{
	funcptr = new function<var(var, var, var)>();
	(*((function<var(var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var)>*)ptr))(args[0], args[1], args[2]);
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var)>();
	(*((function<var(var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3]);
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4]);
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5]);
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var, var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6]);
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var, var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8]);
	};

	var args[] = {};
	datafunc(args, 0);
}
void BASE::f(function<var(var, var, var, var, var, var, var, var, var, var)> func)
{
	funcptr = new function<var(var, var, var, var, var, var, var, var, var, var)>();
	(*((function<var(var, var, var, var, var, var, var, var, var, var)>*)funcptr)) = func;
	datafunc = [](var * args, void * ptr)-> var
	{
		return (*((function<var(var, var, var, var, var, var, var, var, var, var)>*)ptr))(args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9]);
	};

	var args[] = {};
	datafunc(args, 0);
}

var BASE::f(var * args, int count)
{
	return datafunc(args, funcptr);
}

//end function

void BASE::outstream(ostream & out)
{
	out << "VarMap";//data;
}



#endif
