#ifndef OBSERVER_CPP
#define OBSERVER_CPP

#include <iostream>
#include <stdint.h>
#include <string>
#include <unordered_map>
#include <vector>
#include <functional>

using namespace std;

#define el << "\r\n"

struct ObserverRef
{
  void * d= 0;
  size_t hash;

  function<void(void*&, vector<void*> &)> clear;
  function<void(ostream &, void *&)> print;
  function<bool(void *&, void *&)> equals;
  bool isFunc = false;
  int count = 0;
  vector<void *> funcs;

};

class Observer
{
  ObserverRef * ref = 0;
public:
  template<typename A>
  Observer(A v)
  {
    const static size_t hash = typeid(A).hash_code();
    ref = new ObserverRef;
    ref->hash = hash;
    ref->d = new A;
    A& a = (*((A*)ref->d));
    a = v;
    ref->count = 1;
    ref->clear = [](void *& d, vector<void*> & v)
    {
      delete((A*)d);
      int size = v.size();
      for(int i = 0; i < size; i++)
      {
        delete((function<void(A)>*)v[i]);
      }
    };
    ref->print = [](ostream & out , void *& d)
    {
      out << (*((A*)d));
    };
    ref->equals = [](void *& d1, void *& d2)->bool
    {
      return (*((A*)d1)) == (*((A*)d2));
    };

  }

  Observer(const char * v)
  {
    const static size_t hash = typeid(string).hash_code();
    ref = new ObserverRef;
    ref->hash = hash;
    ref->d = new string;
    string& a = (*((string*)ref->d));
    a = v;
    ref->count = 1;
    ref->clear = [](void *& d, vector<void*> & v)
    {
      delete((string*)d);
      int size = v.size();
      for(int i = 0; i < size; i++)
      {
        delete((function<void(string)>*)v[i]);
      }
    };
    ref->print = [](ostream & out , void *& d)
    {
      out << (*((string*)d));
    };
    ref->equals = [](void *& d1, void *& d2)->bool
    {
      return (*((string*)d1)) == (*((string*)d2));
    };

  }

  template<typename R, typename ... ARGS>
  Observer(function<R(ARGS...)> v)
  {
    const static size_t hash = typeid(function<R(ARGS...)>).hash_code();
    ref = new ObserverRef;
    ref->hash = hash;
    ref->d = new function<R(ARGS...)>;
    function<R(ARGS...)>& a = (*((function<R(ARGS...)>*)ref->d));
    a = v;
    ref->count = 1;
    ref->isFunc = true;
    ref->clear = [](void *& d, vector<void*> & v)
    {
      delete((function<R(ARGS...)>*)d);
      int size = v.size();
      for(int i = 0; i < size; i++)
      {
        delete((function<void(function<R(ARGS...)>*)>*)v[i]);
      }
    };
    ref->print = [](ostream & out , void *& d)
    {
      out << "function";
    };
    ref->equals = [](void *& d1, void *& d2)->bool
    {
      return false;
    };
  }
  Observer(const Observer & v)
  {
    ref = v.ref;
    ref->count++;
  }

  template<typename A>
  operator A & ()
  {
    const static size_t hash = typeid(A).hash_code();
    if(hash != ref->hash) throw "cast not same type";
    return (*((A*)ref->d));
  }

  template<typename A>
  Observer & operator = (A v)
  {
    const static size_t hash = typeid(A).hash_code();
    if(hash != ref->hash) throw "equals not same type";
    A & a = (*((A*)ref->d));
    a = v;
    int size = ref->funcs.size();
    for(int i = 0; i < size; i++)
    {
      (*((function<void(A)>*)ref->funcs[i]))(v);
    }
    return (*this);
  }

  Observer & operator = (const char * v)
  {
    const static size_t hash = typeid(string).hash_code();
    if(hash != ref->hash) throw "equals not same type";
    string & a = (*((string*)ref->d));
    a = v;
    int size = ref->funcs.size();
    for(int i = 0; i < size; i++)
    {
      (*((function<void(string)>*)ref->funcs[i]))(v);
    }
    return (*this);
  }

  template<typename R, typename ... ARGS>
  Observer & operator = (function<R(ARGS...)> v)
  {
    const static size_t hash = typeid(function<R(ARGS...)> ).hash_code();
    if(hash != ref->hash) throw "equals not same type";
    function<R(ARGS...)>  & a = (*((function<R(ARGS...)> *)ref->d));
    a = v;
    int size = ref->funcs.size();
    for(int i = 0; i < size; i++)
    {
      (*((function<void(function<R(ARGS...)> )>*)ref->funcs[i]))(v);
    }
    return (*this);
  }

