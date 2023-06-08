#include <iostream>
struct Base {
	virtual void f() {
		std::cout << "A";
	}
};
struct Derived :Base {
	void f() {
		std::cout << "B";
	}
};
void g(Base a)
{
	a.f();
}
int main()
{
	Derived b;
	g(b);
	return 0;
}