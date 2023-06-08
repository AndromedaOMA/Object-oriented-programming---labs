#include <iostream>

class A {
public:
	//A()
	//{
	//	std::cout << "A()\n";
	//}
	~A()
	{
		std::cout << "~A()\n";
	}
};
class B :public A{
public:
	//B()
	//{
	//	std::cout << "B()\n";
	//}
	~B()
	{
		std::cout << "~B()\n";
	}
};

int main()
{
	B* b = new B();
	//B b;
	A* a = (A*)b;
	delete a;
	return 0;
}