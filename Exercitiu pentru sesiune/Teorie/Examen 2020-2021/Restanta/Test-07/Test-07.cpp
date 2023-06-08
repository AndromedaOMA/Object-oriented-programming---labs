#include <iostream>

unsigned long long int operator"" _transform(unsigned long long int x)
{
	return x * 2;
}

int main()
{
	std::cout << 3_transform*2 << ' ';
	return 0;
}