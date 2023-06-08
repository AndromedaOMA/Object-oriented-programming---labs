// Test31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <typename T1, typename T2>
class Number {
	T1 value;
public:
	Number(const T1& val) : value(val) {}
	operator T2() { return (T2)(value / 2); }
	T1 operator+(const T1& val) { return value + val; }
};

int main()
{
	Number <int, float> n1(10);
	Number < float, int> n2(3.0);
	std::cout << n1 + n2 << ", " << n2 + n1 << ", " << n1 - n2;
	return 0;
}