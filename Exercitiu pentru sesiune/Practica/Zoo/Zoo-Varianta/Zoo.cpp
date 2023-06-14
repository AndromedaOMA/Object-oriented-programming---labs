#include "Zoo.h"

std::vector<Animal*> Zoo::GetFishes()
{
	std::vector<Animal*> toReturn;
	for (int i = 0; i < GetTotalAnimals(); i++)
		if (animals[i]->IsAFish())
			toReturn.push_back(animals[i]);
	return toReturn;
}
std::vector<Animal*> Zoo::GetBirds()
{
	std::vector<Animal*> toReturn;
	for (int i = 0; i < GetTotalAnimals(); i++)
		if (animals[i]->IsABird())
			toReturn.push_back(animals[i]);
	return toReturn;
}
std::vector<Animal*> Zoo::GetMammals()
{
	std::vector<Animal*> toReturn;
	for (int i = 0; i < GetTotalAnimals(); i++)
		if (animals[i]->IsAMammal())
			toReturn.push_back(animals[i]);
	return toReturn;
}
std::vector<Feline*> Zoo::GetFelines()
{
	std::vector<Feline*> toReturn;
	for (auto a : animals)
		if (a->GetName() == "Lion" || a->GetName() == "Tiger")
			toReturn.push_back((Feline*)a);
	return toReturn;
}
int Zoo::GetTotalAnimals()
{
	return animals.size();
}
void Zoo::operator+=(Animal* a)
{
	this->animals.push_back(a);
}

bool Zoo::operator()(std::string name)
{
	for (auto a : animals)
		if (a->GetName() == name)
			return true;
	return false;
}
