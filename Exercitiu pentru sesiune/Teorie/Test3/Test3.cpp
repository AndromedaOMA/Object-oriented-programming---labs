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
	size_t b = sizeof(A) + sizeof(B);
	std::cout << a << '\n';
	std::cout << b << '\n';
	return 0;
}