#ifndef VARBASE_CPP
#define VARBASE_CPP
#include <functional>
#include <string>
#include "VarType.cpp"
#include "Exception.cpp"
using namespace std;
class VarBase
{
	virtual void throwNotImplemented()
	{
		throw "var not implemented.";
	}
	public:
	varType::types type;
	varBase()
	{
	}
	varBase(bool d)
	{
		throwNotImplemented();
	}
	varBase(uint8_t d)
	{
		throwNotImplemented();
	}
	varBase(int8_t d)
	{
		throwNotImplemented();
	}
	varBase(uint16_t d)
	{
		throwNotImplemented();
	}
	varBase(int16_t d)
	{
		throwNotImplemented();
	}
	varBase(uint32_t d)
	{
		throwNotImplemented();
	}
	varBase(int32_t d)
	{
		throwNotImplemented();
	}
	varBase(uint64_t d)
	{
		throwNotImplemented();
	}
	varBase(int64_t d)
	{
		throwNotImplemented();
	}
	varBase(float d)
	{
		throwNotImplemented();
	}
	varBase(double d)
	{
		throwNotImplemented();
	}
	varBase(const char * d)
	{
		throwNotImplemented();
	}
	varBase(string d)
	{
		throwNotImplemented();
	}
	template<typename ... ARGS>
	varBase(function<void(ARGS...)> func)
	{
		throwNotImplemented();
	}
	
	template<typename ... ARGS>
	varBase(function<varBase(ARGS...)> func)
	{
		throwNotImplemented();
	}
	//////////////operators
	virtual operator bool()
	{
		throwNotImplemented();
		return false;
	}
	virtual operator uint8_t()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator int8_t()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator uint16_t()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator int16_t()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator uint32_t()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator int32_t()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator uint64_t()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator int64_t()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator float()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator double()
	{
		throwNotImplemented();
		return 0;
	}
	virtual operator string()
	{
		throwNotImplemented();
		return "";
	}
	////////////
	virtual varBase & operator = (bool d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (uint8_t d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (int8_t d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (uint16_t d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (int16_t d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (uint32_t d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (int32_t d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (uint64_t d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (int64_t d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (float d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (double d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (const char * d)
	{
		throwNotImplemented();
		return (*this);
	}
	virtual varBase & operator = (string d)
	{
		throwNotImplemented();
		return (*this);
	}
	///////////////////////////
	virtual varBase operator ==(bool d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(uint8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(int8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(uint16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(int16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(uint32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(int32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(uint64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(int64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(float d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(double d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(const char * d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator ==(string d)
	{
		throwNotImplemented();
		return false;
	}
	////////////////////////////
	virtual varBase operator !=(bool d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(uint8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(int8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(uint16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(int16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(uint32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(int32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(uint64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(int64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(float d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(double d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(const char * d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator !=(string d)
	{
		throwNotImplemented();
		return false;
	}
	//////////////////////
	virtual varBase operator <=(bool d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(uint8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(int8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(uint16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(int16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(uint32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(int32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(uint64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(int64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(float d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <=(double d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <= (const char * d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <= (string d)
	{
		throwNotImplemented();
		return false;
	}
	//////////////////////////
	virtual varBase operator >=(bool d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(uint8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(int8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(uint16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(int16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(uint32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(int32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(uint64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(int64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(float d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(double d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(const char * d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >=(string d)
	{
		throwNotImplemented();
		return false;
	}
	////////////////////////////////////
	virtual varBase operator <(bool d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(uint8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(int8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(uint16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(int16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(uint32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(int32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(uint64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(int64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(float d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(double d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(const char * d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator <(string d)
	{
		throwNotImplemented();
		return false;
	}
	//////////////////////////////////////
	virtual varBase operator >(bool d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(uint8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(int8_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(uint16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(int16_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(uint32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(int32_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(uint64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(int64_t d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(float d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(double d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(const char * d)
	{
		throwNotImplemented();
		return false;
	}
	virtual varBase operator >(string d)
	{
		throwNotImplemented();
		return false;
	}
	////////////////////////////////////////////
	virtual varBase operator !()
	{
		throwNotImplemented();
		return false;
	}
	///////////////////////////////////////////
	
	
};






#endif
