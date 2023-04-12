#pragma once
#include"Person.h"

class Teacher : public Person
{
private:
	int salary;
	char Diploma[100];
public:
	Teacher(const char* name, int age, const char* diploma, int salary);
	Teacher();

	Teacher(const Teacher& t);

	void SetName(const char* n);
	void SetAge(int n);

	char* GetName();
	int GetAge();



	void SetSalary(int n);
	void SetDiploma(const char* n);

	int GetSalary();
	char* GetDiploma();

	void Print();

	void operator++();
	void operator++(int val);

	operator int();
	char operator[](int index);

	int SumGrades(int n, ...);

};