  Observer & operator = (Observer & v)
  {
    ref->clear(ref->d, ref->funcs);
    ref = v.ref;
    ref->count++;
    return (*this);
  }

  template<typename R, typename ... ARGS>
  R call(ARGS ... args)
  {
    const static size_t hash = typeid(function<R(ARGS...)> ).hash_code();
    const static size_t hash_void = typeid(void).hash_code();

    if(hash != ref->hash) throw "call not same type";
    function<R(ARGS...)>  & a = (*((function<R(ARGS...)> *)ref->d));

    const static size_t hash_R = typeid(R).hash_code();
    if(hash_void == hash_R)
    {
      a(args...);
    }
    else
    {
      return a(args...);
    }
  }

  template<typename A>
  Observer & operator()(function<void(A)> func)
  {
    const static size_t hash = typeid(A).hash_code();
    if(hash != ref->hash) throw "function observer not same type";
    function<void(A)> * ptr = new function<void(A)>();
    (*ptr) = func;
    ref->funcs.push_back(ptr);
    return (*this);

  }

  template<typename A>
  bool operator == (A v)
  {
    const static size_t hash = typeid(A).hash_code();
    if(hash != ref->hash) throw "equals observer not same type";
    void * ptr = &v;
    return ref->equals(ref->d, ptr);
  }

  friend ostream & operator << (ostream & out, Observer v)
  {
    v.ref->print(out, v.ref->d);
    return out;
  }




};

class ObserverMap
{
  unordered_map<string, Observer *> omap;
public:
  ObserverMap()
  {

  }
  ObserverMap & operator()(string k, Observer & ob)
  {
    omap[k] = & ob;
    return (*this);
  }
  ObserverMap & operator()(const char * k, Observer & ob)
  {
    omap[k] = & ob;
    return (*this);
  }
  Observer & operator [](string k)
  {
    return *omap[k];
  }
  Observer & operator [](const char * k)
  {
    return *omap[k];
  }
};

#define $ofunc(T) (function<void(T)>)[&](T v)
#define $func(R, ...) (function<R(__VA_ARGS__)>)[&](__VA_ARGS__)->R

#define $cm(N, S) protected: Observer _##N = Observer(S); public: Observer & N() { return _##N;} template<typename A> CMPARENT &  N(A v){ _##N = v; return (*this);}
#define $tie(N) attrs(#N, _##N);

class Dom
{
  typedef Dom CMPARENT;
public:
  ObserverMap attrs;
  vector<Dom *> inner;
  $cm(id, "")
  Dom()
  {
    $tie(id);
  }
  ~Dom()
  {
    int size = inner.size();
    for(int i = 0; i < size; i++)
    {
      delete(inner[i]);
    }
  }
  Dom & operator()(Dom & d)
  {
    inner.push_back(&d);
    return (*this);
  }

  template<typename A>
  Dom & operator()(string k, A v)
  {
    attrs[k] = v;
    return (*this);
  }
  template<typename A>
  Dom & operator()(const char * k, A v)
  {
    attrs[k] = v;
    return (*this);
  }

  Observer & operator[](string k)
  {
    return attrs[k];
  }
  Observer & operator[](const char * k)
  {
    return attrs[k];
  }

  Dom & findById(string id, function<void(Dom&)> callback)
  {
    if(_id == id)
    {
      callback((*this));
    }
    int size = inner.size();
    for(int i = 0; i < size; i++)
    {
      inner[i]->findById(id, callback);
    }

    return (*this);
  }

};




class newDom
{
  unordered_map<string, function<Dom *()>> domMap;
public:
  newDom()
  {

  }
  newDom & operator()(string k, function<Dom * ()> func)
  {
    domMap[k] = func;
    return (*this);
  }
  newDom & operator()(const char * k, function<Dom * ()> func)
  {
    domMap[k] = func;
    return (*this);
  }
  Dom & operator[](string k)
  {
    Dom * ptr = domMap[k]();
    return *ptr;
  }
  Dom & operator[](const char * k)
  {
    Dom * ptr = domMap[k]();
    return *ptr;
  }
};

#define $nu(N) nu(#N, $func(Dom*)\
{\
  return new N();\
});

#endif
