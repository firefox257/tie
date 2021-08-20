
const css = `


`;
const html = `
<span  tieinner tie="display:style.display">

</span>

`;


function menupage()
{
	var at = 
	{
		attributes:
		{
			id:undefined,
			group:undefined,
			title: undefined,
			get show()
			{
				return at.display == "inline-block";
			},
			set show(v)
			{
				if(v == 1) at.display = "inline-block";
				else at.display = "none";
			}
		},
		display: "none",
		init()
		{
			$.msgc.subscribe("menuitem deselect all", function(atid)
			{
				if(atid.group != at.attributes.group  || atid.id !=at.attributes.id)
				{
					at.display = "none";
				}
				else
				{
					at.display = "inline-block";
				}
			});
			
			$.msgc.send("menuitem add", 
			{
				group:at.attributes.group,
				id:at.attributes.id,
				title: at.attributes.title, 
				show: at.attributes.show
			});
			
		}
		
	};
	return at;
}
menupage.html = html;
menupage.css = css;


$.comp("menupage", menupage);
