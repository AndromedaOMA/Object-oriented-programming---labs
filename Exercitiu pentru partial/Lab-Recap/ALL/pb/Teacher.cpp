#include "Teacher.h"
#include <iostream>
#include <stdarg.h>

Teacher::Teacher(const char* name, int age, const char* diploma, int salary)
{
	SetName(name);
	SetAge(age);
	SetDiploma(diploma);
	SetSalary(salary);
}

Teacher::Teacher()
{
	SetName("Bob");
	SetAge(40);
	SetDiploma("BAC");
	SetSalary(2000);
}

void Teacher::SetName(const char* n)
{
	int i = -1;
	do
	{
		i++;
		this->name[i] = n[i];
	} while (n[i]);
}
void Teacher::SetAge(int n)
{
	this->age = n;
}

char* Teacher::GetName()
{
	char* aux = new char(100);
	int i = -1;
	do
	{
		i++;
		aux[i] = this->name[i];
	} while (this->name[i]);
	return aux;
}
int Teacher::GetAge()
{
	return this->age;
}



void Teacher::SetSalary(int n)
{
	this->salary = n;
}
void Teacher::SetDiploma(const char* n)
{
	int i = -1;
	do
	{
		i++;
		this->Diploma[i] = n[i];
	} while (n[i]);
}

int Teacher::GetSalary()
{
	return this->salary;
}
char* Teacher::GetDiploma()
{
	char* aux = new char(100);
	int i = -1;
	do
	{
		i++;
		aux[i] = this->Diploma[i];
	} while (this->Diploma[i]);
	return aux;
}

void Teacher::Print()
{
	std::cout << "Profesorul " << GetName() << " cu diploma " << GetDiploma() << " are varsta " << GetAge()  << " are salar de " << GetSalary() << " de lei!\n";
}

void Teacher::operator++()
{
	this->salary += 1000;
}
void Teacher::operator++(int val)
{
	this->age++;
}

Teacher::operator int()
{
	return this->salary;
}

char Teacher::operator[](int index)
{
	return this->name[index];
}

int Teacher::SumGrades(int n, ...)
{
	int s = 0;
	va_list vl;
	va_start(vl,n);
	for (int i = 0; i < n; i++)
		s+=va_arg(vl, int);
	va_end(vl);
	return s;
}

Teacher::Teacher(const Teacher& t)
{
	salary = t.salary;
	int i = -1;
	do
	{
		i++;
		Diploma[i] = this->Diploma[i];
	} while (this->Diploma[i]);
}