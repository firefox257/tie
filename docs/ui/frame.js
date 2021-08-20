
const css = `
.frame
{
	position: absolute;
	top: 50%;
	left: 50%;
	transform: translate(-50%, -50%);
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
			
		},
		color: colors.info,
	};
	return at;
}
frame.css = css;
frame.html = html;


$.comp("fame", frame);
