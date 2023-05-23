#include "Contact.h"
#include <iostream>

Contact::Contact() {}

Contact::Contact(const char* NUME)
{
	nume = new char[strlen(NUME) + 1];

	for (int i = 0; i < strlen(NUME); i++)
		nume[i] = NUME[i];
	nume[strlen(NUME)] = '\0';
}

Contact::~Contact()
{
	delete[]nume;
}

void Contact::Print() {}