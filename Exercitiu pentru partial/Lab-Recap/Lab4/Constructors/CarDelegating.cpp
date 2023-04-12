#include "CarDelegating.h"
#include <iostream>
#include <cstring>

void CarDelegating::PrintStr(char str[])
{
	for (int i = 0; i < strlen(str); i++)
		std::cout << str[i];
}

void CarDelegating::Print()
{
	std::cout << "Masina are " << this->units << " unitati!\n";
	std::cout << "Firma ";
	PrintStr(this->name);
	std::cout << " are culoarea ";
	PrintStr(this->color);
	std::cout << '\n';
}