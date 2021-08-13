//const $import = (0,eval)("this");

export var $global = {};


export function $q(p, o)
{
	if(o)
	{
		return o.querySelector(p);
	}
	return document.querySelector(p);
}


export function $qa(p, o)
{
	if(o)
	{
		return o.querySelectorAll(p);
	}
	return document.querySelectorAll(p);
	
}


export function $attr(dom, a, s)
{
	if(s)
	{
		dom.setAttribute(a, s)
	}
	else
	{
		return dom.getAttribute(a);
	}
}


export function $hasAttr(dom, a)
{
	return dom.hasAttribute(a);
}

export function $removeattr(dom, a)
{
	dom.removeAttribute(a);
}

export var $msgc = {
	_funcs: {},
	subscribe: function(name, func)
	{
		if(!this._funcs[name]) this._funcs[name] = []
		this._funcs[name].push(func);
	},
	send: function(name, ...args)
	{
		if(this._funcs[name])
		{
			for(var i = 0; i < this._funcs[name].length; i++)
			{
				this._funcs[name][i].apply(null, args);
			}
		}
	},
	unsubscribe: function(name, func)
	{
		var index = this._funcs[name].indexOf(func);
		if(index > -1) this._funcs[name].splice(index, 1);
	}
};


export function $fastpath(obj, p, v)
{
	if(!obj) return;
	if(v===undefined)
	{
		return p.split(".").reduce((o, pp)=>
		{
			if(!o) return o;
			return o[pp];
		}, obj);
		
	}
	
	var at = p.split(".");
	if(at.length == 1)
	{
		obj[p] = v;
	}
	else
	{
		var atend = at.pop();
		at.reduce((o,p)=>
		{
			if(!o[p]) o[p] = {};
			return o[p];
		}, obj)[atend] = v;
	}
}

//=======================
var __comps = {};


export function $comp(name, o)
{
	if(o)
	{
		if(o.css)
		{
			document.head.insertAdjacentHTML("beforeend", `<style>${o.css}</style>`);
		}
		__comps[name] = o;
		
	}
	else
	{
		return __comps[name];
	}
};




function createGetSet(o, path1, getfunc, setfunc)
{
	
	
	
	var att = path1.split(".");
	if(att.length <=1)
	{
		Object.defineProperty(o, path1, 
		{
			get:getfunc,
			set:setfunc
		});
		
	}
	else
	{
		var atend = att.pop();
		var pathp = att.join(".");
		Object.defineProperty($fastpath(o, pathp), atend, 
		{
			get:getfunc,
			set:setfunc
		});
	}
	
}
function createGet(o, path1, getfunc)
{
	
	
	
	var att = path1.split(".");
	if(att.length <=1)
	{
		Object.defineProperty(o, path1, 
		{
			get:getfunc
		});
		
	}
	else
	{
		var atend = att.pop();
		var pathp = att.join(".");
		Object.defineProperty($fastpath(o, pathp), atend, 
		{
			get:getfunc
		});
	}
	
}
//tie="objectname:domOrParentObj" tie dom stuff to object name. 
function getDomTie(dom)
{
	var attri = $attr(dom, "tie");
	if(!attri) return undefined;
	var a = attri.split(",");
	
	for(var i = 0; i < a.length; i++)
	{
		a[i] = a[i].split(":").map((a)=> a.trim());
	}
	return a;
}
//tieevents="objectname:domOrParentObj"
function getDomTieEvents(dom)
{
	var attri = $attr(dom, "tieevents");
	if(!attri) return undefined;
	var a = attri.split(",");
	
	for(var i = 0; i < a.length; i++)
	{
		a[i] = a[i].split(":").map((a)=> a.trim());
	}
	return a;
}
//tieread="objectname:domOrParentObj"
function getDomTieRead(dom)
{
	var attri = $attr(dom, "tieread");
	if(!attri) return undefined;
	var a = attri.split(",");
	
	for(var i = 0; i < a.length; i++)
	{
		a[i] = a[i].split(":").map((a)=> a.trim());
	}
	return a;
}
//tieclass="objectname"
function getDomTieClass(dom)
{
	var attri = $attr(dom, "tieclass");
	if(!attri) return undefined;
	return attri.trim();
}
//tiedom="objectname" tie dom to object name. 
function getDomTieDom(dom)
{
	var attri = $attr(dom, "tiedom");
	if(!attri) return undefined;
	return attri.trim();
}
//tieradio="objectname" specific for radio buttons.
function getDomTieRadio(dom)
{
	var attri = $attr(dom, "tieradio");
	if(!attri) return undefined;
	return attri.trim();
}
//tieattributes="objectname:domOrParentObj"
function getDomTieAttributes(dom)
{
	var attri = $attr(dom, "tieattributes");
	if(!attri) return undefined;
	var a = attri.split(",");
	
	for(var i = 0; i < a.length; i++)
	{
		a[i] = a[i].split(":").map((a)=> a.trim());
	}
	return a;
}
//tieobj="name"
function getDomTieObj(dom)
{
	var attri = $attr(dom, "tieobj");
	if(!attri) return undefined;
	return attri.trim();
}
//trackevents="event1,event2"
function getDomTrackEvents(dom)
{
	var attri = $attr(dom, "trackevents");
	if(!attri) return undefined;
	var a = attri.split(",").map((a)=>a.trim());
	return a;
}

