#include "BMW.h"
#include <iostream>

void BMW::SetUnits(int val)
{
	this->units = val;
}
void BMW::SetName(const char* n)
{
	int i = -1;
	do
	{
		i++;
		this->name[i] = n[i];
	} while (n[i]);
}

int BMW::GetUnits()
{
	return this->units;
}
char* BMW::GetName()
{
	char* aux = new char(101);

	int i = -1;
	do
	{
		i++;
		aux[i] = this->name[i];
	} while (this->name[i]);

	//return this->name; //Warning!
	return aux;
}

void BMW::Print()
{
	std::cout << "The car "<<this->GetName()<<" have "<<this->GetUnits()<< " units!\n";
}