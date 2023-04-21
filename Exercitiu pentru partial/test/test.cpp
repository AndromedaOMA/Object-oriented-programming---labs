#include <iostream>
#include "Fraction.h"

int main()
{
	Fraction a(1,2), b(2,2);
	Fraction c = a * b;
	c.print();

	Fraction d = a + b;
	d.print();

	Fraction e = a;
	e.print();
	return 0;
}