function setCompDomAttributes(scaf, dom, objscaf)
{
	for(var i = 0; i < dom.attributes.length; i++)
	{
		var attri = dom.attributes[i].name;
		var value = dom.attributes[i].value;
		if(!(attri == "tie" || attri == "tieevents" || attri == "tietype" || attri=="tieobj" || attri == "tieattributes"))
		{
			//potential @obj
			objscaf.obj.attributes[attri] = value;
		}
	}//end for*/
}

function addCompAttributesSetTracker(po, o, path1, path2)
{
	$fastpath(po.tracker, path1).push(function(v)
	{
		//potential @obj
		var v1 = $fastpath(o, path2);
		if(v != v1) $fastpath(o, path2, v);
	});
}

function createCompAttributesGetSet(o, path1)
{
	createGetSet(o, path1,
	function()
	{
		return $fastpath(o.backerfields, path1);
	},
	function(v)
	{
		$fastpath(o.backerfields, path1, v);
		var tracker = $fastpath(o.tracker, path1);
		for(var i = 0; i < tracker.length; i++)
		{
			tracker[i](v);
		}
	});
	
}

function setCompAttributesBackerTracker(objscaf, parentobjscaf)
{
	var tieattributes = objscaf.tieattributes;
	var o = objscaf.obj;
	var po = parentobjscaf.obj;
	//see if exists first
	for(var i = 0; i < tieattributes.length; i++)
	{
		if(!($fastpath(po, "backerfields." + tieattributes[i][0])) )
		{
			if($fastpath(po, tieattributes[i][0])) 
			{
				$fastpath(po, "backerfields." + tieattributes[i][0],$fastpath(po, tieattributes[i][0]));
			}
			else $fastpath(po, "backerfields." + tieattributes[i][0], null);
			
			$fastpath(po, "tracker." + tieattributes[i][0], []);
			
			//create get set
			createTieGetSet(po, tieattributes[i][0]);
		}
		//if found then only add a tracker
		$fastpath(o, tieattributes[i][1], $fastpath(po, "backerfields." + tieattributes[i][0]) );
		addCompAttributesSetTracker(po, o, tieattributes[i][0], tieattributes[i][1]); 
	}
}

function setCompToParentCompTies(objscaf, parentobjscaf)
{
	
	if(objscaf.tieattributes)
	{
		if(!parentobjscaf)
		{
			console.log("No parent object to tieattributes ");
			console.log(dom);
			console.trace();
			return;
		}
		setCompAttributesBackerTracker(objscaf, parentobjscaf);
		
	}
	if(objscaf.tieevents)
	{
		if(!parentobjscaf)
		{
			console.log("No parent object to tieevents ");
			console.log(dom);
			console.trace();
			return;
		}
		var o = objscaf.obj;
		var po = parentobjscaf.obj;
		var tieevents = objscaf.tieevents;
		for(var i = 0; i < tieevents.length; i++)
		{
			$fastpath(o.attributes, tieevents[i][1],  $fastpath(po, tieevents[i][0]));
		}
	}
	if(objscaf.tieobj)
	{
		if(!parentobjscaf)
		{
			console.log("No parent object to tieobj ");
			console.log(dom);
			console.trace();
			return;
		}
		$fastpath(parentobjscaf.obj, objscaf.tieobj, objscaf.obj.attributes);
	}
}

var uniquename = 0;

