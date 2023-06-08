#include <iostream>

class A {
	int x;
public:
	A(int y) :x(y) {};
	friend int operator+(A& a) {
		return this->x + a->x;
	}
	friend int operator+(A& a, A& b) {
		return b->x + a->x;
	}
};

int main()
{
	A a1(5);
	return 0;
}