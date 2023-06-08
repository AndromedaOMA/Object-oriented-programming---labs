#include <iostream>

class Car {
public:
	int horsePower = 0;
	void f() {
		std::cout << 0;
	}
};
class Ford : public Car {
public:
	void f() { std::cout << horsePower; }
	Ford operator+=(int n)
	{
		this->horsePower += n;
		return *this;
	}
};

int main()
{
	Ford F;
	((F += 10) += 5);
	((Car*)&F)->f();
	return 0;
}