#include <iostream>

class B {
	int x;
public:
	B():x(1){}
	friend int bar(B b)
	{
		return b.x;
	}
	void print() { std::cout << x; }
};
int main()
{
	return 0;
}