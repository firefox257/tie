
/*const vLogger =
{
    Title:"string",
    Information: "funciton(msg)",
    
    Warning: "function(msg)",
    
    Error: "function(msg)"
};

class Logger 
{
    constructor()
    {
        

    }
    Information(msg)
    {

    }
    Warning(msg)
    {

    }
    Error(msg)
    {

    }
};*/

/*

var v = function(v)
{

};
var t = typeof v;
console.log(t);
console.log(`${v}`);
*/

/*
var v1 = Object.getOwnPropertyNames(Logger.prototype);
console.log(v1);

console.log(typeof Logger.prototype["Error"]);
console.log(Logger.name);

var b1 = (function()
{

    var msg1 = "hi there";
    var at =
    {
        Error(msg)
        {
            console.log("Error: " + msg1);
        }
    };
    return at;
})();

var b2 = {};
b2["Error"] = b1.Error;

b1.Error("asdf");
b2.Error("asdf");

*/

/*

function InterfaceCheck(iobj, obj)
{
    for(var i in iobj)
    {
        if(obj[i] == undefined) throw new InterfaceException();
        var str1 = `${obj[i]}`;
        console.log(str1);
    }
}
const ILoggerService = {
    InfoLog: "function(msg)",
    WarningLog: "function(msg)",
    ErrorLog: "function(msg)",
};



function LoggerService(check)
{

    var aa = "hi there";
    this.InfoLog=        function(   msg   ) 
    {
        return aa;
    }
    this.WarningLog = function(msg)
    {

    }
    this.ErrorLog = function(msg)
    {

    }
    
    if(check) InterfaceCheck(check, this);
}
LoggerService(ILoggerService);
*/




class ILogger
{
    title="tests ILogger";

    Warning(     msg    )
    {
        throw "unimplmented";
    }
    Info(msg)
    {
        throw "unimplmented";
    }
   
}


class Logger extends ILogger
{
    title = "title Logger";
    bb = "at bb";
    Warning(     msg)
    {
        console.log("Logger: " + msg);
        console.log("title: " + this.title + " " + this.bb);
        return "done";
    }
    Info(msg)
    {

    }
   
}


function Interface(icl, cl)
{
    var iol = new icl();
    var ol = new cl();

    for(var i in iol)
    {
        eval(`
            Object.defineProperty(iol, "${i}", 
            {
                get: function()
                {
                    return ol.${i};
                },
                set: function(v)
                {
                    ol.${i} = v;
                }

            });
        `);
    }

    var methods = Object.getOwnPropertyNames(icl.prototype);
    console.log(methods);
    for(var i in methods)
    {
        var m = methods[i];
        if(m != "constructor")
        {
            var ex = `
            iol.${m} = function()
            {
                return ol.${m}.apply(ol, arguments);
            }
            `;
            //console.log(ex);
            eval(ex);
        }
    }
    return iol;
    
}

function ArryToObject(a1)
{
    var ob = {};
    for(var i in a1)
    {
        ob[a1[i]] = 1;
    }
    return ob;
}

function CheckInterface(icl, cl)
{
    var iml = ArryToObject(Object.getOwnPropertyNames(icl.prototype));
    var ml = ArryToObject(Object.getOwnPropertyNames(cl.prototype));
    //console.log(icl.prototype.Warning);
   
    for(var i in iml)
    {
        if(i != "constructor")
        {
            if(ml[i] == undefined) throw "Unimplmented method";

            var ifu = icl.prototype[i].toString();
            var i1 = ifu.indexOf(")");
            ifu = ifu.substring(0, i1 + 1).split(" ").join("").split("\t").join("").split("\r").join("").split("\n").join("");

            var fu = cl.prototype[i].toString();
            var i2 = fu.indexOf(")");
            fu = fu.substring(0, i2 + 1).split(" ").join("").split("\t").join("").split("\r").join("").split("\n").join("");

            //console.log(ifu);
            //console.log(fu);
            if(ifu != fu) throw "Method implemented incorrectly";

            
        }
    }


}






try
{
CheckInterface(ILogger, Logger);



var v = Interface(ILogger, Logger);
console.log(v.title);
var vv = v.Warning("hi");
var vv1 = v.Info();
console.log(vv);
}
catch(err)
{
    console.log(err);
}