function remakeDom(objscaf)
{
	var tempdom = document.createElement("div");
	
	if(objscaf.objfunc.html)
	{
		tempdom.innerHTML =objscaf.objfunc.html.trim().replaceAll("$uniquename", "____name" + uniquename);
	}
	else
	{
		if(!objscaf.obj.html)
		{
			console.log("object does not have html set.");
			console.log(objscaf.dom);
			console.trace();
			return;
		}
		tempdom.innerHTML =objscaf.obj.html.trim().replaceAll("$uniquename", "____name" + uniquename);
	}
	uniquename++;
	objscaf.tempdom = tempdom;//tempdom.firstChild;
}

function addDomSetTracker(o, dom, path1, path2)
{
	$fastpath(o.tracker, path1).push(function(v)
	{
		//potential @obj
		var v1 = $fastpath(dom, path2);
		if(v != v1) $fastpath(dom, path2, v);
	});
}

function createTieGetSet(o, path1)
{
	
	createGetSet(o, path1, 
	function()
	{
		return $fastpath(o.backerfields, path1);
	},
	function(v)
	{
		//potential @obj
		$fastpath(o.backerfields, path1, v);
		var tracker = $fastpath(o.tracker, path1);
		for(var i = 0; i < tracker.length; i++)
		{
			tracker[i](v);
		}
	});
}

function setTieBackerTrackerFields(scaf, objscaf, domscaf)
{
	var tie = domscaf.tie;
	if(!tie) return;
	var o = objscaf.obj;
	var dom = domscaf.dom;
	//see if exists first
	for(var i = 0; i < tie.length; i++)
	{
		if(!($fastpath(o, "backerfields." + tie[i][0])) )
		{
			if($fastpath(o, tie[i][0])) 
			{
				$fastpath(o, "backerfields." + tie[i][0],$fastpath(o, tie[i][0]));
			}
			else $fastpath(o, "backerfields." + tie[i][0], null);
			
			$fastpath(o, "tracker." + tie[i][0], []);
			
			//create get set
			createTieGetSet(o, tie[i][0]);
		}
		//if found then only add a tracker
		//potential @obj
		$fastpath(dom, tie[i][1], $fastpath(o, "backerfields." + tie[i][0]) );
		addDomSetTracker(o, dom, tie[i][0], tie[i][1]); 
	}
}

function createDomTieEvent(o, dom, path1, path2)
{
	$fastpath(dom, path2, $fastpath(o, path1));
}

function setTieEvents(scaf, objscaf, domscaf)
{
	var tieevents = domscaf.tieevents;
	if(!tieevents) return;
	var o = objscaf.obj;
	var dom = domscaf.dom;
	for(var i = 0; i < tieevents.length; i++)
	{
		createDomTieEvent(o, dom, tieevents[i][0], tieevents[i][1]);
	}
}

function createTieReadGet(o, dom, path1, path2)
{
	
	createGet(o, path1,
	function()
	{
		return $fastpath(dom, path2);
	});
}

function setTieRead(scaf, objscaf, domscaf)
{
	var tieread = domscaf.tieread;
	if(!tieread) return;
	var o = objscaf.obj;
	var dom = domscaf.dom;
	for(var i = 0; i < tieread.length; i++)
	{
		createTieReadGet(o,  dom, tieread[i][0], tieread[i][1]);
	}
}

function addDomSetClassTracker(o, dom, path)
{
	$fastpath(o.tracker, path).push(function(v)
	{
		//potential @obj
		var v1 = $attr(dom, "class");  
		if(v != v1) $attr(dom, "class", v);
	});
}

function createTieClassGetSet(o, path1)
{
	createGetSet(o, path1, 
	function()
	{
		return $fastpath(o.backerfields, path1);
	},
	function(v)
	{
		//potential @obj
		$fastpath(o.backerfields, path1, v);
		var tracker = $fastpath(o.tracker, path1);
		for(var i = 0; i < tracker.length; i++)
		{
			tracker[i](v);
		}
	});
}

function setTieClass(scaf, objscaf, domscaf)
{
	var tieclass = domscaf.tieclass;
	if(!tieclass) return;
	var o = objscaf.obj;
	var dom = domscaf.dom;
	
	
	if(!($fastpath(o, "backerfields." + tieclass)) )
	{
		if($fastpath(o, tieclass)) 
		{
			$fastpath(o, "backerfields." + tieclass,$fastpath(o, tieclass));
		}
		else $fastpath(o, "backerfields." + tieclass, "");
			
		$fastpath(o, "tracker." + tieclass, []);
			
		//create get set
		createTieClassGetSet(o, tieclass);
	}
	//if found then only add a tracker
	$attr(dom, "class", $fastpath(o.backerfields, tieclass));
	addDomSetClassTracker(o, dom, tieclass); 
	
}

