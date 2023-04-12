#pragma once
class Car
{
private:
	char name[101]="Dacia", color[101]="Red";
	char* dim;
	int units;
public:
	Car(int value):units(value) {}

	//Car(const Car& c);//Copy constructor

	Car(Car&& c); //Move constructor

	Car& operator=(Car&& c); //Move asg

	void Print();
	void PrintStr(char str[]);
};

