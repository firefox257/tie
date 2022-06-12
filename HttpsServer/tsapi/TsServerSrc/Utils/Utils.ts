
globalAny.$init = function (cl:any, ob: any): any
{
    var c = new cl();
    for(var i in ob)
    {
        c[i] = ob[i];
    }
    return c;
}

