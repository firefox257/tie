const css = `

`;
const html = `
<span tiedom = "atdom">


</span>

`;




function menugroup()
{
	var at = 
	{
		attributes:
		{
			group: undefined
		},
		atdom:undefined,
		init()
		{
			
			$.msgc.subscribe("menuitem add", menu=>
			{
				if(at.attributes.group == menu.group)
				{
					var selected = "";
					if(menu.show) selected = 1;
					$.append(at, at.atdom, `
					
					<comp tietype="menuitem" group="${menu.group}" id ="${menu.id}" selected = "${selected}">
						${menu.title}
					</comp> <br/>
					`);
				}
			});
			
		}
	};
	
	return at;
}

menugroup.css = css;
menugroup.html = html;

$.comp("menugroup", menugroup);
