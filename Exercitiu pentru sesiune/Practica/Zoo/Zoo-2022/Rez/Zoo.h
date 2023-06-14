#pragma once
#include<vector>
#include<iostream>
#include<string>
#include "Animal.h"
#include "Feline.h"

class Zoo
{
private:
	std::vector<Animal*> animals;
public:
	std::vector<Animal*> GetFishes();
	std::vector<Animal*> GetBirds();
	std::vector<Animal*> GetMammals();
	std::vector<Feline*> GetFelines();
	int GetTotalAnimals();
	void operator+=(Animal*);
	bool operator()(std::string);
};

