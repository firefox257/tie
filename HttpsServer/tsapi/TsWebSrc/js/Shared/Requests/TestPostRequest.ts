//Edit in the shared directory


class TestPostRequest
{
	Id?: string = undefined;
	Hi?: string = undefined;
	_required(): string[]
	{
		const req = ["Id", "Hi"];
		return req;
	}
};

globalAny.TestPostRequest = TestPostRequest;

