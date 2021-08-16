


const css = `
.svg
{
	display:inline-block;
}



`;
const html = `
<div>
	<table width= "100%" height = "100%">
		<tr>
			<td style="border-right: 1px solid ${colors.default};" valign="top" tiedom="leftdom">
					
			</td>
			<td  width = "100%">
				<span class = "svg" tiedom="svgdom">


				</span>
			</td>
		</tr>
	</table>
	


</div>
`;

function setSvgText(txt)
{
	console.log("here1");
	at.svgdom.innerHTML = txt;
	var text = "";
	
	$.qa("svg path").forEach((path)=>
	{
		text += path.id + "<br/>";
		console.log(path);
	});
	$.append(at, at.leftdom, text);
}
var at =
{
	leftdom: undefined,
	svgdom: undefined,
	init()
	{
		
		$.msgc.subscribe("set svg text", setSvgText);
	},
	destruct()
	{
		$.msgc.unsubscribe("set svg text", setSvgText);
	}
};

function svgEditPagefunc()
{
	
	return at;
}
svgEditPagefunc.css = css;
svgEditPagefunc.html = html;



$.comp("svgEditPage", svgEditPagefunc);


