

let css = `
.modal
{
    position: absolute;
    top: 50vh;
    left: 50vw;
    background-color: #fff;
    border: 1px solid #000;
    border-radius: 0.5mm;
    transform: translate(-50%, -50%);
    display: inline-block;
    padding: 1mm;
}

`;
let html = `
<span class = "modal" t="display:style.display" tgt="modals" ti></span>
`;

var idcount = 0;
function o()
{
    
    var at = {
        attr:{
            id: idcount++,
            get show()
            {
                return at.display == "inline-block";
            },
            set show(v)
            {
                if(v)
                {
                    $.msgc.send("show modal", at.id);
                }
                else
                {
                   $.msgc.send("hide modal", at.id);
                }
            }
        },
        display: "none",
        beforeinit()
        {
            $.msgc.subscribe("show modal", showModal);
            $.msgc.subscribe("hide modal", hideModal);
        },
        afterinit()
        {

        },
        destuct()
        {
            $.msgc.unsubscribe("show modal",showModal);
            $.msgc.unsubscribe("hide modal", hideModal);
        }
    };

    function showModal(id)
    {
        if(id != at.id)
        {
            at.display = "none";
        }
        else
        {
            at.display = "inline-block";
        }
    }
    function hideModal(id)
    {
        at.display="none";
    }

    return at;
}

$.comp("modal", o, css, html);