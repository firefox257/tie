#include <iostream>
#include <stdint.h>
#include <string>
#include <unordered_map>
#include <vector>
#include <functional>
using namespace std;


#define umap unordered_map


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
bool IsIntNumber(string & s)
{
	int size = s.length();
	for(int i = 0; i < size; i++)
	{
		char c = s[i];
		if(c < '0' || c > '9' ) return false;
	}
	return true;
}

template<typename VAR>
class GetSet
{
	function<VAR ()> get;
	function<void(VAR v)> set;
public:
	GetSet()
	{

	}
	GetSet(function<VAR()> g, function<void(VAR v)> s)
	{
		get = g;
		set = s;
	}

	VAR & operator = (const char * str)
	{
		set((string)str);
		return get();
	}

	template<typename A>
	VAR operator = (A v)
	{
		set(v);
		return get();
	}

	template<typename A>
	operator A ()
	{
		return get();
	}

	friend ostream & operator << (ostream & out, GetSet<VAR> v)
	{
		out << v.get();
		return out;
	}

};

template<typename VAR>
class Get
{
	function<VAR ()> get;
public:
	Get()
	{

	}
	Get(function<VAR()> g)
	{
		get = g;
	}

	template<typename A>
	operator A ()
	{
		return get();
	}

	friend ostream & operator << (ostream & out, Get<VAR> v)
	{
		out << v.get();
		return out;
	}
};

template<typename VAR>
class Set
{
	function<void(VAR v)> set;
public:
	Set()
	{

	}
	Set(function<void(VAR v)> s)
	{
		set = s;
	}

	const char * operator = (const char * str)
	{
		set((string)str);
		return str;
	}

	template<typename A>
	A operator = (A v)
	{
		set(v);
		return v;
	}

	friend ostream & operator << (ostream & out, Set<VAR> v)
	{
		out << "Setter";
		return out;
	}

};


class varef
{
public:
	void * d = 0;
	int count = 0;
	size_t hash;
	void (*clear)(void * & d);
	void (*printout)(ostream  & out, void *& d);
	bool isfunc = false;
};
class var
{
public:
	varef * ref = 0;

	var()
	{
		ref =new varef;
		ref->count = 1;
		ref->hash = 0;
		ref->clear = [](void *& d)
		{

		};
		ref->printout = [](ostream & out , void *& d)
		{
			out << "undefined";
		};
	}
	template<typename A>
	var()
	{
		const static size_t hash = typeid(A).hash_code();
		ref =new varef;
		ref->count = 1;
		ref->d = new A;
		ref->hash = hash;
		ref->clear = [](void *& d)
		{
			delete((A*)d);
		};
		ref->printout = [](ostream & out , void *& d)
		{
			out << (*((A*)d));
		};

	}

	var(const char * a)
	{
		const static size_t hash = typeid(string).hash_code();
		ref =new varef;
		ref->count = 1;
		ref->d = new string;
		ref->hash = hash;

		ref->clear = [](void *& d)
		{
			delete((string*)d);
		};
		ref->printout = [](ostream & out , void *& d)
		{
			out << (*((string*)d));
		};

		(*((string*)ref->d)) = a;
	}

	template<typename A>
	var(A a)
	{
		const static size_t hash = typeid(A).hash_code();
		ref =new varef;
		ref->count = 1;
		ref->d = new A;
		ref->hash = hash;

		ref->clear = [](void *& d)
		{
			delete((A*)d);
		};
		ref->printout = [](ostream & out , void *& d)
		{
			out << (*((A*)d));
		};

		(*((A*)ref->d)) = a;
	}

	var(const var & v)
	{
		ref = v.ref;
		ref->count++;
	}
	~var()
	{
		ref->count--;
		if(ref->count <=0)
		{
			ref->clear(ref->d);
			delete(ref);
		}
	}

