#include <iostream>

class A {
public:
	virtual ~A() { std::cout << "A::~A()\n"; }
};
class B :public A {
public:
	~B() { std::cout << "B::~B()\n"; }
};

int main()
{
	B* b = new B();
	A* a = (A*)b;
	delete a;

	return 0;
}