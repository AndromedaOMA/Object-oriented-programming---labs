#include "Number.h"
#include <cstring>
#include <iostream>

Number::Number(const char c[], int val)
{
	std::cout << "Constructor!\n";
	//c = new char(1000);
	strcpy(this->value, c);
	this->base = val;
}
Number::Number(const Number& a)
{
	base = a.base;
}
Number::Number(int val)
{
	this->finalbase = val;
}
Number::Number(Number&& a)
{
	char* aux=a.str;
	a.str = nullptr;
	this->str = aux;
}

Number::~Number()
{
	std::cout << "Detructor!\n";
	//delete this->value;
}

int Number::GetDigitsCount()
{
	int nr = 0;
	while (this->value[nr])
		nr++;
	return nr - 1;
}
int Number::GetBase()
{
	return this->base;
}

void Number::Print()
{
	for (int i = 0; i < GetDigitsCount(); i++)
		std::cout << this->value[i];
	std::cout << '\n';
}
void Number::PrintBase()
{
	std::cout << this->base;
	std::cout << '\n';
}

Number Number::operator+(Number& a)
{
	return Number(base + a.base);
}
Number Number::operator-(Number a)
{
	return Number(base - a.base);
}

void Number::SwitchBase(int val)
{
	this->base = val;
}

bool Number::operator>(Number a)
{
	if (base > a.base)
		return 1;
	return 0;
}
bool Number::operator>=(Number a)
{
	if (base > a.base)
		return 1;
	return 0;
}
Number Number::operator+=(Number a)
{
	return base += a.base;
}

Number& Number::operator=(Number&& a)
{

}