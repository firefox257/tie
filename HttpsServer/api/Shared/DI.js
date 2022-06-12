//dependency injection.
const DI = (function()
{
    var objs = [];
    var atcount = 0;

    return {
        //Singlton
        Singlton(cc1, cc2)
        {

            var cl;
            var icl;
            if(cc2 == undefined)
            {
                cl = cc1;
            }
            else
            {
                icl = cc1;
                cl = cc2;
            }
           
            if(icl == undefined)
            {
                var at= {
                    cl: cl,
                    icl: icl,
                obj: (function()
                {
                    var at = new this.cl();
                    /*if(at.$di != undefined)
                        {
                            for(var i in at.$di)
                            {
                                //console.log(at.$di[i]);
                                at.$di[i] = objs[i].get();
                            }
                        }*/

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


                objs[cl.name] = at;
            }
            else
            {
                var at= {
                    cl: cl,
                obj: (function()
                {
                    var at = Interface(this.icl, this.cl);//new cl();
                    /*if(at.$di != undefined)
                        {
                            for(var i in at.$di)
                            {
                                //console.log(at.$di[i]);
                                at.$di[i] = objs[i].get();
                            }
                        }*/

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


                objs[icl.name] = at;
            }

        },
        //Transitory
        Transitory(cc1, cc2)
        {
            var cl;
            var icl;
            if(cc2 == undefined)
            {
                cl = cc1;
            }
            else
            {
                icl = cc1;
                cl = cc2;
            }

            if(icl == undefined)
            {
                var at = {
                    cl: cl,
                    icl: icl,
                    get()
                    {
                        var at =  new this.cl();

                        /*if(at.$di != undefined)
                        {
                            for(var i in at.$di)
                            {
                                at.$di[i] = objs[i].get();
                            }
                        }*/

                    
                    return at;
                    }
                };
                objs[cl.name] = at;
            }
            else
            {
                var at = {
                    cl: cl,
                    icl: icl,
                    get()
                    {
                        var at =  Interface(this.icl, this.cl);

                        /*if(at.$di != undefined)
                        {
                            for(var i in at.$di)
                            {
                                at.$di[i] = objs[i].get();
                            }
                        }*/

                    
                    return at;
                    }
                };
                objs[icl.name] = at
            }
            
        },
        Reset()
        {
            atcount++;
        },
        //Scope on each request api will get rest but remain the same throught that request session.
        Scope(cc1, cc2)
        {
            var cl;
            var icl;
            if(cc2 == undefined)
            {
                cl = cc1;
            }
            else
            {
                icl = cc1;
                cl = cc2;
            }

            if(icl == undefined)
            {
                var at= {
                    atcountthis: atcount,
                    cl: cl,
                    icl:icl,
                obj: (function()
                {
                    var at = new cl();
                    /*if(at.$di != undefined)
                        {
                            for(var i in at.$di)
                            {
                                //console.log(at.$di[i]);
                                at.$di[i] = objs[i].get();
                            }
                        }*/

                        return at;
                })(),
                getObj()
                {
                    if(at.atcountthis != atcount)
                    {
                        at.obj = (function()
                        {
                            var at = new cl();
                            /*if(at.$di != undefined)
                                {
                                    for(var i in at.$di)
                                    {
                                        //console.log(at.$di[i]);
                                        at.$di[i] = objs[i].get();
                                    }
                                }*/
            
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
                objs[cl.name] = at;
            }
            else
            {
                var at= {
                    atcountthis: atcount,
                    cl: cl,
                    icl:icl,
                obj: (function()
                {
                    var at = Interface(icl, cl);
                    /*if(at.$di != undefined)
                        {
                            for(var i in at.$di)
                            {
                                //console.log(at.$di[i]);
                                at.$di[i] = objs[i].get();
                            }
                        }*/

                        return at;
                })(),
                getObj()
                {
                    if(at.atcountthis != atcount)
                    {
                        at.obj = (function()
                        {
                            var at = new cl();
                            /*if(at.$di != undefined)
                                {
                                    for(var i in at.$di)
                                    {
                                        //console.log(at.$di[i]);
                                        at.$di[i] = objs[i].get();
                                    }
                                }*/
            
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
                objs[icl.name] = at;
            }
        },

        Get(cl)
        {
            return objs[cl.name].get();
        }
    };
})();
globalThis.DI = DI;

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






