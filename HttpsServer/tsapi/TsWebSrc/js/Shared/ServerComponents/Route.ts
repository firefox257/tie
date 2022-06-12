//Edit in the shared directory
const Route = (function()
{

    var routes:{[key:string]: any} = {};
    var at =
    {
        Set(type:any, route:string, cl:any, handelFunc:any)
        {
			if(route.startsWith("/"))
			{
				route = route.substring(1, route.length);
			}
            var r = routes;
            if(r[type] == undefined) r[type] = {};
            r = r[type];
            route.split("/").map(i=>
                {
                    i = i.trim();
                    if(r[i] == undefined)r[i] = {};
                    r = r[i];
                });
            r["___func"] = {
					func: handelFunc,
					cl: cl
				};
				
        },
        Send(route:string, req:any, resp:any)
        {
			if(route.startsWith("/"))
			{
				route = route.substring(1, route.length);
			}
            var q: any[] = [];
            q.push(req);
            q.push(resp);
            var r = routes;
            r = r[req.method];
            route.split("/").map(i=>
                {
                    i = i.trim();
                    if(r[i] == undefined && r["*"] == undefined) 
                    {
                        throw new BadRequestException(`Bad Request as there is no Route for ${req.method} ${route}`);
                    }
                    else if(r[i] == undefined)
                    {
                        r = r["*"];
                        q.push(i);
                    }
                    else
                    {
                        r = r[i];
                    }
                });
                
                if(r["___func"].cl != undefined)
				{
					let data: any = [];
					req.on("data", (chunck:string)=>
					{
						data.push(chunck);
					});
					req.on("end", () =>
					{

						try
						{
							var dd = JSON.parse(data);
							
							var c = new r["___func"].cl();
							for(var i in c)
							{
								if(typeof c[i] != 'function' && typeof dd[i] != 'function') c[i] = dd[i];
							}
							
							if(c._required != undefined)
							{
								
								var require = c._required();
								for(let i = 0; i < require.length; i++)
								{
									if(c[require[i]] == undefined )
									{

										//console.log("require[i]: " + require[i]);
										var cc = new r["___func"].cl();
										for(var ii = 0; ii < require.length; ii++)
										{
											cc[require[ii]] = "required";
										}

										
										throw new NotAcceptableException(`Not Accepted. Request should be.\r\n ${JSON.stringify(cc)}`);
									}
								}
							}

							q.push(c);
							
							let response = r["___func"].func.apply(null, q);
							if(response != undefined)
							{
								JSONResponse(req, resp, 200, response);
							}
							else
							{
								JSONResponse(req, resp, 200, {success:true});
							}
						}
						catch(err: any)
						{
							ExceptionResponse(req, resp, err);
						}
					});
				}
				else
				{
					let response =  r["___func"].func.apply(null, q);
					if(response != undefined)
					{
						JSONResponse(req, resp, 200, response);
					}
					else
					{
						JSONResponse(req, resp, 200, {success:true});
					}
				}
                
            
        }
    };

    return at;
})();

globalAny.Route = Route;


//Route.Set("GET", "/api/test/*", undefined, (req, res, id) =>
//{
//	return {
//		id: id
//	};
//});

//Route.Set("GET", "/api/testobj/", undefined, (req, res)=>
//{
//	console.log("Here1");
//});

//Route.Set("GET", "/api/testauth/", undefined, (req, res)=>
//{
//	throw new UnauthorizedException();
//});

//Route.Set("POST", "/api/testpost/", TestRequest, (req, res, request)=>
//{	
//	var t = new TestResponse();
//	t.Id = request.Id;
//	t.Msg = "hi there";
//	return t;
//});