function setTieDom(scaf, objscaf, domscaf)
{
	var tiedom = domscaf.tiedom;
	if(!tiedom) return;
	var o = objscaf.obj;
	var dom = domscaf.dom;
	
	$fastpath(o, tiedom, dom);
	
}

function addDomSetAttributesTracker(o, dom, path1, path2)
{
	$fastpath(o.tracker, path1).push(function(v)
	{
		var v1 = $attr(dom, path2);
		if(v != v1) $attr(dom, path2, v);
	});
}




function createTieAttributesGetSet(o, path1)
{
	
	
	createGetSet(o, path1, 
	function()
	{
		return $fastpath(o.backerfields, path1);
	},
	function(v)
	{
		$fastpath(o.backerfields, path1, v);
		var tracker = $fastpath(o.tracker, path1);
		for(var i = 0; i < tracker.length; i++)
		{
			tracker[i](v);
		}
	});
	
}

function setTieAttributes(scaf, objscaf, domscaf)
{
	var tieattributes = domscaf.tieattributes;
	if(!tieattributes) return;
	var o = objscaf.obj;
	var dom = domscaf.dom;
	//console.log("setTieAttributes");
	//console.log(objscaf.tempdom.firstChild);
	for(var i = 0; i < tieattributes.length; i++)
	{
		if(!($fastpath(o, "backerfields." + tieattributes[i][0])) )
		{
			if($fastpath(o, tieattributes[i][0])) 
			{
				$fastpath(o, "backerfields." + tieattributes[i][0],$fastpath(o, tieattributes[i][0]));
			}
			else $fastpath(o, "backerfields." + tieattributes[i][0], null);
			
			$fastpath(o, "tracker." + tieattributes[i][0], []);
			
			//create get set
			createTieAttributesGetSet(o, tieattributes[i][0]);
		}
		//if found then only add a tracker
		//potential @obj
		$attr(dom, tieattributes[i][1], $fastpath(o, "backerfields." + tieattributes[i][0]));
		addDomSetAttributesTracker(o, dom, tieattributes[i][0], tieattributes[i][1]); 
	}
	
}

function createTrackEvent(o, dom, path)
{
	$fastpath(dom, path, function(e)
	{
		var tie= getDomTie(this);
		//var tieread= getDomTieRead(this);
		var tieclass= getDomTieClass(this);
		//do later
		//domscaf.tieradio= getDomTie(dom);
		var tieattributes= getDomTieAttributes(this);
		
		if(tie)
		{
			for(var i = 0; i < tie.length; i++)
			{
				//potential @obj
				var v1 = $fastpath(o, tie[i][0]);
				var v2 = $fastpath(dom, tie[i][1]);
				if(v1 != v2)
				{
					$fastpath(o, tie[i][0], v2);
				}
			}
		}
		if(tieclass)
		{
			var v1 = $fastpath(o, tieclass);
			var v2 = $attri(dom, "class");
			//potential @obj
			if(v2 != v1) $fastpath(o, tieclass, v2);
		}
		if(tieattributes)
		{
			for(var i = 0; i < tieattributes.length; i++)
			{
				var v1 = $fastpath(o, tieattributes[i][0]);
				var v2 = $attri(dom, tieattributes[i][1]);
				//potential @obj
				if(v1 != v2)
				{
					$fastpath(o, tieattributes[i][0], v2);
				}
			}
		}
	});
	
}

function setTrackEvents(scaf, objscaf, domscaf)
{
	var trackevents = domscaf.trackevents;
	if(!trackevents) return;
	var o = objscaf.obj;
	var dom = domscaf.dom;
	for(var i = 0; i < trackevents.length; i++)
	{
		createTrackEvent(o, dom, trackevents[i]);
	}
}

