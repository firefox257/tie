function readTextFile(file, callback)
{
	var fr = new FileReader();
	fr.onload = function()
	{
		callback(fr.result);
	};
	
	fr.readAsText(file);
}
globalThis.readTextFile = readTextFile;
