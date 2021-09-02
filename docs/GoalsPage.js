
const css = `


`;
const html = `

<div style="padding:5mm;">

	<span class="title" style="padding:10mm;">
	Goals
	</span><br/>
	
	<span style = "text-align: left;">
		<comp tietype="frame" color="notice">
		<p>
The main goal of this library is to have a small library that is functional and easy to use. 
No large setups. no third-party libraries to download and install. 
Simply grab the tie.js and drop it into a project. If you know Dom and java script you should be able to use this library.
The library ties structures to singular variables. The tie library should last through any changes or feature improvements with the javascript or even HTML updates, with very little to no impact on the tie libraries code since it ties to structures not obscured features or deep complex dependinces. 
The tie library will tie a single value to the Dom or to another components. 
This is a pure java script implementation. CSS is just plain vanilla. There are some additions to the HTML syntax but this is rather minor. 
The biggest problem with other libraries, while mature or even good, just doesn't cut out the complexity. 
What happens is the result of rehashing complexity and translated it into different types of complexity in which makes it still even more complex. For instance with other libraries is pretty much like learning a whole new language. 
This usually means learning a whole new system or rather memorize special recipes that are not intuitive. 
This approach can take years to master. And all and all most of these libraries become deprecated with in 1 to 4 years. 
I have worked on professional web applications for many years. I have done jquery, angular, some Vue and some React. 
From what I have observed many of those API’s being utalized don’t encapsulate UI components. 
Most of the time the structure is usually copied HTML and API javascripish recipies bits throwing around everywhere in the App. 
So for any bit that needs to be updated or reutlized ,it is usally updated in many different places, not in just one place for one component. 
It usually isn’t the API that is the problem it is the lack of expertise to effectively do the proper programming. 
Think of it this way when I applied to jobs, they wanted 5 years experience with a library that just came out last year and yes there are job descriptions (quite a few as a matter of fact) that have this obvious flaw. 
Programming is always complicated. But reinventing a language, syntax structure to satisfy UI components just doubles that complexity and it shows. 
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