function parseDom(scaf, objscaf, dom)
{
	var domscaf = {};
	domscaf.dom = dom;
	domscaf.tie= getDomTie(dom);
	domscaf.tieevents= getDomTieEvents(dom);
	domscaf.tieread= getDomTieRead(dom);
	domscaf.tieclass= getDomTieClass(dom);
	domscaf.tiedom= getDomTieDom(dom);
	domscaf.tieradio= getDomTie(dom);
	domscaf.tieattributes= getDomTieAttributes(dom);
	//domscaf.tieobj= getDomTieObj(dom);
	domscaf.trackevents = getDomTrackEvents(dom);
	setTieBackerTrackerFields(scaf, objscaf, domscaf);
	setTieEvents(scaf, objscaf, domscaf);
	setTieRead(scaf, objscaf, domscaf);
	setTieClass(scaf, objscaf, domscaf);
	setTieDom(scaf, objscaf, domscaf);
	//todo tie radio
	setTieAttributes(scaf, objscaf, domscaf);
	setTrackEvents(scaf, objscaf, domscaf);
	//todo here
	/*console.log("Her1");
	console.log(objscaf);
	console.log(domscaf);*/
}

function removedDom(records)
{
	for(var a = 0; a < records.length; a++)
	{
		var nodes = records[a].removedNodes;
		//console.log("removeing");
		//console.log(nodes);
		for(var b = 0; b < nodes.length; b++)
		{
			if(nodes[b].nodeName == "#text") continue;
			if(nodes[b].parentobj)
			{
				var node = nodes[b];
				if(!node.parentobj.___donotremove)
				{	
					if(node.parentobj.destruct) node.parentobj.destruct();
				}
			}
			
			$qa("*[tietype], *[tie], *[tieread], *[tieclass], *[tieevents], *[trackevents], *[tiedom], *[tieradio], *[tieattributes], *[tieobj]",nodes[b]).forEach((dom1)=>
			{
				if(dom1.parentobj && !dom1.___donotremove)
				{
					if(dom1.parentobj.destruct) dom1.parentobj.destruct();
				}
			});
		}
	}
}

var observerconfig = 
{
	childList:true, 
	subtree:true, 
	removed: true
};

var ob = new MutationObserver(removedDom);
ob.observe($q("body"), observerconfig);

function parseTempDom(scaf, objscaf)
{
	
	var comps = [];
	var doms = [];
	
	$qa("*[tietype], *[tie], *[tieread], *[tieclass], *[tieevents], *[trackevents], *[tiedom], *[tieradio], *[tieattributes], *[tieobj]", objscaf.tempdom).forEach((tdom)=>
	{
		if(tdom.nodeName == "COMP")
		{
			comps.push(tdom);
		}
		else
		{
			doms.push(tdom);
		}
	});
	
	for(var i = 0; i < doms.length; i++)
	{
		parseDom(scaf, objscaf, doms[i]);
	}
	
	for(var i = 0; i < comps.length; i++)
	{
		parseComp(scaf, comps[i], objscaf);
	}
	
	
	//tieinner
	var dom = objscaf.dom;
	var tempdom = objscaf.tempdom;
	var o = objscaf.obj;
	
	var tieinner = $q("*[tieinner]", tempdom);
	if(tieinner)
	{
		while(dom.childNodes.length >0)
		{
			var v1 = dom.childNodes[0];
			tieinner.appendChild(v1);
		}
	}
	
	var tieinnerjson = $q("*[tieinnerjson]", tempdom);
	if(tieinnerjson)
	{
		var path = $attr(tieinnerjson, "tieinnerjson");
		var code;
		var strcode = dom.innerHTML.trim();
		if(strcode != "")
		{
			eval(`code = ${strcode};`);
			$fastpath(o, path, code);
		}
	}
	

	
}

