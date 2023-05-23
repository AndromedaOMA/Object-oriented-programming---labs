#include "Agenda.h"

cautareContactDupaNume Agenda::cautareContactDupaNume(const char* NUME)
{
	for (Contact* contact : contacte)
	{
		int ok = 1;
		if (strlen(NUME) == strlen(contact->nume))
			for (int i = 0; i < strlen(NUME); i++)
				if (NUME[i] != contact->nume[i])
					ok = 0;
		if (ok)
			return contact;
		return nullptr;
	}
}

stergereContact Agenda::stergereContact(const char* NUME)
{
	for (auto it = contacte.begin(); it < contacte.end(); ++it)
	{
		int ok = 1;
		if (strlen(NUME) == strlen((*it)->nume))
			for (int i = 0; i < strlen(NUME); i++)
				if (NUME[i] != (*it)->nume[i])
					ok = 0;

		if (ok)
		{
			std::cout << "A fost sters contactul cu numele ";
			for (int i = 0; i < strlen(NUME); i++)
				std::cout << NUME[i];
			std::cout << '\n';
			delete* it;
			contacte.erase(it);
			break;
		}
		else
		{
			std::cout << "Nu s-a gasit contact cu numele ";
			for (int i = 0; i < strlen(NUME); i++)
				std::cout << NUME[i];
			std::cout << '\n';
		}
	}
}

adaugareContact Agenda::adaugareContact(Contact* contact)
{
	contacte.push_back(contact);
}

Afisare Agenda::Afisare()
{
	for (const auto& contact : contacte) {
		contact->Print();
	}
}