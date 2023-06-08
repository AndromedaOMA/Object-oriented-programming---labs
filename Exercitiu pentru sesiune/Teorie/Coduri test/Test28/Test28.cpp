// Test28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	auto f = [](auto a, auto b) { return a / b; };
	cout << (int)(f(5, 3) + f(5.0, 3) + f(5, 3.0));
	return 0;
}