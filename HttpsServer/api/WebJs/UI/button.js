let css = `
.button
{
    padding: 0 1mm;
    background-color: #fff;
    border: 1px solid #000;
    margin: 0 0.5mm 0.5mm 0;
    box-shadow: 0.5mm 0.5mm 2mm rgba(0, 0, 0, 0.6);
    border-radius: 2mm;
    display: inline-block;
    -webkit-touch-callout: none; 
    -webkit-user-select: none; 
    -khtml-user-select: none; 
    -moz-user-select: none; 
    -ms-user-select: none;
    user-select: none; 
}
.button:active
{
    margin: 0.5mm 0 0 0.5mm;
    box-shadow: none;
}
`;
let html = `
<span class = "button" te="onclick:onclick" ti></span>
`;

function o()
{
    var at = {
        attr: {
            onclick: undefined
        },
        onclick(e)
        {
            if(at.attr.onclick) at.attr.onclick(e);
        }
    };

    return at;
}


$.comp("button",o, css, html);
