



Route.Set("POST", "/api/auth/login", AuthRequest, (req:any, res:any, request:AuthRequest)=>
{
    let authService: IAuthService = DI.Get("IAuthService");
    

});