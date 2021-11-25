#ifndef VAR_CPP
#define VAR_CPP
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

class var;
vector<string> split (string s, string delimiter)
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;
    while ((pos_end = s.find (delimiter, pos_start)) != string::npos)
		{
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}
bool isInt(const string & str)
{
	int s = str.length();
	for( int i = 0; i < s; i++)
	{
		char c = str[i];
		if(c < '0'|| c >'9') return false;
	}

	return true;
}

template<typename A, typename B>
ostream & operator << (ostream & os, unordered_map<A, B> m)
{


	static string sname = typeid(unordered_map<A, B>).name();
	static string vname = typeid(unordered_map<string, var>).name();
	if(vname == sname) os << "(umap){";
	else os << "(" << sname << "){";
	for(auto i: m)
	{
		os << "{\"" << i.first << "\"," << i.second << "},";

	}
	os << "},";
	//cout << sname;
	return os;
}

template<typename A, typename B>
ostream & operator << (ostream & os, map<A, B> m)
{
	static string sname = typeid(map<A, B>).name();
	static string vname = typeid(map<string, var>).name();

	if(vname == sname) os << "(map){";
	else os << "(" << sname << "){";

	for(auto i: m)
	{
		os << "{\"" << i.first << "\"," << i.second << "},";

	}
	os << "},";
	//cout << sname;
	return os;
}



template<typename A>
ostream & operator << (ostream & os, vector<A> l)
{
	static string sname = typeid(vector<A>).name();
	static string vname = typeid(vector<var>).name();

	if(vname == sname) os << "(vectorvar){";
	else os << "(" << sname << "){";

	for(auto i: l)
	{
		os << i << ",";
	}
	os << "},";
	return os;
}

template<typename A>
ostream & operator << (ostream & os, list<A> l)
{
	static string sname = typeid(list<A>).name();
	static string vname = typeid(list<var>).name();

	if(vname == sname) os << "(listvar){";
	else os << "(" << sname << "){";
	for(auto i: l)
	{
		os << i << ",";
	}
	os << "},";
	return os;
}

template<typename R, typename ... ARGS>
ostream & operator << (ostream & os, function<R(ARGS...)> func)
{
	static string sname = typeid(function<R(ARGS...)>).name();
	cout << sname;
	return os;
}


class var
{
	class Ref
	{
		public:
		int refCount = 0;
		void * d = 0;
		void (*create)(Ref *& ref);
		void (*clear)(Ref *& ref);
		void (*addobserver)(Ref *& ref, void * func);
		void (*print)(ostream & os, Ref *& ref);
		int64_t t = 0;
		string * tname= 0;

	};
	Ref * ref = 0;

	template<typename A>
	static void screate(Ref * & ref)
	{
		static int64_t stype = typeid(A).hash_code();
		static string stypename = typeid(A).name();
		ref->d = new A;
		ref->t = stype;
		ref->tname = &stypename;
		ref->refCount = 1;
	}

	template<typename A>
	static void sclear(Ref *& ref)
	{
		int & count = ref->refCount;
		count--;
		if(count <= 0)
		{
			void * & d = ref->d;
			if(d != 0)
			{
				delete((A*)d);
				d = 0;
			}
			delete(ref);
			ref = 0;
		}
	}

	template<typename A>
	static void sprint(ostream & os, Ref *& ref)
	{
		os << *(A*)ref->d;
	}

	static void screatenone(Ref * & ref)
	{
		static string undefined = "undefined";
		ref->tname = & undefined;
	}
	static void sclearnone(Ref *& ref)
	{
	}

	static void sprintnone(ostream & os, Ref * & ref)
	{
		os << "undefined";
	}

	public:
		template<typename A>
		class Observer
		{
			public:
			list<function<void(const A & a)>> funclist;
			A data;
			Observer()
			{

			}
			Observer(const A & a)
			{
				data = a;
			}
			friend ostream & operator << (ostream & os, var::Observer<A> ob)
			{
				os << ob.data;
				return os;
			}
		};

		template<typename A>
		class GetSet
		{
			public:
			function<A & ()> get;
			function<void (const A &)> set;
			GetSet()
			{

			}
			GetSet(function<A & ()> g, function<void (const A &)> s)
			{
				get = g;
				set = s;
			}
			friend ostream & operator << (ostream & os, var::GetSet<A> gs)
			{
				os << gs.get();
				return os;
			}
		};



