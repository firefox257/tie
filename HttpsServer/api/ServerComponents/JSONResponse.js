

function JSONResponse(req, res, code, obj)
{
	var head = {
		"Content-Type": mimetype(".json")
	};
	res.writeHead(code, head);
	res.write(JSON.stringify(obj));
	res.end();
}
globalThis.JSONResponse = JSONResponse;