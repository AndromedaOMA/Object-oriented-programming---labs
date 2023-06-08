#include <iostream>

class Test {
	int x, y;
public:
	Test(int _x, int _y) :x(_x), y(_y){}
	int operator[](int i) { return i == 0 ? y - i : x + i; }
};

int main()
{
	Test t = { 10,20 };
	std::cout << t[0] << ", " << t[1];
	return 0;
}