(function()
{
    let css = `
    .modalBack
    {
        position:absolute;
        z-index:1000;
        top: 0;
        left: 0;
        right: 0;
        bottom: 0;
        width: 100vw;
        height: 100vh;
        background-color: rgba(0, 0, 0, 0.8);

    }
    `;
    let html = `
    <span class="modalBack" t="show:style.display" tg="modals"></span>
    `;
    function o():any
    {
        var at:any =
        {
            attr:
            {

            },
            show: "none",
            beforeinit()
            {
                $.msgc.subscribe("show modal", showModal);
                $.msgc.subscribe("hide modals", hideModal);
                
            },
            destruct()
            {
                $.msgc.unsubscribe("show modal", showModal);
                $.msgc.unsubscribe("hide modals", hideModal);
            }

        };


        function showModal()
        {
            
            $.msgc.send("hide menues");
            if(at.show != "inline-block")at.show = "inline-block";
        }
        function hideModal()
        {
            if(at.show != "none") at.show = "none";
            $.msgc.send("hide modals");
            $.msgc.send("hide menus");
        }

        return at;
    }
    o.css = css;
    o.html = html;

    $.comp("modals", o);

})();