




function test(o)
{
    for(var k in o)
    {
        var v = o[k];
        var t = typeof v;
        var desc = Object.getOwnPropertyDescriptor(o, k);
        if(t==="object")
        {
            /*s.e+=`"${k}":`;
            parse(v,s);
            s.e+=",";*/
        }
        else if(t === "function")
        {
           /* if(("" + v).startsWith(k))
            {
                s.e+= `${v},`;
            }
            else
            {
                s.e+=`"${k}":${v},`;
            }*/
        }
        else if(t === "number")
        {
            //s.e += `"${k}": ${v},`;
        }
        else if(desc != undefined && (desc.get != undefined || desc.set != undefined))
        {

            
            var v1 = `${desc.get}`;
            console.log(v1);
            var oo = {
                g: undefined
            }


            Object.defineProperty(oo, "g",
			{
				get: function()
                {
                    return o.b;
                },
				set:function(v)
                {
                    o.b = v;
                }
			});

            console.log(oo.g);
            /*if(desc.get!=undefined)
            {
                s.e+=`${desc.get},`;
            }
            if(desc.set!=undefined)
            {
                s.e+=`${desc.set},`;
            }*/
        }
        else if(isNaN(v))
        {
            //s.e+=`"${k}":"${v}",`;
        }
        else
        {
           // s.e+=`"${k}":${v},`;
        }

    }
}

var obj = 
{
    _b: "333",
    get b()
    {
        console.log("here1");
        return this._b;
    },
    set b(v)
    {
        this._b = v;
    }
};
console.log(obj.b);
test(obj);

