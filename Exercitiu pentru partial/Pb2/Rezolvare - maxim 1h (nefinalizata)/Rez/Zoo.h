#pragma once
#pragma "Animal.h"
#pragma "Feline.h"
#include <vector>

class Zoo
{
private:
	std::vector<Animal*> animals;
public:
	std::vector<Animal*> GetFishes();
	std::vector<Animal*> GetBirds();
	std::vector<Animal*> GetMammals();
	std::vector<Animal*> GetFelines();
	std::vector<Feline*> GetTotalAnimals();
	void operator+=(Animal* a);
	operator
};