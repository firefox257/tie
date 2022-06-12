

let css = `
    .okCancelTitleBar
    {
        border-bottom: 1px solid #000;
    }
`;
let html = `
<c tt ="modal" to="modal">
    <table>
        <tr >
            <td class="okCancelTitleBar" align="center" colspan = "2" t="title:innerHTML" >

            </td>
        </td>
        <tr>
            <td colspan="2" t="message:innerHTML">
            </td>
        </td>
        <tr>
            <td align="center">
                <c tt="button" te="okOnclick:onclick">OK</c>
            </td>
            <td align="center">
                <c tt="button" te="cancelOnclick:onclick">CANCEL</c>
            </td>
        </tr>
    </table>
</c>
`;




var at = {
    attr:{
        get title()
        {
            return at.title;
        },
        set title(v)
        {
            at.title = v;
        }, 
        get message()
        {
            return at.message;
        },
        set message(v)
        {
            at.message = v;
        }, 
        get show()
        {
            return at.modal.show;
        },
        set show(v)
        {
            at.modal.show = v;
        }, 
        okCall: undefined,
        cancelCall: undefined
    },
    modal:undefined,
    title: "",
    message: "",
    okOnclick()
    {
        if(at.attr.okCall != undefined) at.attr.okCall();
        at.modal.show = 0;
        at.attr.okCall = undefined;
        at.attr.cancelCall = undefined;
        at.attr.title = "";
        at.attr.message = "";
    },
    cancelOnclick()
    {
        if(at.attr.cancelCall != undefined) at.attr.cancelCall();
        at.modal.show = 0;
        at.attr.okCall = undefined;
        at.attr.cancelCall = undefined;
        at.attr.title = "";
        at.attr.message = "";
    }

};

function o()
{
    return at;
}

$.comp("modalOkCancel", o, css, html);

globalThis.modalOkCancel = function(title, message, okCall, cancelCall)
{
    console.log("here111");
    at.attr.okCall = okCall;
    at.attr.cancelCall = cancelCall;
    at.attr.title = title;
    at.attr.message = message;
    at.attr.show=1;
}