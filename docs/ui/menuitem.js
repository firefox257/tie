

const css = `
.menuitem
{
	display: inline-block;
	white-space: nowrap;
	color: ${colors.default};
	border-bottom: 0.5mm solid ${colors.default};
}
.menuitem[selected="1"]
{
	display: inline-block;
	white-space: nowrap;

	color: ${colors.info};
	text-shadow: 0 0 1mm ${colors.info};
	border-bottom: 0.5mm solid ${colors.info};
	box-shadow-bottom: 0 0 1mm  -2mm ${colors.info};
}

.menuitem:hover
{
	display: inline-block;
	white-space: nowrap;

	color: ${colors.yellow};
	text-shadow: 0 0 1mm ${colors.yellow};
	border-bottom: 0.5mm solid ${colors.yellow};
	box-shadow-bottom: 0 0 1mm  -2mm ${colors.yellow};
}

`;
const html = `
<span class = "menuitem" tieinner tieevents="onclick:onclick" tieattributes="selected:selected">
</span>
	

`;


function menuitem()
{
	var at = 
	{
		attributes:
		{
			onclick: undefined,
			get selected()
			{
				return at.selected == "1";
			},
			set selected(v)
			{
				if(v ==1  || v == "true") 
				{
					at.selected = "1";
					$.msgc.send("menuitem deselect all", {id:at.attributes.id, group: at.attributes.group});
				}
				else at.selected = "";
			},
			group:undefined,
			id:undefined
		},
		onclick(e)
		{
			at.selected = "1";
			$.msgc.send("menuitem deselect all", {id:at.attributes.id, group: at.attributes.group});
			if(at.attributes.onclick)at.attributes.onclick(e);
		},
		selected: "0",
		init()
		{
			
			$.msgc.subscribe("menuitem deselect all", function(atid)
			{
				
				if(atid.group == at.attributes.group && atid.id !=at.attributes.id)
				{
					at.selected= "0";
				}
			});
			
		}
	};
	
	return at;
}
menuitem.css = css;
menuitem.html = html;

$.comp("menuitem", menuitem);
