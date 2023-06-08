#include <iostream>

class TEST {
private:
	TEST();
	~TEST();
	static TEST* test;
public:
	static TEST* Medtoda()
	{
		if (!test)
			test = new TEST();
		return test;
	}
};

int main()
{
	TEST* inst = TEST::Medtoda();
}