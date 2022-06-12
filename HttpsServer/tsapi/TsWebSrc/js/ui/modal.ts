(function()
{
    let css = `
    .modal
    {
        position: absolute;
        top: 50vh;
        left: 50vw;
    
        tranform: translate(-50%, -50%;);
        padding: 2mm;
        border-radius: 2mm;
        border: 1px solid #000;
        background-color: #fff;
        display: inline-block;
        max-width: 100vw;
        max-height:100vh;
    }
    `;
    let html = `
        <span class = "modal" tgt="modals" ti></span>
    `;


   
    var counterid: number = 0;
    var atcurrentid: number;
    function o(): any
    {
        var at:any = 
        {
            id: counterid++,
            attr:
            {
                get show():any
                {
                    return at.show == "inline-block";
                }, 
                set show(v)
                {
                    
                    if(v)
                    {
                        $.msgc.send("show modal", at.id);
                    }
                    else
                    {
                        at.show = "none";
                    }
                }
            },
            show: "none",
            beforeinit()
            {
               
                $.msgc.subscribe("show modal", showModal);
                $.msgc.subscribe("hide modal", hideModal);

            },
            destruct()
            {
                $.msgc.unsubscribe("show modal", showModal);
                $.msgc.unsubscribe("hide modal", hideModal);
            }

        };

        function showModal(id:number)
        {
           
            if(at.id !=id) at.show = "none";
            else at.show = "inline-block";
        }
        function hideModal()
        {
            at.attr.show = 0;
        }

        return at;
    }
    o.css = css;
    o.html = html;

    $.comp("modal", o);

})();