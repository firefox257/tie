import {$} from "../tie.js";
import {colors} from "./colors.js"


const css = `
.textbox
{
	background-color: ${colors.compbackground};
	color: ${colors.default};
	border: 0.4mm solid;
	border-radius: 2mm;
	box-shadow: 0 0 3mm;
	text-align:center;
}
.textboxOuter
{
	display: inline-block;
	padding: 0;
	left: 0;
	border-radius: 2mm;
}

.textbox::file-selector-button
{
	display: none;
}

`;


const html = `
<input id="file-upload" tieattributes="type:type" class="textbox" tie="color:style.color" ></input>
`;


function inputfunc()
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
			},
			get type()
			{
				return at.type;
			},
			set type(v)
			{
				console.log("set type" );
				console.log(v);
				at.type = v;
			}
			
		},
		color: colors.default,
		type: "text",
		init()
		{
			console.log("textbox init");
		}
	};
	
	return at;
}
inputfunc.css = css;
inputfunc.html = html;

$.comp("input", inputfunc);
