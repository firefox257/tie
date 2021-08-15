
const css = `

`;

const html = `
	<comp tietype="modal" tieattributes="show:show">
		Upload svg or project file.<br/><br/>
		
		<table width="100%">
			<tr>
				<td style="text-align: center;">
					<comp tietype="inputFiles" color = "info" tieevents="filechange:onchange" tieread="files:files"></comp><br/><br/>
				</td>
			</tr>
			<tr>
				<td style="text-align: center;">
					<comp tietype="button" color="notice" tieattributes="enabled:enabled" tieevents="okevent:onclick">Ok</comp>
				</td>
			</tr>
		</table>
		
	</comp>
`;



var at = 
{
	attributes:
	{
		get show()
		{
			return at.show;
		},
		set show(v)
		{
			at.show = v;
		}
	},
	filechange(files)
	{
		
		console.log("at files");
		console.log(at.files);
		if(files && files.length >=1)
		{
			at.enabled = 1;
		}
	},
	files:undefined,
	show:0,
	enabled: 0,
	okevent()
	{
		console.log("clicked");
		at.show = 0;
	}
};

function loadFileModalfunc()
{
	return at;
}

loadFileModalfunc.css = css;
loadFileModalfunc.html = html;


$.comp("loadFileModal", loadFileModalfunc);

modals.loadFileModal = at.attributes;

