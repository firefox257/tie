#ifndef MSGC_CPP
#define MSGC_CPP
#include <string>
#include <unordered_map>
class Msgc
{
	struct node
	{
		int64_t t;
		void * v;
	};
	unordered_map<string, umap<uint64_t, node> > funclist;
	public:
	Msgc()
	{

	}

	template<typename ... ARGS>
	void handle(string path, function<void(ARGS...)> func)
	{
		static int64_t stype = typeid(function<void(ARGS...)>).hash_code();

		node & n = funclist[path][(uint64_t)&func];
		n.t = stype;
		n.v = &func;
	}
	template<typename ... ARGS>
	void send(string path, ARGS ... args)
	{
		static int64_t stype = typeid(function<void(ARGS...)>).hash_code();
		 unordered_map<uint64_t, node> & mm = funclist[path];
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
//unordered_map<string, umap<uint64_t, msgc::node> > msgc::funclist;


#endif
