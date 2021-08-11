import {$} from "/tie.js";
import {colors} from "/ui/colors.js";


const css = `
.textbox
{
	background-color: ${colors.compbackground};
	color: ${colors.default};
	border: 0.4mm solid;
	border-radius: 2mm;
	box-shadow: 0 0 3mm;
}
.textboxOuter
{
	display: inline-block;
	padding: 0;
	left: 0;
	border-radius: 2mm;

`;

const html = `
<input type = "text" class="textbox" tie="color:style.color" ></input>
`;


function textboxfunc()
{
	var at = 
	{
		attributes:
		{
			get color()
			{
				return at.colors;
			}, 
			set color(v)
			{
				at.color = colors[v];
			}
			
		},
		color: colors.default,
		init()
		{
			console.log("textbox init");
		}
	};
	
	return at;
}
textboxfunc.css = css;
textboxfunc.html = html;

$.comp("textbox", textboxfunc);
