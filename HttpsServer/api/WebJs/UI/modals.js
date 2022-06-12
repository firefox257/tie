

let css = `
.modalBackground
{
    position: absolute;
    top: 0; 
    left: 0;
    bottom: 0;
    right: 0;
    width: 100%;
    height: 100%;
    background-color: rgba(0, 0 ,0, 0.8);
    z-index: 1000;
    display: inline-block;
}
`;
let html = `
<span class = "modalBackground" t="display:style.display" tg="modals"></span>
`;

function o()
{

    var at = {
        display: "none",
        beforeinit()
        {
            $.msgc.subscribe("show modal", showBackground);
            $.msgc.subscribe("hide modal", hideBackground);
        },
        destruct()
        {
            $.msgc.unsubscribe("show modal", showBackground);
            $.msgc.unsubscribe("hide modal", hideBackground);
        }
    };

    function showBackground()
    {
        if(at.display == "none") at.display = "inline-block";
    }

    function hideBackground()
    {
        if(at.display == "inline-block") at.display="none";
    }


    return at;
}

$.comp("modals", o, css, html);
