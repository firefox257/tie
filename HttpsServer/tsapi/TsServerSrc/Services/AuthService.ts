

class AuthService implements IAuthService
{
    
    Login(req:any, res:any, request: HttpAuthRequest): HttpAuthResponse
    {
        throw new NotImplementedException();
    }
    
}

globalAny.AuthService = AuthService;