#include "var.cpp"

int main()
{


	var $ = (umap<string,var>){};

	$["comp"] = varfunc(var, string k, var obj)
	{

	};


	var o = varfunc(var)
	{

		var at = (umap<string, var>)
		{
			{"title", "t1"}

		};

		return at;
	};


	var a1 = o.call<var>();
	var a2 = o.call<var>();

	a1["title"] = "asdfffff";
	a2["title"] = "hi there";

	cout << a1["title"] el;
	cout << a2["title"] el;


	return 0;
}
