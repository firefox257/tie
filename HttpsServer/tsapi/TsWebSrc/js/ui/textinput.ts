(function()
{
    let css = `
        .textinput
        {
            border-radius:2mm;
            padding: 0 1mm;
            background-color: #fff;
            border: 1px solid #000;
        }
    `;

    let html = `
        <input type="text" class = "textinput"  td="dom" />
    `;

    function o()
    {
        var at:any = 
        {
           
            attr:
            {
                value: undefined,
                onchange: undefined
            },
            dom: undefined,

            onchange(e:any)
            {
                if(at.attr.onchange)at.attr.onchange(e);
            }, 
            init()
            {
                console.log(at.attr.value);
            }

            

        };

        return at;
    }
    o.css = css;
    o.html = html;
    $.comp("textinput", o);

})();