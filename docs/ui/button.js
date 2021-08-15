
const css = `
	.Button
	{
		margin: 0 0.5mm 0.5mm 0;
		border-width: 0.7mm;
		border-style: solid;
		padding: 0.5mm;
		border-radius: 2mm;
		box-shadow: 0 0 3mm;
		user-select: none;
		background-color: ${colors.compbackground};
		display: inline-block;
		text-shadow: 1px 1px 1px #000;
	}
	
	.Button:active
	{
		margin: 0.5mm 0 0 0.5mm;
		box-shadow: 0 0 0 rgba(0, 0, 0, 0);
		user-select: none;
	}

	.ButtonInactive
	{
		margin: 0 0.5mm 0.5mm 0;
		border-width: 0.7mm;
		border-style: solid;
		padding: 0.5mm;
		border-radius: 2mm;
		box-shadow: 0 0 3mm;
		user-select: none;
		background-color: ${colors.compbackground};
		display: inline-block;
		text-shadow: 1px 1px 1px #000;
	}

`;

const html = `
<span tieclass="class" tie = "color:style.borderColor, color:style.color"   tieattributes="style:style" tieevents="onclick:onclick" tieinner>
</span>
`;


function button()
{
	
	var colorBacker = colors.default;
	var at = 
	{
		attributes:
		{
			get color()
			{
				return colorBacker;
			},
			set color(v)
			{
				colorBacker = colors[v];
				if(at.attributes.enabled) at.color = colorBacker;
				
			},
			get class()
			{
				return "Button " + _class;
			},
			set class(v)
			{
				at.class = "Button " + _class;
			},
			get style()
			{
				return at.style;
			},
			set style(v)
			{
				var color = at.color;
				at.style = v;
				at.color = color;
				at.bordercolor = color;
			},
			get enabled()
			{
				return at.class == "Button";
			},
			set enabled(v)
			{
				if(v == 1)
				{
					at.class = "Button";
					at.color = colorBacker;
				}
				else
				{
					at.color = colors.default;
					at.class = "ButtonInactive";
				}
			},
			onclick: undefined
		},
		color: colors.default,
		style: "",
		class: "Button",
		onclick(e)
		{
			if(!at.attributes.enabled) return;
			if(at.attributes.onclick) at.attributes.onclick(e);
		}
		
	};
	return at;
}

button.css = css;
button.html = html;



$.comp("button", button);







