#include <iostream>

int main()
{
	int* ptr = nullptr;
	std::cout << "ptr" << ' ' << &ptr << '\n';
	int a = 1;
	ptr = &a;
	std::cout << "ptr" << ' ' << &ptr << ' ' << *ptr << '\n';
	int b = 2;
	ptr = &b;
	std::cout << "ptr" << ' ' << &ptr << ' ' << *ptr << '\n';
	int* ptr2 = &a;
	std::cout << "ptr2" << ' ' << &ptr2 << ' ' << *ptr2 << '\n';
	int c = *ptr;
	std::cout << "c" << ' ' << c << '\n';
	ptr2 = &c;
	std::cout << "ptr2" << ' ' << &ptr2 << ' ' << *ptr2 << '\n';

	return 0;
}