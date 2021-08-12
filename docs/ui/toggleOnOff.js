import {$} from "../tie.js";
import {colors} from "./colors.js"

const css = `
.toggleOuter
{
	display:inline-block;
	border-radius: 3mm;
	height: 3mm;
	width: 5.7mm;
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
	overflow: hidden;
}
.toggleOn
{
	color: ${colors.black};
	padding: 0;
	width: 6mm;
	height: 3.3mm;
	position:absolute;
	top: 0;
	left: 0;
}
.toggleOff
{
	text-shadow: 1px 1px #000, 0px 1px #000;
	color: ${colors.default};
	padding: o;
	width: 6mm;
	height: 3.3mm;
	position:absolute;
	top: 0;
	left: 6mm;
}

.toggleOnStart
{
	transform: translate(6mm, 0);
}
.tobbleOffStart
{

	.transform: translate(0, 0);
}
.toggleOnAnim
{
	animation-name: turnon;
	animation-duration: 0.3s;
	transform: translate(6mm, 0);
}
.toggleOffAnim
{
	animation-name: turnoff;
	animation-duration: 0.3s;
	transform: translate(0, 0);
}
@keyframes turnoff
{
	from {transform: translate(6mm, 0);}
	to {transform: translate(0, 0);}
}

@keyframes turnon
{
	from {transform: translate(0, 0);}
	to {transform: translate(6mm, 0);}
}

`;

const html = `
<span tieclass="parentclass" tieattributes="parentstyle:style" tie="boxshadow:style.boxShadow, border:style.border" tieevents="onclick:onclick">
<span style="position:absolute; top: 0; right: 0; width: 12mm;" tieclass="class">
	<span class = "toggleOn" tie="backgroundcolor:style.backgroundColor">	
		<span style="position: absolute; top: 50%; left: 50%; transform: translate(-50%, -50%);">
			ON
		</span>
	</span>

	<span class="toggleOff">
		<span style="position: absolute; top: 50%; left: 50%; transform: translate(-50%, -50%);">
			Off
		</span>
	</span>
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
				if(at.class == "toggleOnStart" || at.class == "toggleOnAnim")
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
					if(at.class == "toggleOnStart" || at.class == "toggleOnAnim") return;
					if(!at.hasafter)
					{
						at.class = "toggleOnStart";
					}
					else
					{
						at.class = "toggleOnAnim";
					}
					at.boxshadow = "0 0 2mm " + at.color;
					at.border = "0.3mm solid " + at.color;
					at.onshow="inline-block";
					at.offshow = "none";
				}
				else
				{
					if(at.class == "toggleOffStart" || at.class == "toggleOffAnim") return;
					if(!at.hasafter)
					{
						at.class = "toggleOffStart";
					}
					else
					{
						at.class = "toggleOffAnim";
					}
						
					at.boxshadow = "0 0 0";
					at.border = "0.3mm solid #888";
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
				at.backgroundcolor = at.color;
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
		class: "toggleOffStart",
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
