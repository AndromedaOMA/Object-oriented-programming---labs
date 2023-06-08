#include <iostream>
class Car {
public:
	int HPower = 0;
	void f() { std::cout << HPower; }
};
class Ford :public Car {
public:
	void f() { std::cout << 0; }
	Ford& operator+=(int h)
	{
		this->HPower += h;
		return *this;
	}
};
int main()
{
	Ford f;
	(((f += 2) += 3));
	((Car*)&f)->f();
	return 0;
}