
//Edit in the shared directory
//dependency injection.
const DI = (function()
{
    var objs:any = [];
    var atcount = 0;

    function InterfaceValidate(cl:any, icl:any)
    {

    }
    var at=  {
        //Singlton
        Singlton(cl:any, icl:string)
        {
            var at= {
                cl: cl,
                obj: (function()
                {
                    var at = new cl();
                    if(at.$di != undefined)
                        {
                            for(var i in at.$di)
                            {
                                //console.log(at.$di[i]);
                                at.$di[i] = objs[i].get();
                            }
                        }

                        return at;
                })(),
                getObj()
                {
                    return this.obj;
                },
                get()
                {
                        return this.getObj();
                }
            };
            if(icl != undefined)
            {
                objs[icl] = at;
            }
            else
            {
                objs[cl.name] = at;
            }

        },
        //Transitory
        Transitory(cl:any, icl:string)
        {
            var at = {
                cl: cl,
                get()
                {
                    var at =  new this.cl();

                    if(at.$di != undefined)
                    {
                        for(var i in at.$di)
                        {
                            at.$di[i] = objs[i].get();
                        }
                    }

                 
                   return at;
                }
            };
            if(icl != undefined)
            {
                objs[icl] = at;
            }
            else
            {
                objs[cl.name] = at;
            }
        },
        Reset()
        {
            atcount++;
        },
        //Scope on each request api will get rest but remain the same throught that request session.
        Scope(cl:any, icl:string)
        {
            var at= {
                atcountthis: atcount,
                cl: cl,
               obj: (function()
               {
                   var at = new cl();
                   if(at.$di != undefined)
                    {
                        for(var i in at.$di)
                        {
                            //console.log(at.$di[i]);
                             at.$di[i] = objs[i].get();
                        }
                    }

                    return at;
               })(),
               getObj()
               {
                   if(at.atcountthis != atcount)
                   {
                       at.obj = (function()
                       {
                           var at = new cl();
                           if(at.$di != undefined)
                            {
                                for(var i in at.$di)
                                {
                                    //console.log(at.$di[i]);
                                     at.$di[i] = objs[i].get();
                                }
                            }
        
                            return at;
                       })();
                       at.atcountthis = atcount;
                   }
                   return this.obj;
               },
               get()
               {
                    return this.getObj();
               }
            };
            if(icl != undefined)
            {
                objs[icl] = at;
            }
            else
            {
                objs[cl.name] = at;
            }

        },

        Get(cl:any)
        {
            if(typeof cl  == "string")
            {
                return objs[cl].get();
            }
            return objs[cl.name].get();
        }
    };
   
    return at;

})();
globalAny.DI = DI;

/*
class try1
{
    x = 1;
   
    constructor()
    {

    }
    func()
    {
        console.log("here1");
    }
}
class try2
{
    $di = {try1};
    constructor()
    {

    }
    func()
    {
        console.log("and more");
    }
}

DI.Transitory(try1);
DI.T(try2);

var v = DI.Get(try2);
v.$di.try1.func();

*/






