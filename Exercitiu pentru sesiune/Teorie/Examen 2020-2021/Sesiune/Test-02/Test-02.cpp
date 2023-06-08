// Test-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct A
{
	int x = 5;
};
struct B
{
	int y = 7;
};
struct C:public A,B
{
	int x = 2;
};
int main()
{
	A a;
	C* c = static_cast<C*>(&a);
	//B* bb = dynamic_cast<B*>(&c);
	std::cout << c->x;
	return 0;
}