function parseComp(scaf, dom, parentobjscaf)
{
	var tietype = $attr(dom, "tietype");
	
	if(!tietype)
	{
		console.log("Comp has no tietype ");
		console.log(dom);
		console.trace();
		return;
	}
	var objscaf = {};
	objscaf.dom = dom;
	
	objscaf.objfunc =  $comp(tietype);
	objscaf.obj = objscaf.objfunc();
	if(!objscaf.obj.attributes) objscaf.obj.attributes={};
	//objscaf.dom.parentobj = objscaf.obj;
	objscaf.obj.parentdom = objscaf.dom;
	
	objscaf.obj.___donotremove = true;
	
	if(!objscaf.obj.backerfields)objscaf.obj.backerfields = {};
	if(!objscaf.obj.tracker)objscaf.obj.tracker = {};
	
	scaf.listOfObjs.push(objscaf.obj);
	
	if(objscaf.obj.beforeinit) objscaf.obj.beforeinit();
	
	objscaf.tie= getDomTie(dom);
	objscaf.tieevents= getDomTieEvents(dom);
	objscaf.tieread= getDomTieRead(dom);
	objscaf.tieclass= getDomTieClass(dom);
	objscaf.tiedom= getDomTieDom(dom);
	objscaf.tieradio= getDomTie(dom);
	objscaf.tieattributes= getDomTieAttributes(dom);
	objscaf.tieobj= getDomTieObj(dom);
	objscaf.trackevents = getDomTrackEvents(dom);
	
	//create html in a temp dom.
	remakeDom(objscaf);
	parseTempDom(scaf, objscaf);
	
	
	// set attributes on obj attributes
	setCompDomAttributes(scaf, dom, objscaf);
	
	//set all ties from parent comps. 
	setCompToParentCompTies(objscaf, parentobjscaf);
	
	
	//todo set tempdom as dom.
	
	//replace dom
	var atdom = objscaf.tempdom.firstChild;
	atdom.parentobj = objscaf.obj;
	dom.replaceWith(atdom);
	
	
}

export function $doc()
{
	var scaf = {};
	scaf.listOfObjs = [];
	$qa("doc").forEach(doc=>
	{
		parseComp(scaf, doc);
	});
	for(var i = 0; i < scaf.listOfObjs.length; i++)
	{
		 var o = scaf.listOfObjs[i];
		 if(o.init) o.init();
	}
	for(var i = 0; i < scaf.listOfObjs.length; i++)
	{
		 var o = scaf.listOfObjs[i];
		 if(o.afterinit) o.afterinit();
	}
	for(var i = 0; i < scaf.listOfObjs.length; i++)
	{
		var o = scaf.listOfObjs[i];
		delete o.___donotremove;
		
	}
}

export function $appendComp(o, dom, compstr)
{
	var scaf = {};
	scaf.listOfObjs = [];
	var temp = document.createElement("div");
	temp.innerHTML = compstr;
	
	$qa("comp", temp).forEach((dom1)=>
	{
		parseComp(scaf, dom1);
	});
	
	while(temp.childNodes.length >0)
	{
		var v1 = temp.childNodes[0];
		dom.appendChild(v1);
	}
	
	for(var i = 0; i < scaf.listOfObjs.length; i++)
	{
		 var o = scaf.listOfObjs[i];
		 if(o.init) o.init();
	}
	for(var i = 0; i < scaf.listOfObjs.length; i++)
	{
		 var o = scaf.listOfObjs[i];
		 if(o.afterinit) o.afterinit();
	}
	for(var i = 0; i < scaf.listOfObjs.length; i++)
	{
		var o = scaf.listOfObjs[i];
		delete o.___donotremove;
		
	}
	
}
export function $append(o, dom, compstr)
{
	var scaf = {};
	scaf.listOfObjs = [];
	var temp = document.createElement("div");
	temp.innerHTML = compstr;
	var objscaf = {
		obj: o,
		tempdom: temp,
		dom: dom
	};
	
	parseTempDom(scaf, objscaf);
	
	
	while(temp.childNodes.length >0)
	{
		var v1 = temp.childNodes[0];
		dom.appendChild(v1);
	}
	
	for(var i = 0; i < scaf.listOfObjs.length; i++)
	{
		 var o = scaf.listOfObjs[i];
		 if(o.init) o.init();
	}
	for(var i = 0; i < scaf.listOfObjs.length; i++)
	{
		 var o = scaf.listOfObjs[i];
		 if(o.afterinit) o.afterinit();
	}
	for(var i = 0; i < scaf.listOfObjs.length; i++)
	{
		var o = scaf.listOfObjs[i];
		delete o.___donotremove;
		
	}
	
}

export function $removeComp(o)
{
	o.parentdom.remove();
}

export function $appendcss(strcss)
{
	
	document.head.insertAdjacentHTML("beforeend", `<style>${strcss}</style>`);
}

export var $ = {
	global: $global,
	q: $q,
	qa: $qa,
	attr: $attr,
	hasAttr: $hasAttr,
	removeattr: $removeattr,
	msgc: $msgc,
	fastpath: $fastpath,
	comp: $comp,
	doc: $doc,
	//parse: $parse,
	appendComp: $appendComp,
	append: $append,
	removeComp: $removeComp,
	appendcss: $appendcss
};



