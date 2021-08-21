
const css = `


`;
const html = `

<div style="padding:5mm";>

<span class="title" style="padding:10mm;">
Goals
</span><br/>
	<span style = "text-align: left;">
		<comp tietype="frame" color="notice">
		<p>
			The main goal of this library is to have a small library that is functional and easy to use. 
			No large setups. no third-party libraries to download and install. 
			Simply grab the tie.js and drop it into any project. If you know Dom and javascript you should be able to use this library.
			The tie library will tie a single value to the Dom or to another component. 
			Very much like angular, React and Vue, just a whole lot simpler. 
			This is a pure javascript implementation. CSS is just plain vanilla CSS. There are some additions to the HTML syntax but this is rather minor. 
			The biggest problem with other libraries, while mature or even good, just doesn't cut out the complexity. 
			What happens is the result of rehashing complexity and translated it into different types of complexity in which makes it still even more complex.  
			This usually means learning a whole new syntax and program language, special recipes that are not intuitive. 
			This approach takes months to even years to master. And all and all most of these libraries become deprecated. 
		</p>
		</comp>
	</span>


</div>


`;

function GoalsPage()
{
	var at = 
	{
		
	};
	return at;
}

GoalsPage.css = css;
GoalsPage.html = html;

$.comp("GoalsPage", GoalsPage);