	var()
	{
		ref = new Ref();
		ref->create = screatenone;
		ref->clear = sclearnone;
		ref->print = sprintnone;
	}

	template<typename A>
	var(const A & a)
	{
		static int64_t stype = typeid(A).hash_code();

		ref = new Ref;
		ref->create = screate<A>;
		ref->clear = sclear<A>;
		ref->print = sprint<A>;
		ref->create(ref);
		*((A*)ref->d) = a;
	}

	var (const char * a)
	{
		static int64_t stype = typeid(string).hash_code();
		ref = new Ref;
		ref->create = screate<string>;
		ref->clear = sclear<string>;
		ref->print = sprint<string>;
		ref->create(ref);
		*((string*)ref->d) = a;
	}

	var(const var & v)
	{
		ref = v.ref;
		ref->refCount++;
	}
	void clear()
	{
		ref->clear(ref);
	}
	~var()
	{
		clear();
	}

	template<typename A>
	operator A&()
	{
		static int64_t stype = typeid(A).hash_code();
		static int64_t obtype = typeid(Observer<A>).hash_code();
		static int64_t gstype = typeid(GetSet<A>).hash_code();
		if(ref->t == obtype)
		{
			Observer<A> & ob = *(Observer<A>*)ref->d;
			return ob.data;
		}
		else if(ref->t == gstype)
		{
			GetSet<A> & gs = *(GetSet<A>*)ref->d;
			return gs.get();
		}
		else
		{
			if(ref->t != stype) throw "not same type";
			return *((A*)ref->d);
		}
	}

	template<typename A>
	var & operator = (const A & a)
	{
		static int64_t stype = typeid(A).hash_code();
		static int64_t obtype = typeid(Observer<A>).hash_code();
		static int64_t gstype = typeid(GetSet<A>).hash_code();

		if(ref->d == 0)
		{
			ref->create = screate<A>;
			ref->clear = sclear<A>;
			ref->print = sprint<A>;
			ref->create(ref);
			*((A*)ref->d) = a;
		}
		else if(ref->t == obtype)
		{
			Observer<A> & ob = *(Observer<A>*)ref->d;
			ob.data = a;
			int size = ob.funclist.size();
			for(function<void(A)> func : ob.funclist)
			{
				func(a);
			}

		}
		else if(ref->t == gstype)
		{
			GetSet<A> & gs = *(GetSet<A>*)ref->d;
			gs.set(a);
		}
		else
		{
			if(ref->t != stype) throw "not same type";
			*((A*)ref->d) = a;
		}
		return *this;
	}


	var & operator = (const char * a)
	{
		static int64_t stype = typeid(string).hash_code();
		static int64_t obtype = typeid(Observer<string>).hash_code();
		static int64_t gstype = typeid(GetSet<string>).hash_code();

		if(ref->d == 0)
		{
			ref->create = screate<string>;
			ref->clear = sclear<string>;
			ref->print = sprint<string>;
			ref->create(ref);
			*((string*)ref->d) = a;
		}
		else if(ref->t == obtype)
		{
			Observer<string> & ob = *(Observer<string>*)ref->d;
			ob.data = a;
			int size = ob.funclist.size();
			for(function<void(string)> func : ob.funclist)
			{
				func(a);
			}

		}
		else if(ref->t == gstype)
		{
			GetSet<string> & gs = *(GetSet<string>*)ref->d;
			gs.set(a);
		}
		else
		{
			if(ref->t != stype) throw "not same type";
			*((string*)ref->d) = a;
		}
		return *this;
	}

	var & operator = (const var & v)
	{
		clear();
		ref = v.ref;
		ref->refCount++;
		return *this;
	}

	//special functions
	template<typename A>
	var & subscribe(function<void(A)> func)
	{
		static int64_t stype = typeid(Observer<A>).hash_code();
		if(ref->t != stype) throw "not an observer object";
		Observer<A> & ob = *(Observer<A>*)ref->d;
		ob.funclist.push_back(func);
		return *this;
	}

	template<typename R, typename ... ARGS>
	R call(ARGS... args)
	{
		static int64_t stype = typeid(function<R(ARGS...)>).hash_code();
		static int64_t voidtype = typeid(void).hash_code();

		int64_t rtype = typeid(R).hash_code();

		if(ref->t != stype) throw "not an function or not the correct function paramaters";
		function<R(ARGS...)> & func = *(function<R(ARGS...)>*)ref->d;
		if(rtype == voidtype)
		{
			func(args...);
		}
		else
		{
			return func(args...);
		}
	}
	string typeName()
	{
		return *ref->tname;
	}

