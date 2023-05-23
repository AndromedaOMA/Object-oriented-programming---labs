#include "Contact.h"

Contact() {}

Contact(const char* NUME)
{
	nume = new char[strlen(NUME) + 1];

	for (int i = 0; i < strlen(NUME); i++)
		nume[i] = NUME[i];
	nume[strlen(NUME)] = '\0';
}

~Contact()
{
	delete[]nume;
}

virtual void Print() {}