#pragma once
#include <vector>
#include "Masina.h"
class Parcare
{
private:
	std::vector<Masina*> masini;
	int maxCapacity;
	int count;
public:
	void Create(int max);
	bool Add(Masina* m);
	void RemoveByName(std::string nume);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(std::string color);
};