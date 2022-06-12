class LoggerService extends ILoggerService
{
    Info(msg)
    {
        console.log(`Info: ${msg}`);
    }
    Warning(msg)
    {
        console.log(`Warning: ${msg}`);
    }
    Error(msg)
    {
        console.log(`Error: ${msg}`);
    }

};
CheckInterface(ILoggerService, LoggerService);

globalThis.LoggerService = LoggerService;