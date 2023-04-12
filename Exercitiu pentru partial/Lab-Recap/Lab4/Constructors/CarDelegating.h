#pragma once
class CarDelegating
{
private:
	char name[101]="Mersan", color[101]="Dark";
	int units;
public:

	CarDelegating(int value) :units(value) {}
	CarDelegating() : CarDelegating(3) { units = 1; }

	void Print();
	void PrintStr(char str[]);
};