  int64_t typeCode()
  {
    return ref->t;
  }
	//list or vecotrs
	var & operator[](int k)
	{
		static int64_t vtype = typeid(vector<var>).hash_code();
		static int64_t ltype = typeid(list<var>).hash_code();
		if(ref->t != vtype && ref->t != ltype) throw "not a vector<var> or a list<var> type.";
		if(ref->t == vtype)
		{
			vector<var> & m = *(vector<var>*)ref->d;
			return m[k];
		}
		list<var> & um = *(list<var>*)ref->d;
		list<var>::iterator it = um.begin();
		 for(int i=0; i<k; i++)
		 {
				 ++it;
		 }
		 return *it;
	}

	var & operator[](string k)
	{
		static int64_t mtype = typeid(map<string, var>).hash_code();
		static int64_t umtype = typeid(unordered_map<string, var>).hash_code();
		if(ref->t != mtype && ref->t != umtype) throw "not a map<string, var> or a unordered_map<string, var> type.";


		if(ref->t == mtype)
		{
			map<string, var> & m = *(map<string, var>*)ref->d;
			return m[k];
		}

		unordered_map<string, var> & um = *(unordered_map<string, var>*)ref->d;
		return um[k];
	}

	template<typename A>
	bool isType()
	{
		static int64_t stype = typeid(A).hash_code();
		return ref->t == stype;
	}


	var at(string p)
	{
		var ptr= (*this);

		auto pp = split(p, ".");
		int s = pp.size();
		for(int i = 0; i < s; i++)
		{
			if (ptr.isType<map<string, var>>() || ptr.isType<unordered_map<string, var>>())
			{
				ptr = ptr[pp[i]];
			}
			else if((ptr.isType<vector<var>>() || ptr.isType<list<var>>()) && isInt(pp[i]) )
			{
				int index = stoi(pp[i]);
				ptr = ptr[index];
			}
			else
			{
				throw "no path";
			}
		}

		return ptr;
	}

  private:
  void printoutumap(ostream & os, string tabs, unordered_map<string, var> & m)
  {
    for(auto i : m)
    {
      os << tabs << "{" << "\"" << i.first << "\",";
      var vv = i.second;
      if(vv.isType<unordered_map<string, var>>())
      {
        os << "(umapvar){\r\n";
        string tabs1 = tabs + "\t";
        printoutumap(os, tabs1, vv);
        os << tabs << "}},\r\n";
      }
      else if(vv.isType<map<string, var>>())
      {
        os <<  "(mapvar){\r\n";
        string tabs1 = tabs + "\t";
        printoutmap(os, tabs1, vv);
        os << tabs << "}},\r\n";
      }
      else if(vv.isType<vector<var>>())
      {
        os << "(vectorvar){\r\n";
        string tabs1 = tabs + "\t";
        printoutvector(os, tabs1, vv);
        os << tabs << "}},\r\n";
      }
      else if(vv.isType<vector<var>>())
      {
        os << "(listvar){\r\n";
        string tabs1 = tabs + "\t";
        printoutvector(os, tabs1, vv);
        os << tabs << "}},\r\n";
      }
      else
      {

        if(vv.isType<string>())
        {


          os<< " \"" << i.second << "\"},\r\n";
        }
        else os << " " << i.second << "},\r\n";
      }

    }

  }

  void printoutmap(ostream & os, string tabs, map<string, var> & m)
  {
    for(auto i : m)
    {
      os << tabs << "{" << "\"" << i.first << "\",";
      var vv = i.second;
      if(vv.isType<unordered_map<string, var>>())
      {
        os << "(umapvar){\r\n";
        string tabs1 = tabs + "\t";
        printoutumap(os, tabs1, vv);
        os << tabs << "}},\r\n";
      }
      else if(vv.isType<map<string, var>>())
      {
        os <<  "(mapvar){\r\n";
        string tabs1 = tabs + "\t";
        printoutmap(os, tabs1, vv);
        os << tabs << "}},\r\n";
      }
      else if(vv.isType<vector<var>>())
      {
        os << "(vectorvar){\r\n";
        string tabs1 = tabs + "\t";
        printoutvector(os, tabs1, vv);
        os << tabs << "}},\r\n";
      }
      else if(vv.isType<list<var>>())
      {
        os << "(listvar){\r\n";
        string tabs1 = tabs + "\t";
        printoutlist(os, tabs1, vv);
        os << tabs << "}},\r\n";
      }
      else
      {

        if(vv.isType<string>())
        {


          os<< " \"" << i.second << "\"},\r\n";
        }
        else os << " " << i.second << "},\r\n";
      }

    }

  }

