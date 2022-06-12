//Edit in the shared directory

class UnauthorizedException extends Error 
{
	constructor()
	{
		super("Unauthorized");
	}
	
};
globalAny.UnauthorizedException = UnauthorizedException;



class NotImplementedException extends Error 
{
	constructor()
	{
		super("Not Implemented");
	}
};
globalAny.NotImplementedException = NotImplementedException;

class BadRequestException extends Error
{
	constructor(msg:string)
	{
		if(msg == undefined) super("Bad Reqeust");
		else super(msg);
	}
};
globalAny.BadRequestException = BadRequestException;

class ForbiddenException extends Error
{
	constructor(msg:string)
	{
		if(msg == undefined) super("Forbidden");
		else super(msg);
	}
};
globalAny.ForbiddenException = ForbiddenException;

class NotFoundException extends Error
{
	constructor(msg:string)
	{
		if(msg == undefined) super("Not found");
		else super(msg);
	}
};
globalAny.NotFoundException = NotFoundException;

class NotAcceptableException extends Error
{
	constructor(msg:string)
	{
		if(msg == undefined) super("Not Acceptable");
		else super(msg);
	}
};
globalAny.NotAcceptableException = NotAcceptableException;

class InterfaceException extends Error
{
	constructor(msg:string)
	{
		if(msg == undefined) super("Interface not implemented.");
		else super(msg);
	}
}
globalAny.InterfaceException = InterfaceException;

