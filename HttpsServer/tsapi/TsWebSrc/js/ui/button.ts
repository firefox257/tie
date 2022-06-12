(function()
{

    let css = `
    .button
    {
        display:inline-block;
        padding: 0 1mm;
        border-radius: 2mm;
        border: 1px solid #000;
        background-color: #fff;
    }
    `;
    let html = `
    <span class ="button" t="onclick:onclick" ti></span>
    `;

    function o():any
    {
        var at:any = 
        {
            attr:
            {
                onclick: undefined
            },
            onclick(e:Event)
            {
                if(at.attr.onclick)at.attr.onclick(e);
            }
            

        };

        return at;
    }


    o.css = css;
    o.html = html;

    $.comp("button", o);

})();