	template<typename A>
	operator A ()
	{
		const static size_t sethash = typeid(Set<var>).hash_code();
		if(ref->hash == sethash)
		{
			throw "no getter found.";
		}

		const static size_t hash = typeid(A).hash_code();


		const static size_t gethash = typeid(Get<var>).hash_code();
		if(ref->hash == gethash)
		{
      var v1 = (var)(*((Get<var>*)ref->d));
			return v1;
		}

		const static size_t getsethash = typeid(GetSet<var>).hash_code();

		if(ref->hash == getsethash)
		{
      var v1 = (var)(*((GetSet<var>*)ref->d));
			return v1;
		}

		if(ref->hash != hash)
		{
			throw "not implemented";
		}
		return (*((A*)ref->d));
	}


  template<typename A>
	A & Ref()
	{
		const static size_t sethash = typeid(Set<var>).hash_code();
		if(ref->hash == sethash)
		{
			throw "no getter found.";
		}

		const static size_t hash = typeid(A).hash_code();

		if(ref->hash != hash)
		{
			throw "not implemented";
		}
		return (*((A*)ref->d));
	}

	var & operator = (const var & a)
	{
		ref->count--;
		if(ref->count <=0)
		{
			ref->clear(ref->d);
			delete(ref);
		}
		ref = a.ref;
		ref->count++;
		return (*this);
	}

	var & operator = (const char * a)
	{

		const static size_t gethash = typeid(Get<var>).hash_code();
		if(ref->hash == gethash)
		{
			throw "no setter found.";
		}

		const static size_t sethash = typeid(Set<var>).hash_code();
		if(ref->hash == sethash)
		{
			(*((Set<var>*)ref->d)) = (string)a;
			return (*this);
		}

			const static size_t getsethash = typeid(GetSet<var>).hash_code();
			if(ref->hash == getsethash)
			{
				(*((GetSet<var>*)ref->d)) = (string)a;
				return (*this);
			}

			const static size_t hash = typeid(string).hash_code();
			if(ref->hash != hash)
			{
				ref->count--;
				if(ref->count <=0)
				{
					ref->clear(ref->d);
					delete(ref);
				}
				ref =new varef;
				ref->count = 1;
				ref->d = new string;
				ref->hash = hash;
				ref->clear = [](void *& d)
				{
					delete((string*)d);
				};
				ref->printout = [](ostream & out , void *& d)
				{
					out << (*((string*)d));
				};

			}
			(*((string*)ref->d)) = a;
			return (*this);
	}

	template<typename A>
	var & operator = (const A & a)
	{
			const static size_t gethash = typeid(Get<var>).hash_code();
			if(ref->hash == gethash)
			{
				throw "no setter found.";
			}

			const static size_t sethash = typeid(Set<var>).hash_code();
			if(ref->hash == sethash)
			{
				(*((Set<var>*)ref->d)) = a;
				return (*this);
			}
			const static size_t getsethash = typeid(GetSet<var>).hash_code();
			if(ref->hash == getsethash)
			{
				(*((GetSet<var>*)ref->d)) = a;
				return (*this);
			}

			const static size_t hash = typeid(A).hash_code();
			if(ref->hash != hash)
			{
				ref->count--;
				if(ref->count <=0)
				{
					ref->clear(ref->d);
					delete(ref);
				}
				ref =new varef;
				ref->count = 1;
				ref->d = new A;
				ref->hash = hash;
				ref->clear = [](void *& d)
				{
					delete((A*)d);
				};
				ref->printout = [](ostream & out , void *& d)
				{
					out << (*((A*)d));
				};

			}
			(*((A*)ref->d)) = a;
			return (*this);
	}

	var & l()
	{
		const static size_t hash = typeid(vector<var>).hash_code();
		if(ref->hash != hash)
		{
			ref->count--;
			if(ref->count <=0)
			{
				ref->clear(ref->d);
				delete(ref);
			}
			ref =new varef;
			ref->count = 1;
			ref->d = new vector<var>;
			ref->hash = hash;
			ref->clear = [](void *& d)
			{
				delete((vector<var>*)d);
			};
			ref->printout = [](ostream & out , void *& d)
			{
				out << "list";
			};

		}
		return (*this);
	}

