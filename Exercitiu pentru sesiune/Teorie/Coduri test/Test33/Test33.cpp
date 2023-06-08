#include <iostream>

int main()
{
	int a = 10;
	auto f1 = [&](int x, int y) {a += (x + y); return a + x + y; };
	auto f2 = [=](int x, int y) mutable { a += (x - y); return (x - y) + 1; };
	a += f1(1, 2);
	a += f2(2, 1);
	std::cout << a;
	return 0;
}