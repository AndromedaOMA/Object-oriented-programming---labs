#include <iostream>

template <class T>
class A {
	static int cnt;
public:
	void f() {
		std::cout << ++cnt;
	}
};

template<class T>
int A<T>::cnt = 0;

int main()
{
	A<int> v1;
	A<int> v2;
	A<int> v3;
	A<char> v4;
	A<double> v5;

	v1.f();
	v2.f();
	v3.f();
	v4.f();
	v5.f();
	return 0;
}