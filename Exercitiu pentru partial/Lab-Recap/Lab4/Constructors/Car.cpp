#include "Car.h"
#include <iostream>
#include <cstring>

//Car::Car(const Car& c)
//{
//	std::cout << "CConCpy\n";
//	this->units = c.units;
//}

Car::Car(Car&& c)
{
	std::cout << "CConMov\n";
	char* x = c.dim;
	c.dim = nullptr;
	this->dim = x;
}

Car& Car::operator=(Car&& c)
{
	this->dim = c.dim;
	c.dim = nullptr;
	return (*this);
}

void Car::Print()
{
	std::cout << "Masina are " << this->units << " unitati!\n";
	std::cout << "Firma ";
	PrintStr(this->name);
	std::cout << " are culoarea ";
	PrintStr(this->color);
	std::cout << '\n';
}

void Car::PrintStr(char str[])
{
	for (int i = 0; i < strlen(str); i++)
		std::cout << str[i];
}