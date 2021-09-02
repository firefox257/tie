const css = `
.Documentation
{
	color: ${colors.info};
	text-align: left;
}
p
{
	color: ${colors.info};
	text-align: left;
}
pre
{
text-align: left;
}
`;
const html = `
<div style="padding:5mm;">

	<span class="title" style="padding:10mm;">
		Documentation
	</span><br/>
	<p>
	The documentation is writen from this sites example and explains how the tie library works. <br/>
	</p>
	<p>
		<b> Getting Started. </b><br/>
	
		The first page is the html page. Import the tie library and tie in the doc tag. Then call $.doc() to convert to html output.
		
		
		
	</p>
	<pre tie="starthtml:innerHTML">
	</pre>
	<p>
		$.load will imediatly a javascript file.<br/>
		$.doc() will convert any doc tag into html.<br/>
	</p>
	<p>
		<b>The resources.js file.</b>
	</p>
	<pre tie="resourcefile:innerHTML">
	</pre>
</div>
`;


function convertHtmlTxt(html)
{
	var t = html.split("<").join("&lt;");
	t = t.split(">").join("&gt;");
	return t;
}


function Documentation()
{
	var at = 
	{
		
		starthtml: convertHtmlTxt($.syncfetchtext("./index.html")),
		resourcefile: convertHtmlTxt($.syncfetchtext("./resources.js"))
	};
	return at;
}

Documentation.css = css;
Documentation.html = html;


$.comp("Documentation", Documentation);

