import {$} from "../tie.js";
import {animate} from "../animate.js";
import {colors} from "./colors.js"

const css = `
.padlock
{
	display: inline-block;
}

.try1
{
	
}

`;
const html = 
`
<span svg class = "padlock" tie="width:style.width, height:style.height" tieevents="onclick:onclick">
<svg
class = "try1"
   xmlns:dc="http://purl.org/dc/elements/1.1/"
   xmlns:cc="http://creativecommons.org/ns#"
   xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#"
   xmlns:svg="http://www.w3.org/2000/svg"
   xmlns="http://www.w3.org/2000/svg"
   xmlns:sodipodi="http://sodipodi.sourceforge.net/DTD/sodipodi-0.dtd"
   xmlns:inkscape="http://www.inkscape.org/namespaces/inkscape"
   width="100%"
   height="100%"
   viewBox="0 0 26.458332 26.458332"
   version="1.1"
   id="svg8"
   inkscape:version="1.0.2 (e86c870879, 2021-01-15)"
   sodipodi:docname="lock.svg">
  <defs
     id="defs2">
    <filter
       inkscape:collect="always"
       style="color-interpolation-filters:sRGB"
       id="filter1459"
       x="-0.23359425"
       width="1.4671885"
       y="-0.14837938"
       height="1.2967588">
      <feGaussianBlur
      tieattributes="blur:stdDeviation"
         inkscape:collect="always"
         stdDeviation="1"
         id="feGaussianBlur1461" />
    </filter>
  </defs>
  <sodipodi:namedview
     id="base"
     pagecolor="#ffffff"
     bordercolor="#666666"
     borderopacity="1.0"
     inkscape:pageopacity="0.0"
     inkscape:pageshadow="2"
     inkscape:zoom="2.8"
     inkscape:cx="8.1214232"
     inkscape:cy="60.536197"
     inkscape:document-units="mm"
     inkscape:current-layer="layer1"
     showgrid="false"
     inkscape:snap-global="false"
     inkscape:window-width="1920"
     inkscape:window-height="1017"
     inkscape:window-x="-8"
     inkscape:window-y="-8"
     inkscape:window-maximized="1"
     inkscape:document-rotation="0"
     units="px" />
  <metadata
     id="metadata5">
    <rdf:RDF>
      <cc:Work
         rdf:about="">
        <dc:format>image/svg+xml</dc:format>
        <dc:type
           rdf:resource="http://purl.org/dc/dcmitype/StillImage" />
        <dc:title></dc:title>
      </cc:Work>
    </rdf:RDF>
  </metadata>
  <g
     inkscape:label="shade"
     inkscape:groupmode="layer"
     id="layer1"
     transform="translate(0,-267)"
     style="display:inline;opacity:0.8496732;filter:url(#filter1459)">
   
  </g>
  <g
     inkscape:groupmode="layer"
     id="layer2"
     inkscape:label="top"
     style="display:inline;opacity:1">
    <path
	tie="color:style.fill"
       style="display:inline;fill:#000000;fill-opacity:1;stroke:none;stroke-width:0.340699;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1"
       d="m 8.1598097,12.906308 c -0.5325103,0.154335 -1.1310171,0.644003 -1.4225131,1.163834 l -0.2780135,0.495792 v 4.191655 c 0,4.638014 -0.018006,4.48162 0.5965342,5.181543 0.1669723,0.190165 0.506704,0.440359 0.7549584,0.555952 l 0.4513726,0.210201 h 5.0930937 5.093093 l 0.451373,-0.210201 c 0.248255,-0.115593 0.587987,-0.365787 0.754957,-0.555952 0.614541,-0.699923 0.596535,-0.543529 0.596535,-5.181543 v -4.191655 l -0.278014,-0.495792 c -0.302124,-0.538789 -0.892541,-1.010263 -1.463795,-1.16893 -0.41709,-0.115844 -9.9484841,-0.111158 -10.3495813,0.0049 z m 6.0058693,3.404362 c 0.469096,0.251591 0.825151,0.743288 0.878045,1.212566 0.06275,0.556724 -0.102682,0.984876 -0.529557,1.370538 l -0.363455,0.328352 0.233638,1.05228 c 0.128503,0.57874 0.233472,1.102978 0.233269,1.164953 -2.76e-4,0.0849 -0.322081,0.112681 -1.307448,0.112681 -0.718894,0 -1.307078,-0.03142 -1.307078,-0.06993 0,-0.03837 0.121448,-0.567214 0.269885,-1.175089 l 0.269887,-1.105224 -0.328385,-0.288324 c -1.167969,-1.025494 -0.449451,-2.767749 1.142168,-2.769522 0.313045,-3.68e-4 0.612692,0.06132 0.809031,0.166676 z"
       id="path4559-7-1"
       inkscape:connector-curvature="0" />
    <path
	tie="color:style.fill"
       style="filter:url(#filter1459)";display:inline;fill:#000000;fill-opacity:1;stroke:none;stroke-width:0.340699;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1"
       d="m 8.1598097,12.906308 c -0.5325103,0.154335 -1.1310171,0.644003 -1.4225131,1.163834 l -0.2780135,0.495792 v 4.191655 c 0,4.638014 -0.018006,4.48162 0.5965342,5.181543 0.1669723,0.190165 0.506704,0.440359 0.7549584,0.555952 l 0.4513726,0.210201 h 5.0930937 5.093093 l 0.451373,-0.210201 c 0.248255,-0.115593 0.587987,-0.365787 0.754957,-0.555952 0.614541,-0.699923 0.596535,-0.543529 0.596535,-5.181543 v -4.191655 l -0.278014,-0.495792 c -0.302124,-0.538789 -0.892541,-1.010263 -1.463795,-1.16893 -0.41709,-0.115844 -9.9484841,-0.111158 -10.3495813,0.0049 z m 6.0058693,3.404362 c 0.469096,0.251591 0.825151,0.743288 0.878045,1.212566 0.06275,0.556724 -0.102682,0.984876 -0.529557,1.370538 l -0.363455,0.328352 0.233638,1.05228 c 0.128503,0.57874 0.233472,1.102978 0.233269,1.164953 -2.76e-4,0.0849 -0.322081,0.112681 -1.307448,0.112681 -0.718894,0 -1.307078,-0.03142 -1.307078,-0.06993 0,-0.03837 0.121448,-0.567214 0.269885,-1.175089 l 0.269887,-1.105224 -0.328385,-0.288324 c -1.167969,-1.025494 -0.449451,-2.767749 1.142168,-2.769522 0.313045,-3.68e-4 0.612692,0.06132 0.809031,0.166676 z"
       id="path4559-7-1"
       inkscape:connector-curvature="0" />
       
       
    <path
    tie="color:style.fill"
    
    
       tiedom="atdom"
       
       tieattributes="animate.transform:transform"
       
	transform="translate(8.4, 13) rotate(330)"
       style="display:inline;fill:#000000;fill-opacity:1;stroke:none;stroke-width:0.279092;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1"
       d="m -0.72254328,-1.2466507 c 0.001407,-3.307141 0.032829,-3.6110264 0.4671675,-4.5207677 0.6047296,-1.26664 1.71789618,-2.1509758 3.07601548,-2.443694 0.326625,-0.070409 0.989354,-0.1038557 2.074253,-0.1047309 1.80135,-0.00156 2.357275,0.091133 3.191785,0.5315315 0.675085,0.3562662 1.511018,1.2190416 1.846356,1.9056452 0.4442603,0.9096163 0.4934373,1.2211128 0.4934373,3.1254376 v 1.6930263 l -0.208608,-0.262499 C 9.9067167,-1.7142274 9.5788427,-1.9663175 9.1883617,-2.1142473 L 8.8388467,-2.2466652 8.7913887,-3.048143 c -0.06808,-1.1497107 -0.326789,-1.7674057 -1.00656,-2.4032541 -0.699212,-0.6540326 -1.372653,-0.8719653 -2.694453,-0.8719653 -1.110311,0 -1.753177,0.141092 -2.324078,0.5100882 -0.758975,0.490544 -1.252968,1.2279664 -1.4169901,2.1152482 -0.046567,0.2519182 -0.07937,1.4613166 -0.07937,2.92645429 V 1.7255273 h -0.99688128 -0.9968804 z"
       id="path839-8"
       inkscape:connector-curvature="0" />
       
       
    <path 
    tie="color:style.fill"
    tieattributes="animate.transform:transform"
    
    transform="translate(8.4, 13) rotate(330)"
       style="filter:url(#filter1459)";display:inline;fill:#000000;fill-opacity:0.996078;stroke:none;stroke-width:0.279092;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:1"
       d="m -0.72254328,-1.2466507 c 0.001407,-3.307141 0.032829,-3.6110264 0.4671675,-4.5207677 0.6047296,-1.26664 1.71789618,-2.1509758 3.07601548,-2.443694 0.326625,-0.070409 0.989354,-0.1038557 2.074253,-0.1047309 1.80135,-0.00156 2.357275,0.091133 3.191785,0.5315315 0.675085,0.3562662 1.511018,1.2190416 1.846356,1.9056452 0.4442603,0.9096163 0.4934373,1.2211128 0.4934373,3.1254376 v 1.6930263 l -0.208608,-0.262499 C 9.9067167,-1.7142274 9.5788427,-1.9663175 9.1883617,-2.1142473 L 8.8388467,-2.2466652 8.7913887,-3.048143 c -0.06808,-1.1497107 -0.326789,-1.7674057 -1.00656,-2.4032541 -0.699212,-0.6540326 -1.372653,-0.8719653 -2.694453,-0.8719653 -1.110311,0 -1.753177,0.141092 -2.324078,0.5100882 -0.758975,0.490544 -1.252968,1.2279664 -1.4169901,2.1152482 -0.046567,0.2519182 -0.07937,1.4613166 -0.07937,2.92645429 V 1.7255273 h -0.99688128 -0.9968804 z"
       id="path839-8"
       inkscape:connector-curvature="0" />
  </g>
</svg>
</span>
`;
// open transform="translate(8.4, 13) rotate(330)"
//closed transform="translate(8.4, 15) rotate(360)"

