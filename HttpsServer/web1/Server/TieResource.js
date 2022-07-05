const _fs = require("fs");
const _path = require("path");

 var $ ={};
 (function()
{
        var __includes = {};

        ////////////////////////////////////////////////// start resources

        function getFastPath(obj, path)
        {
            path = path.trim();
            var p = path.split("/");
            var last = p.pop();
            var at = obj;
            p.map(d=>{
                at = at[d];
            });
            if( at == "undefined")
            {
                console.log(`Error in include ${path} does not exist`);
                console.log(typeof at);

            }
            if(last == "*")
            {
                var names = [];
                var objs = [];
                var props = Object.getOwnPropertyNames(at);
                for(var i = 0; i < props.length; i++)
                {
                    names.push(props[i]);
                    objs.push(at[props[i]]);
                }

                return [names, objs];
            }

            return  [[last], [at[last]]];
        }

        function setFastPath(obj, path, v)
        {
            path = path.trim();
            var p = path.split("/");
            var last = p.pop();
            var at = obj;
            p.map(d=>{
                if(at[d] == undefined) at[d] = {};
                at = at[d];
            });
            //delete at[last];
            Object.defineProperty(at, last,
            {
                configurable: true,
                get: function()
                {
                    return v;
                }
            });
        }

        function setObj(obj, name, v)
        {

            //delete at[last];
            Object.defineProperty(obj.objcs, name,
            {
                configurable: true,
                get: function()
                {
                    return v;
                }
            });
        }



        function evalNoInclude(___src, ___exports, ___obj)
        {

            eval(`
                (function()
                {
                    ${___src}
                    ${___exports}
                }).apply(undefined);
            `);
        }
        function evalWithInclude(___includes, ___src, ___exports, ___obj)
        {

            eval(`
                (function(${___includes[0].join(",")})
                {
                    ${___src}
                    ${___exports}
                }).apply(undefined, ___includes[1]);

            `);
        }

        function resource(path, filepath)//obj, objc, path, filepath)
        {
            path = path.trim();
            var p = path.split("/");
            var last = p.pop();
            var at = __includes;;
            var opath = "";
            p.map(d=>{
                if(at[d] == undefined) at[d] = {};
                at = at[d];
                opath += `${d}/`;
            });

            function bindGet()
            {
                return function()
                {
                    var src = _fs.readFileSync(`${__dirname}/${filepath}`, {encoding: "utf8", flag:"r"});//$.syncfetchtext(filepath);
                    src = src.trim();
                    var b = {};
                    var ar = src.split("##").filter(d=>d !="");

                    var l = ar.length;
                    for(var i = 0; i < l; i += 2)
                    {
                        b[ar[i]] = ar[i+1];
                    }
                    var includes;
                    var exports;
                    var css;
                    var html;
                    var comp;
                    if(b.include != undefined)
                    {
                        var v = b.include.split(/\r?\n/).map(d=>d.trim()).filter(d=>d != "");
                        var names = [];
                        var objs = [];
                        for(var i = 0; i < v.length; i++)
                        {
                            var inc = getFastPath(__includes, v[i]);
                            names = [...names, ...inc[0]];
                            objs = [...objs, ...inc[1]];
                        }
                        includes = [names, objs];

                    }
                    if(b.export != undefined)
                    {
                        exports = "";
                        var v = b.export.split(/\r?\n/).map(d=>d.trim()).filter(d=>d != "");
                        for(var i = 0; i < v.length; i++)
                        {
                            exports += ` setFastPath(___obj, "${opath}${v[i]}", ${v[i]});  `;
                        }
                    }
                    else exports = "";

                    var jssrc;


                    jssrc = b.js;

                    if(includes == undefined)
                    {
                        evalNoInclude(jssrc, exports, __includes);
                    }
                    else
                    {
                        evalWithInclude(includes, jssrc, exports, __includes);
                    }

                    return at[last];

                }//end func
            }
            Object.defineProperty(at, last,
            {
                configurable: true,
                get: bindGet()
            });

        }//end tieR

        $.resource = resource;



        function run(path)
        {
            var p = path.split("/");
            var at = __includes;
            p.map(d=>
            {
                at = at[d];
            });
            at();
            //return at;
        }
        $.run = run;


})();

globalThis.$ = $;
