#ifndef _AGENDA_H
#define _AGENDA_H

#include "Contact.h"
#include <vector>

class Agenda {
public:
	std::vector<Contact*> contacte;

	Contact* cautareContactDupaNume(const char* NUME);

	//lista

	void stergereContact(const char* NUME);

	void adaugareContact(Contact* contact);

	void Afisare();
};

#endif //_AGENDA_H