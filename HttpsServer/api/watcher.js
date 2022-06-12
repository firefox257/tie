const chokidar = require('chokidar');
const $path = require("path");
const fs = require('fs');
const fse = require('fs-extra');
/*
events
-addDir add directory
-add addes file
-change changes in file
-unlinkDir same as remove dir.
-unlink remove file.


to rename file add then unlink


*/


var watchlist = [
    "WebJs",
    "Shared"
];

var joinlist  =[
    "Shared/Exceptions",
    "Shared/Api",
    "Shared/Mapper.js",
    "Shared/Route.js",
    "Shared/InterfaceUtils.js",
    "Shared/DI.js",
    "WebJs/tieabv.js",
    "WebJs/Interfaces",
    "WebJs/Services",
    "WebJs/Utils",
    "WebJs/Injection.js",
    "WebJs/UI",
    "WebJs/Pages"

];

var outfile = "Web/main.js";

var htmlwatchlist = [
    "Html"
];
var htmloutdir = "Web";

//var trackobj = {};
function startjs(path)
{
   


    //console.log(`Path:${path}`);
    let stat = fs.lstatSync(path);
    if(stat.isDirectory())
    {
        var files = fs.readdirSync(path);
		files.map((file)=>
		{
            startjs(`${path}/${file}`);
        });
    }
    else
    {
        if(path.endsWith(".js"))
        {
            fs.appendFileSync(outfile, `(function(){\r\n`);
            fs.appendFileSync(outfile, fs.readFileSync(path));
            fs.appendFileSync(outfile,  `})();\r\n`);
        }
    }
        
        


    

}

for(var i = 0; i < watchlist.length; i++)
{
    chokidar.watch(watchlist[i]).on('all', (event, path) =>
    {
        fs.writeFileSync(outfile, "");
        if(event == "add" || event == "change" || event == "unlink")
        {
            //trackobj = {};
            for(var i = 0; i < joinlist.length; i++)
            {
                startjs(joinlist[i]);
            }
           
        }
    });
}



function copyDir(pathDir)
{
    chokidar.watch(pathDir).on('all', (event, path) =>
    {
       
        if(event == "add" || event == "change" || event == "addDir")
        {
            var outdir = htmloutdir  + path.substring(pathDir.length, path.length);
            console.log("outfile: " + outdir);
            fse.copySync(`${path}`,outdir, {
                overwrite: true
              });
        }
        else if(event == "unlink" || event == "unlinkDir")
        {
            var outdir = htmloutdir  + path.substring(pathDir.length, path.length);
            fse.removeSync(outdir);
        }
       
    });
}
for(var i = 0; i < htmlwatchlist.length; i++)
{
    copyDir(htmlwatchlist[i]);
}

/*
chokidar.watch('test').on('all', (event, path) => {
    console.log(event, path);
  });
  */


