
const css =`
body
{
	font-size: 4mm;
	background-color: ${colors.background};
	color: ${colors.default};
	mix-blend-mode1: lighten;
}
.full
{
	position: absolute;
	top:0;
	left: 0;
	bottom: 0;
	right: 0;
	width: 100%;
	height: 100%;
}

input:focus, textarea:focus, select:focus
{
	outline:none;
}

block
{
	padding:0;
	margin:0;
	display:inline-block;
	background-color: rgba(0, 0, 0, 0);
}

`;

const html = `
<div class ="full">
	<comp tietype="loadFileModal" show ="1"></cmop>
</div>
`;


function mainappsvgfunc()
{
	var at = 
	{
		
	};
	
	return at;
	
}

mainappsvgfunc.css = css;
mainappsvgfunc.html = html;


$.comp("mainappsvg", mainappsvgfunc);