  void printoutvector(ostream & os, string tabs, vector<var> l)
  {

    for(auto i: l)
    {
      if(i.isType<unordered_map<string, var>>())
      {
        os << tabs <<  "(umapvar)\r\n";
        os << tabs << "{\r\n";
        string tabs1 = tabs + "\t";
        printoutumap(os, tabs1, i);
        os << tabs << "},\r\n";
      }
      else if(i.isType<map<string, var>>())
      {
        os << tabs <<  "(mapvar)\r\n";
        os << tabs << "{\r\n";
        string tabs1 = tabs + "\t";
        printoutmap(os, tabs1, i);
        os << tabs << "},\r\n";
      }
      else if(i.isType<vector<var>>())
      {
        os << tabs << "(vectorvar)\r\n";
        os << tabs << "{\r\n";
        string tabs1 = tabs + "\t";
        printoutvector(os, tabs1, i);
        os << tabs << "},\r\n";
      }
      else if(i.isType<list<var>>())
      {
        os << tabs << "(listvar)\r\n";
        os << tabs << "{\r\n";
        string tabs1 = tabs + "\t";
        printoutlist(os, tabs1, i);
        os << tabs << "},\r\n";
      }
      else if(i.isType<string>())
      {
        os << tabs << "\""<< i << "\",\r\n";
      }
      else
      {
        os << tabs << i << ",\r\n";
      }
    }

  }

  void printoutlist(ostream & os, string tabs, list<var> l)
  {
    for(auto i: l)
    {
      if(i.isType<unordered_map<string, var>>())
      {
        os << tabs << "(umapvar)\r\n";
        os << tabs << "{\r\n";
        string tabs1 = tabs + "\t";
        printoutumap(os, tabs1, i);
        os << tabs << "},\r\n";
      }
      else if(i.isType<map<string, var>>())
      {
        os << tabs << "(mapvar)\r\n";
        os << tabs << "{\r\n";
        string tabs1 = tabs + "\t";
        printoutmap(os, tabs1, i);
        os << tabs << "},\r\n";
      }
      else if(i.isType<vector<var>>())
      {
        os << tabs << "(vectorvar)\r\n";
        os << tabs << "{\r\n";
        string tabs1 = tabs + "\t";
        printoutvector(os, tabs1, i);
        os << tabs << "},\r\n";
      }
      else if(i.isType<list<var>>())
      {
        os << tabs << "(listvar)\r\n";
        os << tabs << "{\r\n";
        string tabs1 = tabs + "\t";
        printoutlist(os, tabs1, i);
        os << tabs << "},\r\n";
      }
      else if(i.isType<string>())
      {
        os << tabs << "\""<< i << "\",\r\n";
      }
      else
      {
        os << tabs << i << ",\r\n";
      }
    }

  }


  public:
	friend ostream & operator << (ostream & os, var v)
	{
    //static int64_t umaptype = typeid(unordered_map<string, var>).hash_code();
    //static int64_t maptype = typeid(map<string, var>).hash_code();
    if(v.isType<unordered_map<string, var>>())
    {
      os << "(umapvar)\r\n{";
      string tabs = "\t";

      v.printoutumap(os, tabs, v);
      os << "}\r\n";
    }
    else if(v.isType<map<string, var>>())
    {
      os << "(mapvar)\r\n{";
      string tabs = "\t";
      v.printoutmap(os, tabs, v);
      os << "}\r\n";
    }
    else if(v.isType<vector<var>>())
    {
      os << "(vectorvar)\r\n{";
      string tabs = "\t";
      v.printoutvector(os, tabs, v);
      os << "}\r\n";
    }
    else
    {
      v.ref->print(os, v.ref);
    }
		return os;
	}
};

#define funcvar(R, ...) (function<R(__VA_ARGS__)>)[&](__VA_ARGS__)->R
#define umap unordered_map
#define obvar(T, V)  var::Observer<string>("relative")
#define gsvar(T, G, S) var::GetSet<T>(\
	varfunc(T &)\
	G, \
	varfunc(void, const T & v)\
	S\
);
#define umapvar umap<string, var>
#define vectorvar vector<var>
#define mapvar map<string, var>
#define listvar list<var>


#endif
