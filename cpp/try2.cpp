#include <windows.h>

#include "Observer.cpp"
newDom nu;
/*
class try1: public Dom
{
  typedef try1 CMPARENT;
public:
  $cm(title, "");
  $cm(w, 0);
  $cm(h, 0);
  int ii = 4444;
  Observer func = func(void)
  {
    cout << "here123 " << ii el;
  };
  try1()
  {
    args("title", _title);
    args("w", _w);
    args("h", _h);
    args("func", func);


  }
};
*/



class DllLoad
{
	HINSTANCE hinstLib;
public:
	DllLoad(string name)
	{
		hinstLib = LoadLibrary(TEXT(name.c_str()));
		if (hinstLib == NULL)
		{
			cout << "ERROR: unable to load DLL" el;
			return;
		}

	}
	void load()
	{
		void (*domfunc)(newDom & d) = (void(*)(newDom&))GetProcAddress(hinstLib, "Start");
		domfunc(nu);
	}

};

class Text: public Dom
{
	typedef Text CMPARENT;
public:
	$cm(text, "");
	Text()
	{
		attrs("text", _text);
	}
};

int main()
{
	$nu(Text);
  DllLoad l1("domtry1.dll");
	l1.load();


  Dom win;
  win(nu["try1"]("id", "fun")("title", "new title"))
	(
		nu["Text"]("id", "fun1")("text", R"(

			hi there this is a tst
			asdfasdfadfs asdf
			asdfasdf

		)")
	);

  win.findById("fun1", $func(void, Dom & d)
  {
    cout << "here1 " << d["text"] el;
  });
	win.findById("fun", $func(void, Dom & d)
	{
		d["func"].call<void>();
	});

  return 0;
}
