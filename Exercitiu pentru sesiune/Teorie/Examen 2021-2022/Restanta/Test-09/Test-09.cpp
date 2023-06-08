#include <iostream>

struct Number {
	int n;
	Number(int val) : n(val) {}
	Number operator+(const Number& nr) { return Number(++n + nr.n); }
};

int main()
{
	Number n1 = 1;
	Number n2 = 2;
	Number n3 = n1+n2;
	std::cout << n1.n << ' ' << n2.n << ' ' << n3.n;
	return 0;
}