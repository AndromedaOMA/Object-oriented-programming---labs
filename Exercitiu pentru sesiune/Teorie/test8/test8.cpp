#include <iostream>
class A {
	int x;
public:
	A(int v) { x = v; }
	friend int operator+(A& a)
	{
		return this->x + a.x;
	}
	friend int operator+(A& a, A& b)
	{
		return b.x + a.x;
	}
};
int main()
{
	A a1(5);
	A a2(6);
	std::cout << a1 + a2;
	return 0;
}