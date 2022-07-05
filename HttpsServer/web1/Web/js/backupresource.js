 
function argEval(___args, ___script)
{
    eval(`
        (function(${___args[0].join(",")})
        {
            ${___script}
        }).apply(undefined, ___args[1]);
    `);
}

function fastPathArgs(obj, path, v)
{
    path = path.trim();
    var p = path.split(".");
    var last = p.pop();
    if(obj.def == undefined) obj.def = {};
    if(obj.objs == undefined) obj.objs = {};
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

    if(last != "*")
    {

        if(v != undefined)
        {
            at[last] = v;
            atd[last] = {done: true};
            return;
        }
        return [[last], [at[last]]];
    }

    var narray = [];
    var nobj = [];
    for(var i in at)
    {
        narray.push(i);
        nobj.push(at[i]);
    }
    return [narray, nobj];

}

function fastPathInclude(obj, paths)
{
    var names = [];
    var objs = [];
    paths.map(p =>
    {
        var vv = fastPathArgs(obj, p);
        names = [...names, ...vv[0]];
        objs = [...objs, ...vv[1]];
    });
    return [names, objs];
}

function evalTScript(obj, src)
{
    src = src.trim();
    var b = {};
    var ar = src.split("##").filter(d=>d !="");

    var l = ar.length;
    for(var i = 0; i < l; i += 2)
    {
        b[ar[i]] = ar[i+1];
    }

    if(b.include != undefined)
    {
        var paths = b.include.split(/\r?\n/).map(d=>d.trim()).filter(d=>d != "");
        var vv = fastPathInclude(obj, paths);
        argEval(vv, b.js);
    }
    else
    {
        eval(`
            (function()
            {
                ${b.js}
            }).apply(undefined);
        `);
    }

}


var b = {};

class try1
{
    func()
    {
        console.log("here at try1");
    }
}

fastPathArgs(b, "try1.tools.msg", "hi there");
fastPathArgs(b, "try1.tools.try1", try1);
fastPathArgs(b, "athere.more", "and this is it");

var script = `
##include##

try1.tools.*
athere.more
##js##
console.log(msg);
var t = new try1();
t.func();
console.log(more);

`;

evalTScript(b, script);

