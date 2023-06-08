#include <iostream>

class A {
public:
	int a1, a2, a3;
	virtual void f() {
		std::cout << "f";
	}
};
class B {
public:
	virtual void f(){}
	virtual void d(){}
	int b1, b2;
};
class C : public A, public B {
public:
	int c1, c2;
};


int main()
{
	A a;
	std::cout << sizeof(a) << ' ';
	B b;
	std::cout << sizeof(b) << ' ';
	C c;
	std::cout << sizeof(c);
	return 0;

}