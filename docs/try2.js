

onmessage = function(e)
{

	var b = 1;
	for(var i =0; i < e.data.time; i++)
	{
		b = (b + 1 * 20) %123;
	}


	console.log(e.data.msg);


}