function padlockfunc()
{
	var at = 
	{
		attributes:
		{
			get width()
			{
				return at.width;
			},
			set width(v)
			{
				at.width = v;
			},
			get height()
			{
				return at.height;
			},
			set height(v)
			{
				at.height = v;
			},
			get color()
			{
				return at.color;
			},
			set color(v)
			{
				at.color = colors[v];
			},
			get blur()
			{
				return at.blur;
			},
			set blur(v)
			{
				at.blur = v;
			},
			onclick:undefined
		},
		width: "100px",
		height: "100px",
		color: colors.default,
		blur: "2.3314279",
		atdom:undefined,
		animate:
		{
			transform:"translate(8.4, 15) rotate(360)",
			unlock: "translate(8.4, 13) rotate(330)",
			lock: "translate(8.4, 15) rotate(360)"

		},
		onclick(e)
		{
			console.log("click");
			console.log(e);
			console.log(at.atdom.transform);
			var x = e.clientX - at.atdom.offsetLeft;
			var y = e.clientY - at.atdom.offsetTop;
			console.log("x " + x + " y "  + y);
			if(at.attributes.onclick)at.attributes.onclick(e);
		},
		init()
		{
			console.log(at);
			//at.atdom.transform.animVal[0].setRotate(
			//at.atdom.setAttribute("transform", "translate(8.4, 15) rotate(360)");
			//at.animate.transform = at.animate.unlock;
			animate(
			{
				from: [8.4, 15, 360],
				to: [8.4, 13, 330],
				duration: 4000,
				callback(v)
				{
					at.animate.transform = `translate(${v[0]}, ${v[1]}) rotate(${v[2]})`;
				}
			});
			
		}
	};
	
	return at;
}
padlockfunc.css = css;
padlockfunc.html = html;
$.comp("padlock", padlockfunc);



