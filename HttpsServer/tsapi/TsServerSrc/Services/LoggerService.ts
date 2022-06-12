const nameof = <T>(name: keyof T) => name;
class LoggerService implements ILoggerService
{

    Information(msg:string)
    {
        console.log("Info: " + msg);
    }

    Warning(msg:string)
    {
        
    }

    Error(msg:string)
    {
        
    }

};

globalAny.LoggerService = LoggerService;


