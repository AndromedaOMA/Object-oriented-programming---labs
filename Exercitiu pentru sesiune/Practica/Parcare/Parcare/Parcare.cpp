#include "Parcare.h"
#include <iostream>

void Parcare::Create(int max)
{
	maxCapacity = max;
}
bool Parcare::Add(Masina* m)
{
	if(count+1<maxCapacity)
	{
		masini.push_back(m);
		count++;
		return true;
	}
	return false;
}
void Parcare::RemoveByName(std::string nume)
{
	for (int i = 0; i < masini.size(); i++)
		if (masini[i]->GetName() == nume)
		{
			for (int j = i; j < masini.size(); j++)
				masini[i] = masini[j];
			count--;
		}
	//masini[masini.size()] = NULL;
}
int Parcare::GetCount()
{
	return count;
}
bool Parcare::IsFull()
{
	if (count < maxCapacity)
		return false;
	return true;
}
void Parcare::ShowAll()
{
	std::cout << "SHOW ALL:";
	for (auto a : masini)
		std::cout << a->GetName() << '(' << a->GetColor() << "), ";
	std::cout << "\n";
}
void Parcare::ShowByColor(std::string color)
{
	std::cout << "SHOW-COLOR: (" << color << "): ";
	for (auto a : masini)
		if (a->GetColor() == color)
			std::cout << a->GetName() << ", ";
	std::cout << "\n";
}