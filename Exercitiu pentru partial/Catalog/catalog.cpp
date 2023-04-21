#include<iostream>
#include <typeinfo>

using namespace std;

void printDouble(const double& v) {
	std::cout << v << ",";
}

void copy(char* src, const char* dst)
{
	while (*dst)
	{
		*src++ = *dst++;
	}
	*src = 0;
}

int strlenght(char* sir)
{
	int i = 0;
	while (sir[i] != '\0')
		i++;
	return i;
}

class Materie
{
public:
	char* nume;
	int nota;
	Materie()
	{

	}
	Materie(const char* nume_materie)
	{
		int sz = strlenght((char*)nume_materie);
		this->nume = new char[sz];
		copy(this->nume, nume_materie);
	}
	void operator=(int nota_primita)
	{
		this->nota = nota_primita;
	}
};

class Student {
public:
	Materie materii[100];
	int nr_materii;
	char* nume;
	Student()
	{
		nr_materii = 0;
	}
	Student(const char* nume_primit)
	{
		nr_materii = 0;
		int sz = strlenght((char*)nume_primit);
		this->nume = new char[sz];
		copy(this->nume, nume_primit);
	}
	char* GetName()
	{
		return nume;
	}
	Materie operator[](const char* nume_materie)
	{
		for (int i = 0; i < nr_materii; i++)
		{
			if (strcmp(this->materii[i].nume, nume_materie) == 0)
				return this->materii[i];
		}
		this->materii[nr_materii] = *(new Materie(nume_materie));
		return this->materii[nr_materii++];
	}
	operator float()
	{
		float k = 0;
		for (int i = 0; i < nr_materii; i++)
		{
			k += this->materii[i].nota;
		}
		return k / nr_materii;
	}
	void PrintNote()
	{
		for (int i = 0; i < nr_materii; i++)
		{
			printf("la %s are nota %d\n", this->materii[i].nume, this->materii[i].nota);
		}
	}
};

class Catalog{
public:
	Student studenti[100];
	int nr_studenti;
	Catalog()
	{
		this->nr_studenti = 0;

	}
	void operator +=(const char* nume)
	{
		this->studenti[nr_studenti++] = *(new Student(nume));
	}
	Student& operator[](const char* nume_student)
	{
		for (int i = 0; i < nr_studenti; i++)
		{
			if (strcmp(this->studenti[i].nume, nume_student) == 0)
				return this->studenti[i];
		}
		return *(Student*)0;
	}
	Student& operator[](int index)
	{
		return this->studenti[index];
	}
	int GetCount()
	{
		return nr_studenti;
	}
};
int main(){

	Catalog c;
	c += "Andrei"; // Se adauga studentul cu numele "Andrei" in catalog
	c += {"Roxana"}; // Se adauga studenta cu numele "Roxana" in catalog
	c += {"Sorin"}; // Se adauga studentul cu numele "Sorin" in catalog

	//linia asta:
	c["Andrei"]["matematica"] = 8;
	// este echivalenta cu:
	// Student andrei = c["Andrei"];
	// andrei["matematica"] = 8;

	c["Andrei"]["romana"] = 7;
	c["Andrei"]["franceza"] = 6;
	c["Roxana"]["matematica"] = 9;
	c["Roxana"]["romana"] = 10;
	c["Sorin"]["sport"] = 5;
	c["Sorin"]["romana"] = 9;
	std::cout << "Total studenti: " << c.GetCount() << std::endl;
	for (int index = 0; index < c.GetCount(); index++)
	{
		std::cout << "Nume: " << c[index].GetName() << std::endl;
		std::cout << "Media: " << (float)c[index] << std::endl;
		c[index].PrintNote();
	}
	return 1;
}