	template<typename A>
	var & l(A a)
	{
		const static size_t hash = typeid(vector<var>).hash_code();
		if(ref->hash != hash)
		{
			ref->count--;
			if(ref->count <=0)
			{
				ref->clear(ref->d);
				delete(ref);
			}
			ref =new varef;
			ref->count = 1;
			ref->d = new vector<var>;
			ref->hash = hash;
			ref->clear = [](void *& d)
			{
				delete((vector<var>*)d);
			};
			ref->printout = [](ostream & out , void *& d)
			{
				out << "list";
			};

		}
		(*((vector<var>*)ref->d)).push_back(a);
		return (*this);
	}

	var & operator [] (int index)
	{
		const static size_t hash = typeid(vector<var>).hash_code();
		if(ref->hash != hash)
		{
      ref->count--;
      if(ref->count <=0)
      {
        ref->clear(ref->d);
        delete(ref);
      }
      ref =new varef;
      ref->count = 1;
      ref->d = new vector<var>;
      ref->hash = hash;
      ref->clear = [](void *& d)
      {
        delete((vector<var>*)d);
      };
      ref->printout = [](ostream & out , void *& d)
      {
        out << "list";
      };
		}
		return 	(*((vector<var>*)ref->d))[index];
	}


	var & m()
	{
		const static size_t hash = typeid(unordered_map<string, var>).hash_code();
		if(ref->hash != hash)
		{
			ref->count--;
			if(ref->count <=0)
			{
				ref->clear(ref->d);
				delete(ref);
			}
			ref =new varef;
			ref->count = 1;
			ref->d = new unordered_map<string, var>;
			ref->hash = hash;
			ref->clear = [](void *& d)
			{
				delete((unordered_map<string, var>*)d);
			};
			ref->printout = [](ostream & out , void *& d)
			{
				out << "map";
			};

		}
		return (*this);
	}

	template<typename A>
	var & m(string k, A a)
	{
		const static size_t hash = typeid(unordered_map<string, var>).hash_code();
		if(ref->hash != hash)
		{
			ref->count--;
			if(ref->count <=0)
			{
				ref->clear(ref->d);
				delete(ref);
			}
			ref =new varef;
			ref->count = 1;
			ref->d = new unordered_map<string, var>;
			ref->hash = hash;
			ref->clear = [](void *& d)
			{
				delete((unordered_map<string, var>*)d);
			};
			ref->printout = [](ostream & out , void *& d)
			{
				out << "map";
			};

		}
		(*((unordered_map<string, var>*)ref->d))[k] = a;
		return (*this);

	}

	var & operator [] (string index)
	{
		const static size_t hash = typeid(unordered_map<string, var>).hash_code();

		if(ref->hash != hash)
		{
      ref->count--;
			if(ref->count <=0)
			{
				ref->clear(ref->d);
				delete(ref);
			}
			ref =new varef;
			ref->count = 1;
			ref->d = new unordered_map<string, var>;
			ref->hash = hash;
			ref->clear = [](void *& d)
			{
				delete((unordered_map<string, var>*)d);
			};
			ref->printout = [](ostream & out , void *& d)
			{
				out << "map";
			};
		}
		vector<string>s = split(index, ".");

		var  * ret = this;
		int size = s.size();
		for(int i = 0; i < size; i++)
		{
			if(IsIntNumber(s[i]))
			{
				vector<var> & at = ret->Ref<vector<var>>();
				int ii = stoi(s[i]);
				ret = &at[ii];
			}
			else
			{
				unordered_map<string, var> & at =  ret->Ref<unordered_map<string, var>>();
				ret = &at[s[i]];
			}
		}

		return 	(*ret);
	}

	template<typename ... ARGS>
	var & f( function<var(ARGS...)> func)
	{
		const static size_t hash = typeid(function<var(ARGS...)>).hash_code();
		if(ref->hash != hash)
		{
			ref->count--;
			if(ref->count <=0)
			{
				ref->clear(ref->d);
				delete(ref);
			}
			ref =new varef;
			ref->count = 1;
			ref->d = new function<var(ARGS...)>;
			ref->hash = hash;
			ref->clear = [](void *& d)
			{
				delete((function<var(ARGS...)>*)d);
			};
			ref->printout = [](ostream & out , void *& d)
			{
				out << "function";
			};
			ref->isfunc = true;
		}
		(*((function<var(ARGS...)>*)ref->d)) = func;
		return (*this);
	}

