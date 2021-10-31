#include "var.cpp"
#include "msgc.cpp"
#include <regex>


var $ = umapvar();


class Size
{
	double d;
	public:
	Size()
	{

	}
	Size(double dd)
	{
		d = dd;
	}
	Size & px(double dd)
	{
		d = dd;
		return *this;
	}
	double px()
	{
		return d;
	}
	friend ostream & operator << (ostream & os, Size s)
	{
		cout << "size " << s.d;
		return os;
	}
};



int main()
{
	var v1 = (umapvar)
	{
		{"title", "window 1"},
		{"width", Size(123)},
		{"hegiht", Size(555)},
		{"init", varfunc(void){

			cout << "init" el;
		}}
	};
	Size & s1 = v1["width"];

	cout << v1 el;

	return 0;
}
