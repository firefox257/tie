/*
example of input
{
	from :[....],
	to: [....],
	duration: time milliseconds,
	callback:func([...])
}
example of output

[....]
*/


var list = [];
var started = false;
var time1;
var time2;

var p0 = 0.0;
var p1 = 0.1;
var p2 = 0.9;
var p3 = 1.0;
//using cubic bezier curve
function doAnim()
{
	time2 = Date.now();
	var laps = time2 - time1;
	time1 = time2;
	
	
	
	list.forEach((item)=>
	{
		var t = item.timeleft / item.duration;
		var t1 = 1 - t;
		
		var b = 1- ((t1 * t1 * t1 * p0) +  (3 * (t1 * t1 * t)  * p1) + (3 * t1 * t * t * p2) + (t * t * t * p3));
		var rl = [];
		
		
		for(var i = 0; i < item.from.length; i++)
		{
			
			var c = item.to[i] - item.from[i];
			var n = (c * b) + item.from[i];
			rl.push(n);
		}
		item.callback(rl);
		
		
	});
	list = list.filter((item)=>
	{
		if(item.timeleft <=0) return false;
		item.timeleft -= laps;
		//console.log("timeleft");
		//console.log(item.timeleft);
		if(item.timeleft < 0) item.timeleft = 0;
		return true;
		
	});
	
	
	if(list.length > 0)setTimeout(doAnim, 0);
	else started = false;
}
export function animate(obj)
{
	obj.timeleft = obj.duration;
	list.push(obj);
	if(!started)
	{
		started = true;
		time1 = Date.now();
		setTimeout(doAnim, 0);
	}
	
}
