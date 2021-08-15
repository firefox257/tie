
const css = `
.textbox
{
	background-color: ${colors.compbackground};
	color: ${colors.default};
	border: 0.4mm solid;
	border-radius: 2mm;
	box-shadow: 0 0 3mm;
	text-align:center;
}
.textboxOuter
{
	display: inline-block;
	padding: 0;
	left: 0;
	border-radius: 2mm;
}

.textbox::file-selector-button
{
	display: none;
}

`;


const html = `
<input type = "file" class="textbox" tie="color:style.color" tieread="files:files" tieevents="onchange:onchange" tiedom="atdom"></input>
`;


function inputFilesfunc()
{
	var at = 
	{
		attributes:
		{
			get color()
			{
				return at.colors;
			}, 
			set color(v)
			{
				at.color = colors[v];
			},
			get files()
			{
				return at.files;
			},
			onchange: undefined
		},
		onchange(e)
		{
			if(at.attributes.onchange) at.attributes.onchange(at.files);
		},
		atdom: undefined,
		color: colors.default,
		files: undefined,
		init()
		{
		}
	};
	
	return at;
}
inputFilesfunc.css = css;
inputFilesfunc.html = html;

$.comp("inputFiles", inputFilesfunc);

