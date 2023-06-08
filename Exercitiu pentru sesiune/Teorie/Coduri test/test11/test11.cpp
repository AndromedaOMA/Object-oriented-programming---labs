#include <iostream>
class A {
public:
	int x;
};
class B : protected A {
public:
	B() { x = 5; }
};
int main()
{
	B b;
	std::cout << "x= " << b.x;
	return 0;
}