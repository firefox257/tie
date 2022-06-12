class TestService extends ITestService
{
    TestPost(msg)
    {
        
		return fetch("/api/testpost/", 
		{
			method: "POST",
			headers: 
			{
				"Content-Type": "application/json"
			},
			body: JSON.stringify(
			{
				Id: 123,
                Hi: "hi there"
			})
		})
		.then(data => data.json());
    }
}
CheckInterface(ITestService, TestService);
globalThis.TestService = TestService;