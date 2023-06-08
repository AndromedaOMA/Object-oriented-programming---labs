// Test30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Number {
	int value;
public:
	Number(int val) : value((val >> 1) << 1) {}
	//void Print() { cout << value; }
	Number& operator--(int n) { value <<= 1; return*this; }
	Number& operator--() { value++; return *this; }
	operator double() { return (double)(value << 1); }
};
int main()
{
	Number n(17);
	//n.Print();
	--((--(n--))--);
	cout << 1.0 + n; 
	return 0;
}