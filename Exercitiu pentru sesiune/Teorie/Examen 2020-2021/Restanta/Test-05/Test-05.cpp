#include <iostream>

class Test {
	int n;
public:
	Test(int val) :n(val) {};
	int GetN() { return n; }
};

int main()
{
	Test n;
	std::cout << n.GetN();
	return 0;
}