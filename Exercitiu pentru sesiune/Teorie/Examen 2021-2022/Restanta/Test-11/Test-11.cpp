#include <iostream>

struct A {
	virtual A* get() {
		return this;
	}
	void print() {
		std::cout << "A";
	}
};
struct B: A {
	B* get() override {
		return this;
	}
	void print() {
		std::cout << "B";
	}
};

int main()
{
	auto a = (new B)->get();
	a->print();
	return 0;
}