#include <iostream>

int main()
{
	int c = 10;
	std::cout << c;
	auto f = [&](int val) {c += val; };
	f(10);
	std::cout << c;
	return 0;
}