#include <iostream>

int main()
{
	int nr = 20;
	std::cout << nr<<'\n';
	reinterpret_cast<char&>(nr) = 10;
	std::cout << nr;
	return 0;
}