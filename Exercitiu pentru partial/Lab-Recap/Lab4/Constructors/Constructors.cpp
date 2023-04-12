#include"Car.h"
#include"CarDelegating.h"
#include <iostream>

int main()
{
	//Car c = { 20 };
	Car c(20);
	//Car c = 20;
	Car a = { 3 };
	c.Print();
	std::cout << '\n';
	a.Print();
	std::cout << '\n';

	a = c;
	a.Print();
	std::cout << '\n';

	//CarDelegating p;
	//p.Print();

	Car* b =new Car(10);
	b->Print();
}