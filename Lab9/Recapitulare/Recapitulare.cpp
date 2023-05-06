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

class MyIterator {
public:
	int* p;

	MyIterator& operator++() { p++; return *this; }
	bool operator!=(MyIterator& m) { return p != m.p; }
	int operator*() { return *p; }
};
class MyVector {
	int v[10];
public:
	MyVector()
	{
		for (int i = 0; i < 10; i++)
			v[i] = i;
	}
	MyIterator begin() { MyIterator i; i.p = &v[0]; return i; }
	MyIterator end() { MyIterator i; i.p = &v[10]; return i; }
};

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

	//-----------------------------

	int x[] = { 1, 2, 3 };
	for (int& i : x)
		i *= 2;
	for (int i : x)
		printf("%d,", i);

	//-----------------------------

	printf("\nVector: ");
	MyVector V;
	for (int i : V)
		printf("%d ", i);
	//printf("\nModified vector: ");
	//for (int& i : V)
	//	printf("%d ", 2*i);

	return 0;
}