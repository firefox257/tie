#ifndef VAR_HPP
#define VAR_HPP
#include <unordered_map>
#include <map>
#include <stdint.h>
#include <string>
#include <vector>
#include <functional>
using namespace std;
#define varfunc(R, ...) (function<R(__VA_ARGS__)>)[&](__VA_ARGS__)->R

#include "VarType.hpp"
#include "VarRef.hpp"
struct VarGetSet;
class var
{
public:
  VarRef * ref = 0;
  var();
  var(bool d);
  var(char d);
  var(int8_t d);
  var(uint8_t d);
  var(int16_t d);
  var(uint16_t d);
  var(int32_t d);
  var(uint32_t d);
  var(int64_t d);
  var(uint64_t d);
  var(float d);
  var(double d);
  var(const char * d);
  var(string d);

  //functions
  var(function<void()> d);
  var(function<void(var)> d);
  var(function<void(var, var)> d);
  var(function<void(var, var, var)> d);
  var(function<void(var, var, var, var)> d);
  var(function<void(var, var, var, var, var)> d);
  var(function<void(var, var, var, var, var, var)> d);
  var(function<void(var, var, var, var, var, var, var)> d);
  var(function<void(var, var, var, var, var, var, var, var)> d);
  var(function<void(var, var, var, var, var, var, var, var, var)> d);
  var(function<void(var, var, var, var, var, var, var, var, var, var)> d);
  var(function<var()> d);
  var(function<var(var)> d);
  var(function<var(var, var)> d);
  var(function<var(var, var, var)> d);
  var(function<var(var, var, var, var)> d);
  var(function<var(var, var, var, var, var)> d);
  var(function<var(var, var, var, var, var, var)> d);
  var(function<var(var, var, var, var, var, var, var)> d);
  var(function<var(var, var, var, var, var, var, var, var)> d);
  var(function<var(var, var, var, var, var, var, var, var, var)> d);
  var(function<var(var, var, var, var, var, var, var, var, var, var)> d);

  //end functions
  var(const var & v);

  ~var();
  VarType Type();
	/*
  operator bool();
  operator char();
  operator int8_t();
  operator uint8_t();
  operator int16_t();
  operator uint16_t();
  operator int32_t();
  operator uint32_t();
  operator int64_t();
  operator uint64_t();
  operator float();
  operator double();
  operator string();
*/
/*
	operator bool*();
  operator char*();
  operator int8_t*();
  operator uint8_t*();
  operator int16_t*();
  operator uint16_t*();
  operator int32_t*();
  operator uint32_t*();
  operator int64_t*();
  operator uint64_t*();
  operator float*();
  operator double*();
  operator string*();
  operator vector<var>*();
  operator unordered_map<string, var>*();
  operator VarGetSet*();
*/

	operator bool & ();
  operator char & ();
  operator int8_t & ();
  operator uint8_t & ();
  operator int16_t & ();
  operator uint16_t & ();
  operator int32_t & ();
  operator uint32_t & ();
  operator int64_t & ();
  operator uint64_t & ();
  operator float & ();
  operator double & ();
  operator string & ();
  operator vector<var> & ();
  operator unordered_map<string, var> & ();
  operator VarGetSet & ();

///equals operators
	var & operator = (bool d);
  var & operator = (char d);
  var & operator = (int8_t d);
  var & operator = (uint8_t d);
  var & operator = (int16_t d);
  var & operator = (uint16_t d);
  var & operator = (int32_t d);
  var & operator = (uint32_t d);
	var & operator = (int64_t d);
  var & operator = (uint64_t d);
  var & operator = (float d);
	var & operator = (double d);
	var & operator = (string d);
  var & operator = (var d);
// function equals operators
//don't need to do.
  /*
  var & operator = (function<void()> d);
  var & operator = (function<void(var)> d);
  var & operator = (function<void(var, var)> d);
  var & operator = (function<void(var, var, var)> d);
  var & operator = (function<void(var, var, var, var)> d);
  var & operator = (function<void(var, var, var, var, var)> d);
  var & operator = (function<void(var, var, var, var, var, var)> d);
  var & operator = (function<void(var, var, var, var, var, var, var)> d);
  var & operator = (function<void(var, var, var, var, var, var, var, var)> d);
  var & operator = (function<void(var, var, var, var, var, var, var, var, var)> d);
  var & operator = (function<void(var, var, var, var, var, var, var, var, var, var)> d);
  var & operator = (function<var()> d);
  var & operator = (function<var(var)> d);
  var & operator = (function<var(var, var)> d);
  var & operator = (function<var(var, var, var)> d);
  var & operator = (function<var(var, var, var, var)> d);
  var & operator = (function<var(var, var, var, var, var)> d);
  var & operator = (function<var(var, var, var, var, var, var)> d);
  var & operator = (function<var(var, var, var, var, var, var, var)> d);
  var & operator = (function<var(var, var, var, var, var, var, var, var)> d);
  var & operator = (function<var(var, var, var, var, var, var, var, var, var)> d);
  var & operator = (function<var(var, var, var, var, var, var, var, var, var, var)> d);
  */
//end euqals operators

  ///functions
  var operator()(var, var, var, var, var, var, var, var, var, var);
  /// end functions
  //do not do calculations force the calls to get reference or cast instead.
//list
	var & l();
	var & l(var d);
	var & operator[](int i);
//end list
//map
	var & m();
	var & m(const char * k, var d);
	var & m(string k, var d);
	var & operator[](const char * k);
	var & operator[](string k);
//end map
//get set
/*
	var & g(function<var()> func);
	var & s(function<void(var)> func);
	var & gs(funciton<var()> funcg, function<void(var)> funcs);
*/
//end get set

};
#include "VarGetSet.hpp"
#include "coutVar.cpp"
ostream & operator << (ostream & out, var v)
{
  VarRef & r = *v.ref;
  coutVar[(int)r.t](r, out);
  return out;
}


#endif
