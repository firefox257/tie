

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
    //console.log(methods);
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
globalThis.Interface = Interface;

function ArryToObject(a1)
{
    var ob = {};
    for(var i in a1)
    {
        ob[a1[i]] = 1;
    }
    return ob;
}
globalThis.ArryToObject = ArryToObject;

function CheckInterface(icl, cl)
{
    var iml = ArryToObject(Object.getOwnPropertyNames(icl.prototype));
    var ml = ArryToObject(Object.getOwnPropertyNames(cl.prototype));
    //console.log(icl.prototype.Warning);
    var err = "";
    for(var i in iml)
    {
        if(i != "constructor")
        {
            if(ml[i] == undefined)
            { 
                err += `"${i}" method is not implemented.\r\n` ;
            }
            else
            {
                var ifu = icl.prototype[i].toString();
                var i1 = ifu.indexOf(")");
                ifu = ifu.substring(0, i1 + 1).split(" ").join("").split("\t").join("").split("\r").join("").split("\n").join("");

                var fu = cl.prototype[i].toString();
                var i2 = fu.indexOf(")");
                fu = fu.substring(0, i2 + 1).split(" ").join("").split("\t").join("").split("\r").join("").split("\n").join("");

                //console.log(ifu);
                //console.log(fu);
                if(ifu != fu)
                {
                    err += `"${i}" method implemented incorrectly\r\n`;
                }
            }   
        }
    }
    if( err != "")
    {
        err = "Interface errors.\r\n" + err;
        throw new InterfaceException(err);
    }


}
globalThis.CheckInterface = CheckInterface;
