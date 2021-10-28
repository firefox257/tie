
#include "Observer.cpp"

class try1: public Dom
{
  typedef try1 CMPARENT;
public:
  $cm(title, "");
  $cm(w, 0);
  $cm(h, 0);
  int ii = 4444;
  Observer func = $func(void)
  {
    cout << "here123 " << ii el;
  };
  try1()
  {
    attrs("title", _title);
    attrs("w", _w);
    attrs("h", _h);
    attrs("func", func);
		_title($ofunc(string)
		{
			cout << "title has changed " el;
		});


  }
};

extern "C" void Start(newDom & nu)
{
	$nu(try1);
}
