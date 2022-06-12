
/*
Route.Set("GET", "/api/test/*", undefined, (req:any, res:any, id:string) =>
{
	return {
		id: id
	};
	
});

Route.Set("GET", "/api/testobj/", undefined, (req:any, res:any)=>
{
	console.log("Here1");
});

Route.Set("GET", "/api/testauth/", undefined, (req:any, res:any)=>
{
	throw new UnauthorizedException();
});
*/
Route.Set("POST", "/api/testpost/", TestPostRequest, (req:any, res:any, request:TestPostRequest)=>
{
	var log: ILoggerService = DI.Get("ILoggerService");
	log.Information("here: ");
	for(var i in request)
	{
		console.log(`${i}: ${request[i]}`);
	}

	return $init(TestPostResponse, {Id: request.Id, Msg: `Fron server: ${request.Hi}`});
});


