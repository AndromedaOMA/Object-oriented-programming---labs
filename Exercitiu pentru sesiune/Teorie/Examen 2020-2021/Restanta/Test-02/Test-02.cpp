#include <iostream>

class A {
public:
	~A() { std::cout << "~A()"; }
};

void b() {
	throw 15;
}

int main()
{
	try {
		A a;
		b();
	}
	catch (int& msg)
	{
		std::cout << msg;
	}

	return 0;
}