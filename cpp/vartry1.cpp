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

	static void screatenone(Ref * & ref)
	{
		static string undefined = "undefined";
		ref->tname = & undefined;
	}
	static void sclearnone(Ref *& ref)
	{
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
		};



	var()
	{
		ref = new Ref();
		ref->create = screatenone;
		ref->clear = sclearnone;
	}

	template<typename A>
	var(const A & a)
	{
		static int64_t stype = typeid(A).hash_code();

		ref = new Ref;
		ref->create = screate<A>;
		ref->clear = sclear<A>;
		ref->create(ref);
		*((A*)ref->d) = a;
	}

	var (const char * a)
	{
		static int64_t stype = typeid(string).hash_code();
		ref = new Ref;
		ref->create = screate<string>;
		ref->clear = sclear<string>;
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


};

#define varfunc(R, ...) (function<R(__VA_ARGS__)>)[&](__VA_ARGS__)->R
#define umap unordered_map
#define obvar(T, V)  var::Observer<string>("relative")

class Dom
{
	public:
	var dom = (unordered_map<string, var>)
	{
		{"attr", unordered_map<string, var>()},
		{"position", var::Observer<string>("relative")},
		{"top", var::Observer<int>(0)},
		{"left", var::Observer<int>(0)}
	};

	Dom()
	{
		dom["position"].subscribe(varfunc(void, string v)
		{
			cout << "position has changed" el;
		});
	}

	var & operator[](string k)
	{
		return dom[k];
	}

	template<typename A>
	Dom & operator()(string k, const A & v)
	{
		dom[k] = v;
		return *this;
	}

	Dom & operator()(string k, const char * v)
	{
		dom[k] = v;
		return *this;
	}

};

class msgc
{
	struct node
	{
		int64_t t;
		void * v;
	};
	static umap<string, umap<uint64_t, node> > funclist;
	public:
	template<typename ... ARGS>
	static void subscribe(string path, function<void(ARGS...)> func)
	{
		static int64_t stype = typeid(function<void(ARGS...)>).hash_code();

		node & n = funclist[path][(uint64_t)&func];
		n.t = stype;
		n.v = &func;
	}
	template<typename ... ARGS>
	static void send(string path, ARGS ... args)
	{
		static int64_t stype = typeid(function<void(ARGS...)>).hash_code();
		 umap<uint64_t, node> & mm = funclist[path];
		 for(auto i : mm)
		 {
			 	if(i.second.t == stype)
				{
				  function<void(ARGS...)> & func = *(function<void(ARGS...)>*)i.second.v;
					func(args...);
				}
		 }

	}
};
umap<string, umap<uint64_t, msgc::node> > msgc::funclist;

int main()
{

	msgc::subscribe("try1", varfunc(void, int i1,  string str1)
	{
		cout << "i1: " << i1 el;
		cout << "str1 " << str1 el;
	});

	msgc::send("try1", 123, (string)"hiaasdf");

	var v1 = (umap<string, var>)
	{
		{"title", obvar(string, "asdf")},
		{"w", 123.0},
		{"children", (vector<var>)
			{123, "asdff", 3433, 3333}
		},
		{"init", varfunc(void)
			{
				cout << "init" el;
			}
		}
	};

	cout << (string&)v1["children"][1] el;
	cout << v1["children"].typeName() el;
	v1["title"].subscribe(varfunc(void, string v)
	{
		cout << "tilte has changed to: " << v el;
	});
	v1["title"] = "asdfffffffff";
	return 0;
}
