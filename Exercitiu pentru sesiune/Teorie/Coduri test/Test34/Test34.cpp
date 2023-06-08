#include <iostream>
using namespace std;

class A {
	int value;
public:
	A(int val):value(val*val) {}
	char operator,(char c) { return c + value % 5; }
	int& operator[] (char c) { value += (c - 'A'); return value; }
	int operator!() { return(value += 2) / 2; }
	friend int operator,(int i, const A& a);
};
int operator,(int i, const A& a) { return a.value - i; }

int main()
{
	A a(3);
	int res = (!a, a);
	a[(a, 'A')] += res;
	std::cout << *(reinterpret_cast<int*>(&a));
	return 0;
}