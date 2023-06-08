// Test27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class A {
public:
	~A() { printf("A::~A()"); }
};
void b()
{
	throw 15;
}

int main()
{
	try {
		A a;
		b();
	}
	catch (int& c)
	{
		printf("%d", c);
	}
	return 0;
}