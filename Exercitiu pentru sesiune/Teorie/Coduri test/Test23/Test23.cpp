#include <iostream>
using namespace std;

class Parent {
	int foo;
public:
	Parent() : foo(69) {}
	virtual int bar() { return foo; }
};
class Child :public Parent {
public:
	int bar() { return (foo + 2); }
};

int main()
{
	Parent* p = new Child();
	cout << p->bar();
	return 0;
}