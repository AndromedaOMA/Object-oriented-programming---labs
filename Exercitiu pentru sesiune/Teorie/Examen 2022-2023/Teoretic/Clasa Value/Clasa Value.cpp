#include <iostream>

struct Value {
	int x;
	Value(int v):x{v} {}
	int operator+(const Value& v) { return x + v.x/2; }
	operator int() { return x * 2; }
};

int main()
{
	Value v1 = 1, v2 = 5, v3 = 4;
	std::cout << v1 + v2 + v3;
	return 0;
}