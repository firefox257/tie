
const css = `
.frame
{
	display: inline-block;
	margin: 0;
	padding: 2mm;
	border-radius: 1mm;
	
	border: 0.3mm solid;
	background-color: ${colors.modalbackground};
	box-shadow: 0 0 5mm;

}
`;
const html = `
<span class = "frame" tieinner  tie="color:style.color">
</span>

`;

function frame()
{
	var at = 
	{
		attributes:
		{
			get color()
			{
				return at.color;
			},
			set color(v)
			{
				at.color = colors[v];
			}
		},
		color: colors.info,
	};
	return at;
}
frame.css = css;
frame.html = html;


$.comp("frame", frame);
