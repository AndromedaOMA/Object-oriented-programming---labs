#include <iostream>

class A {
	bool a;
	char c;
	int d;
	double b;
	int f1();
};
class B : public A{
	void f1();
	bool f2();
};
class C : public B{
	A f1();
	void f2();
};
int main()
{
	C a;
	std::cout << sizeof(a);
	return 0;
}