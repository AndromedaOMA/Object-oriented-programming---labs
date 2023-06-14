#include "Zoo.h"
#include<vector>
#include<iostream>
#include<string>
#include "Animal.h"
#include "Feline.h"

std::vector<Animal*> Zoo::GetFishes()
{
	std::vector<Animal*> toReturn;
	for (auto a : animals)
		if (a->IsAFish() == true)
			toReturn.push_back(a);
	return toReturn;
}
std::vector<Animal*> Zoo::GetBirds()
{
	std::vector<Animal*> toReturn;
	for (auto a : animals)
		if (a->IsABird() == true)
			toReturn.push_back(a);
	return toReturn;
}
std::vector<Animal*> Zoo::GetMammals()
{
	std::vector<Animal*> toReturn;
	for (auto a : animals)
		if (a->IsAMammal() == true)
			toReturn.push_back(a);
	return toReturn;
}
std::vector<Feline*> Zoo::GetFelines()
{
	std::vector<Feline*> toReturn;
	for (auto a : animals)
		if (a->GetName()=="Tiger" || a->GetName() == "Lion")
			toReturn.push_back((Feline*)(a));
	return toReturn;

}
int Zoo::GetTotalAnimals()
{
	return animals.size();
}
void Zoo::operator+=(Animal* toInsert)
{
	animals.push_back(toInsert);
}
bool Zoo::operator()(std::string toSearch)
{
	for (auto i : animals)
		if (i->GetName() == toSearch) return true;
	return false;
}