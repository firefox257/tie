#ifndef VARUNDEFINED_HPP
#define VARUNDEFINED_HPP
class VarUndefined: public VarBase
{
	virtual void ThrowNotImplemented(string file, int line);
	virtual void ThrowException(string file, int line, string msg);
	public:
	virtual VarType::Types Type();
	
	VarUndefined();
	
	virtual void outstream(ostream & out);
};


#endif
