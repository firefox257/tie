var httpport = 8080;
var httpsport =  4443;

var http = require('http');
var https = require('https');

var $path = require("path");
var fs = require('fs');

/*function includeStartOrder(p)
{
	if(p.startsWith("/"))
	{
		return require(`${__dirname}${p}`);
	}
	return require(p);
}*/
const include = (function()
{
	var order = [];
	var started = false;
	function startlist()
	{
		if(order.length > 0)
		{
			var p = order[0];
			
			order.shift();
			if(p.startsWith("/"))
			{
				//console.log(`path1:${__dirname}${p}`);
				require(`${__dirname}${p}`, startlist);
				return;
			}
			require(p, startlist);
		}
		else
		{
			started = false;
		}
	}

	return function(p)
	{
		order.push(p);
		if(!started) startlist();
	}
})();
globalThis.include = include;
function includeDir(path)
{
	var atpath = path;
	const dirPath = $path.join(__dirname, path);

	//console.log("dirPath: " + dirPath);
	//console.log("path: " + path);
	//try
	//{
		var files = fs.readdirSync(dirPath);
		files.map((file)=>
		{
			if(fs.lstatSync(dirPath + file).isDirectory())
			{
				//console.log("--isdir");
				//console.log(`path:${path}${file}`)
				atpath = `${path}${file}/`;
				includeDir(`${path}${file}/`);
			}
			else
			{
				//console.log(dirPath +file);
				//console.log(`path:${path}${file}`);
				if(file.endsWith(".js"))
				{
					atpath = `${path}${file}`;
					include(`${path}${file}`);
				}
			}
		});
	//}
	//catch(err)
	//{
		//console.log(`Unable to scan ${atpath} at ${err.lineNumber}: ${err} `);
	//}
}
globalThis.includeDir = includeDir;

include("/mimetype");
include("/TieResource");
include("/Resources");

$.run("testtie/func");

//includeDir("/Shared/Exceptions/");
//includeDir("/Shared/Api/");

//include("/Shared/Mapper.js");
//include("/Shared/Route.js");
//include("/Shared/InterfaceUtils.js");
//include("/Shared/DI.js");


//includeDir("/Interfaces/");
//includeDir("/Services/");
//includeDir("/ServerComponents/");

//includeDir("/Controllers/");
//include("/Injection.js");

var httpsoptions = {
  key: fs.readFileSync(`key.pem`),
  cert: fs.readFileSync(`cert.pem`)
};


var atsys = {};

var allowHead = {
	"Access-Control-Allow-Orgin": "*",
	"Access-Control-Allow-Methods": "OPTIONS, POST, GET, PUT, PATCH, DELETE",
	"Access-Control-Max-Age": 2592000, //30 days
	"Access-Control-Allow-Headers":"Orgin, X-Requested-With, Content-Type, Accept, Athorization"
};


function write(req, res, code, msg)
{
	var head = {
		"Content-Type": mimetype(".txt")
	};
	res.writeHead(code, head);
	res.write(msg);
	res.end();
}
function handelwebHandel(req, res)
{
	//console.log("type method: " + req.method);
	//console.log("start");
	if(req.method === "OPTIONS")
	{
		res.writeHead(204, allowHead);
		res.end();
		return;
	}
	
	var url = decodeURI(req.url.toString());
	//console.log("url:" +url);
	
	
	if(url.startsWith("/api"))
	{
		Route.Send(url, req, res);
		return;
	}
	

	
	if(url.endsWith("/"))url+="index.html";

	//if(url.startsWith("/WebData"))
	//{
		//url = __dirname + "/" + url.substring(1, url.length);
	//}
	//else
        url=__dirname + "/../Web/" + url.substring(1, url.length);


	//console.log("url:" + url);
	if(!fs.existsSync(url))
	{
		write(req, res, 404, url + " Not Found!");
		return;
	}
	
	
	if(fs.statSync(url).isDirectory()) url +="/index.html";
	
	fs.stat(url, function(err, stat)
	{
		if(err)
		{
			write(req, res, 404, url + " Not Found!");
		}
		else
		{
			var range = req.headers.range;
			var fileSize = stat.size;
			var mtype = mimetype(url);
			//console.log(url);
			//console.log(`mime type: ${mtype}`);
			
			if(range)
			{
				var parts = range.replace(/bytes=/, "").split("-");
				var start = parseInt(parts[0], 10);
				var end = parts[1] ? parseInt(parts[1], 10): fileSize -1;
				var chunksize = (end-start) + 1;
				var file = fs.createReadStream(url, {start, end});
				var head = {
					"Content-Range": `bytes ${start}-${end}/${fileSize}`,
					"Accept-Ranges": "bytes",
					"Content-Length": chunksize,
					"Content-Type": mtype
				};
				res.writeHead(206, head);
				file.pipe(res);
			}
			else
			{
				var head = {
					"Content-Length": fileSize,
					"Content-Type": mtype
				};
				res.writeHead(200, head);
				fs.createReadStream(url).pipe(res);
			}
		}
		
		
	});
	
	
}
function handelweb(req, res)
{
	try
	{
		handelwebHandel(req, res);
	}
	catch(err)
	{
		ExceptionResponse(req, res, err);
	}
}


http.createServer(handelweb).listen(httpport);
https.createServer(httpsoptions,handelweb).listen(httpsport);


//webAppReady();

console.log("Ready"+__dirname);
