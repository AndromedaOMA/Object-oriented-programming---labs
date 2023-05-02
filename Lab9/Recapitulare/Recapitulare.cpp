#include <iostream>

struct Student {
	const char* name;
	int Age, IQ, Money;
};

Student students[] = {
	{"Popescu", 20, 105, 190},
	{"Michael", 26, 195, 1090},
	{"Jordan", 23, 125, 290},
	{"Jackson", 24, 95, 10}
};

bool ByAge(Student& s1, Student& s2)
{
	return s1.Age > s2.Age;
}
bool ByIQ(Student& s1, Student& s2)
{
	return s1.IQ > s2.IQ;
}
bool ByMoney(Student& s1, Student& s2)
{
	return s1.Money > s2.Money;
}
bool ByName(Student& s1, Student& s2)
{
	return strcmp(s1.name, s2.name) > 0;
}

void Sort(Student* list, int count, bool(*Biggest)(Student& s1, Student& s2))
{
	for (int i = 0; i < count - 1; i++)
		for (int j = i + 1; j < count; j++)
			if (Biggest(list[i], list[j]))
			{
				Student aux = list[i];
				list[i] = list[j];
				list[j] = aux;
			}
}

int main()
{
	//Sort(students, 4, ByAge);
	//Sort(students, 4, ByIQ);
	//Sort(students, 4, ByMoney);
	//Sort(students, 4, ByName);

	Sort(students, 4, [](Student& s1, Student& s2) {return s1.Age > s2.Age; });
	Sort(students, 4, [](Student& s1, Student& s2) {return s1.IQ> s2.IQ; });
	Sort(students, 4, [](Student& s1, Student& s2) {return s1.Money > s2.Money; });
	Sort(students, 4, [](Student& s1, Student& s2) {return s1.name > s2.name; });
	return 0;
}