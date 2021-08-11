import {$} from "../tie.js";
import {colors} from "./colors.js";

const css = `
.toggleOuter
{
	display:inline-block;
	border-radius: 3mm;
	height: 3mm;
	width: 6mm;
	color: #fff;
	padding: 0;
	margin: 0;
	text-align: right;
	box-shadow: 0 0 0;
	position:relative;
	top: 0;
	right: 0;
	overflow: hidden;
	font-size: 2.5mm;
	user-select: none;
	border: 0.3mm solid;
}

.toggleOn
{
	border-radius: 3mm;
	text-align: center;
	color: ${colors.black};
	padding: 0;
	position: absolute;
	top: 50%;
	left: 50%;
	transform: translate(-50%, -50%); 

}
.toggleOff
{
	text-shadow: 1px 1px #000, 0px 1px #000;
	text-align: center;
	color: ${colors.default};
	padding: o;
	position: absolute;
	top: 50%;
	left: 50%;
	transform: translate(-50%, -50%); 

}





`;

const html = `
<span tieclass="parentclass" tieattributes="parentstyle:style" tie="boxshadow:style.boxShadow, border:style.border, backgroundcolor:style.backgroundColor " tieevents="onclick:onclick">
	<span class = "toggleOn" tie="onshow:style.display">
		ON
	</span>
	<span class = "toggleOff" tie="offshow:style.display">
		Off
	</span>
</span>
`;

function toggleOnOff()
{
	var at = 
	{
		attributes:
		{
			get state()
			{
				if(at.class == "toggleOnOff-On")
				{
					return true;
				}
				else
				{
					return false;
				}
			},
			set state(v)
			{
				if(v == true)
				{
					at.class = "toggleOnOff-On";
					at.boxshadow = "0 0 2mm " + at.color;
					at.border = "0.3mm solid " + at.color;
					at.backgroundcolor = at.color;
					at.onshow="inline-block";
					at.offshow = "none";
				}
				else
				{
					at.class = "toggleOnOff-Off";
					at.boxshadow = "0 0 0";
					at.border = "0.3mm solid #888";
					at.backgroundcolor = colors.compbackground;
					at.onshow="none";
					at.offshow="inline-block";
				}
			},
			onchange:undefined,
			hasafter:false,
			get color()
			{
				return at.color;
			},
			set color(v)
			{
				at.color = colors[v];
				at.attributes.state = at.attributes.state;
			}, 
			get class()
			{
				return at.parentclass;
			},
			set class(v)
			{
				at.parentclass = "toggleOuter " + v;
			}, 
			get style()
			{
				return at.style;
			},
			set style(v)
			{
				at.style = v;
			}
			
		},//end attributes
		parentclass: "toggleOuter",
		parrentstyle: "",
		class: "toggleOnOff-Off-Start",
		color: colors.default,
		backgroundcolor: colors.compbackground,
		boxshadow: "0 0 0",
		border: `0.3mm solid ${colors.default}`,
		onshow: "none",
		offshow: "inline-block",
		onclick(e)
		{
			if(at.attributes.state) at.attributes.state = 0;
			else at.attributes.state = 1;
			if(at.attributes.onchange) at.attributes.onchange(at.attributes.state);
			
		},
		init()
		{
			
		}, 
		afterinit()
		{
			at.hasafter = true;
		}
		
	};
	return at;
}

toggleOnOff.css = css;
toggleOnOff.html = html;
$.comp("toggleOnOff", toggleOnOff);
