#include <iostream>

class A {
	int a;
public:
	virtual void run() = 0;
};

class B : public A {
	int a;
public:
	void run();
};

int main()
{
	size_t a = sizeof(A);
	size_t b = sizeof(B);
	std::cout << a << '\n';
	std::cout << b << '\n';

	//std::cout << sizeof(bool) << '\n';
	//std::cout << 2 * sizeof(int) << '\n';
	return 0;
}