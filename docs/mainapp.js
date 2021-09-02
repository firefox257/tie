
const css = `
body
	{
		font-size: 5mm;
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
	
	
	.title
	{
		color: ${colors.info};
		text-shadow: 0 0 4mm ${colors.info};
		font-size: 16mm
	}	
	
`;

const html = `
<div>
	<table cellspacing = "0" cellpadding = "0" class = "full">
		<tr>
			<td style="padding: 2mm;" valign="top">
				<comp tietype="menugroup" group="mainmenu">
				</comp>
			</td>
		</tr>
		<tr height="100%">
			<td align = "middle" class = "main">
				<comp tietype="menupage" group = "mainmenu" id = "about" title="About" show = "1" >
					<comp tietype="AboutPage"></comp>
				</comp>
				<comp tietype="menupage" group = "mainmenu" id = "goal" title="Goals">
					<comp tietype="GoalsPage"></comp>
				</comp>
				<comp tietype="menupage" group = "mainmenu" id = "doc" title = "Getting started">
					<comp tietype="Documentation"></comp>
				</comp>
			</td>
		</tr>
	</table>
</div>
`;

var at = 
{
	
};

function mainappfunc()
{
	return at;
}

mainappfunc.css = css;
mainappfunc.html = html;


$.comp("mainapp", mainappfunc);

