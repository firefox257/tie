const path = require("path");
const fs = require("fs");




var servRes = [];
var webRes = [];

/*function fastPath(obj, path, v)
{
     path = path.trim();
    var p = path.split("/");
    var last = p.pop();
    if(obj.def == undefined) obj.def = {};
    if(obj.objs == undefined) obj.objs = {};
    if(obj.comps == undefined) obj.comps = {};
    if(obj.compsdef == undefined) obj.compsdef = {};

    var at = obj.objs;
    var atd = obj.def;

    p.map(d =>
    {
        if(at[d] == undefined)
        {
            at[d] = {};
            atd[d] = {};
        }
        at = at[d];
        atd = atd[d];

    });
    atd[last] = v;
}*/

function makeResourses(basePath, objs)
{
    /*if(objs.def == undefined) objs.def = {};
    if(objs.objs == undefined) objs.objs = {};
    if(objs.comps == undefined) objs.comps = {};
    if(objs.compsdef == undefined) objs.compsdef = {};
    */

    function makePath(p)
    {
        var full = `${basePath}/${p}`;
        var stat = fs.statSync(full);
        if(stat.isDirectory())
        {
            var ff = fs.readdirSync(full);
            for(var i = 0; i < ff.length; i++)
            {
                makePath(`${p}/${ff[i]}`);
            }

        }
        else
        {

            if(full.endsWith(".tie"))
            {
                var src = fs.readFileSync(full, {encoding: "utf8", flag:"r"});
                src = src.trim();
                var b = {};
                var ar = src.split("##").filter(d=>d !="");
                var l = ar.length;
                for(var i = 0; i < l; i += 2)
                {
                    b[ar[i]] = ar[i+1];
                }

                if(b.export != undefined)
                {
                    var exports = b.export.split(/\r?\n/).map(d=>d.trim()).filter(d=>d != "");
                    var ii = p.lastIndexOf("/");
                    var pp = p.substring(0, ii);
                    //console.log("p");
                    //console.log(p);
                    for(var i = 0; i < exports.length; i++)
                    {

                        var ex = `${pp}/${exports[i]}`;
                        //console.log("ex");
                        //console.log(ex);
                        //fastPath(objs, ex, {filepath: p,  loaded: false});
                        objs.push(`$.resource("${ex}", "${p}");`);

                    }
                }
                if(b.comp !=undefined)
                {
                    var comp = b.comp.split(/\r?\n/).map(d=>d.trim()).filter(d=>d != "");
                    var ii = p.lastIndexOf("/");
                    var pp = p.substring(0, ii);
                    //console.log("p");
                    //console.log(p);
                    for(var i = 0; i < comp.length; i++)
                    {

                        //var ex = `${pp}/${comp[i]}`;
                        //console.log("ex");
                        //console.log(ex);
                       // fastPath(objs, ex, {filepath: p, type: "comp"});
                        //objs.compsdef[comp[i]] = {filepath: p, loaded:false};
                        objs.push(`$.resourceComp("${comp[i]}", "${p}");`);


                    }
                }//end comps

            }


        }

    }//end makePath

      var flist = fs.readdirSync(basePath);
        for(var i = 0; i < flist.length; i++)
        {
            makePath(flist[i]);
        }

}

//files = fs.readdirSync(__dirname + "/Server");
makeResourses(`${__dirname}/Server`, servRes);
//makeResourses(`${__dirname}/Web`, webRes);

fs.writeFileSync(`${__dirname}/Server/Resources.js`, servRes.join("\r\n"));
//fs.writeFileSync(`${__dirname}/web/Resources.js`, webRes.join("\r\n"));




