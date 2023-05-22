#include <iostream>

class Base { int arr[10]; };
class B1: public Base {};
class B2: public Base {};
class Derived:public B1, public B2{};

int main()
{
	std::cout<<sizeof(Derived);
	return 0;
}