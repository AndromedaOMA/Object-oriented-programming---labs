#include <iostream>
#pragma pack(4)
class A {
	//virtual int test() {};   //DE CE AM 12 IN LOC DE 8?

	int a1() {}
	bool a2() {}
};
class B: public A {
	virtual int test() {};

	void b1() {}
	void b2() {}
	void b3() {}
};
class C: public B, public A {
	void c1() {}
	void c2() {}
	void c3() {}
	void c4() {}
};

int main()
{
	std::cout << sizeof(A);
	std::cout << sizeof(B);
	std::cout << sizeof(C);
	return 0;
}