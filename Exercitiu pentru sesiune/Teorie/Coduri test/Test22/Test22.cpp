#include <iostream>
using namespace std;

class B {
	int x = 0;
public:
	B() { cout << "B::B()" << '\n'; }
	~B() { cout << "B::~B()" << '\n'; }
	virtual void C() { x *= 10; }
	virtual int G() { return x; }
};
class D :public B {
	int y = 0;
public:
	D() { cout << "D::D()" << '\n'; }
	~D() { cout << "D::~D()" << '\n'; }
	virtual void C() { y += 50; }
	virtual int G() { return y; }
};

int main()
{
	B* b = new D();
	b->C();
	cout << b->G();
	delete b;
	return 0;
}