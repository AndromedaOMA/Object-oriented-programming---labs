#include <iostream>
int main()
{
	int x = 0, y = 1;
	auto f1 = [&, x]()mutable { x++; y++; return x + y; };
	auto f2 = [=]()mutable { return f1() + x + y; };
	std::cout << f1() << f2() << f1();
	return 0;
}