	var operator()(vector<var> args = vector<var>())
	{
		if(!ref->isfunc)
		{
			throw "not implemented";
		}
		return (*((function<var(vector<var>)>*)ref->d))(args);

	}

	var & gs(function<var()> get, function <void(var v)> set)
	{
		const static size_t hash = typeid(GetSet<var>).hash_code();
		if(ref->hash != hash)
		{
			ref->count--;
			if(ref->count <=0)
			{
				ref->clear(ref->d);
				delete(ref);
			}
			ref =new varef;
			ref->count = 1;
			ref->d = new GetSet<var>;
			ref->hash = hash;
			ref->clear = [](void *& d)
			{
				delete((GetSet<var>*)d);
			};
			ref->printout = [](ostream & out , void *& d)
			{
				var v = (var)(*((GetSet<var>*)d));
				out << v;
			};
		}
		(*((GetSet<var>*)ref->d)) = GetSet<var>(get, set);
		return (*this);
	}

	var & g(function<var()> get)
	{
		const static size_t hash = typeid(Get<var>).hash_code();
		if(ref->hash != hash)
		{
			ref->count--;
			if(ref->count <=0)
			{
				ref->clear(ref->d);
				delete(ref);
			}
			ref =new varef;
			ref->count = 1;
			ref->d = new Get<var>;
			ref->hash = hash;
			ref->clear = [](void *& d)
			{
				delete((Get<var>*)d);
			};
			ref->printout = [](ostream & out , void *& d)
			{
				var v = (var)(*((Get<var>*)d));
				out << v;
			};
		}
		(*((Get<var>*)ref->d)) = Get<var>(get);
		return (*this);
	}

	var & s(function <void(var v)> set)
	{
		const static size_t hash = typeid(Set<var>).hash_code();
		if(ref->hash != hash)
		{
			ref->count--;
			if(ref->count <=0)
			{
				ref->clear(ref->d);
				delete(ref);
			}
			ref =new varef;
			ref->count = 1;
			ref->d = new Set<var>;
			ref->hash = hash;
			ref->clear = [](void *& d)
			{
				delete((Set<var>*)d);
			};

			ref->printout = [](ostream & out , void *& d)
			{
				out << "Setter";
			};
		}
		(*((Set<var>*)ref->d)) = Set<var>(set);
		return (*this);
	}

	friend ostream & operator << (ostream & out, var v)
	{
		v.ref->printout(out, v.ref->d);
		return out;
	}


};

static const var varempty;

//#define varfunc(...) (function<var(__VA_ARGS__)>)[&](__VA_ARGS__)->var
//#define varfunc (function<var(vector<var>)>)[&](vector<var> args)->var
#define varfunc(C) var().f(  (function<var(vector<var> v)>)[&](vector<var> a)->var C)
#define static_varfunc(C) var().f(  (function<var(vector<var> v)>)[](vector<var> a)->var C)

#define vargetset(G, S) var().gs([&]()->var G, [&](var v) S)
#define varget(G) var().g([&]()->var G)
#define varset(S) var().s([&](var v) S)

#define static_vargetset(G, S) var().gs([]()->var G, [](var v) S)
#define static_varget(G) var().g([]()->var& G)
#define static_varset(S) var().s([](var v) S)

#define varlist(...) var((vector<var>) __VA_ARGS__)
#define varmap(...) var((unordered_map<string, var>) __VA_ARGS__)


#define el << "\r\n"


class dom
{
  string * title;
public:

  dom()
  {

  }

  dom & attr(var a)
  {

  }

  friend ostream & operator << (ostream & out, dom v)
	{
		out << "dom";
		return out;
	}
};


int main()
{
  var v1 = dom();

	return 0;
}
