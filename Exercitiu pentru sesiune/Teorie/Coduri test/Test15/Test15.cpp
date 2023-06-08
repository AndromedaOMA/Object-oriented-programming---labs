#include <iostream>

class Test {
private:
	int v[5] = { 1,2,3,4,5 };
public:
	int* begin() { return v + 1; }
	int* end() { return v + 4; }
};
int main()
{
	Test t;
	for (auto& i : t)
		std::cout << i << ' ';
	return 0;
}