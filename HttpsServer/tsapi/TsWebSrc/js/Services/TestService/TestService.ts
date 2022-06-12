

class TestService implements ITestService
{
    TestPost(req: TestPostRequest) :Promise<Response>
    {
        return fetch("/api/testpost/", 
		{
			method: "POST",
			headers: 
			{
				"Content-Type": "application/json"
			},
			body: JSON.stringify(req)
            
		})
        .then((data)=>data.json());
		/*.then(data =>
		{
			console.log(data);
		});*/
    }
}