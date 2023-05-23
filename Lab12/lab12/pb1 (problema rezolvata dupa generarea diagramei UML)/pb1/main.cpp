#include <iostream>
#include "Agenda.h"
#include "Prieten.h"
#include "Cunoscut.h"
#include "Coleg.h"

int main()
{
	Agenda A;
	A.adaugareContact(new Prieten("Olaru Marius", "01/01/1990", "1234567890", "Adresa 1"));
	A.adaugareContact(new Cunoscut("Will Smith", "0987654321"));
	A.adaugareContact(new Coleg("MJ", "9876543210", "Chicago Bulls", "Adresa 2"));

	A.Afisare();
	std::cout << '\n';

	A.stergereContact("Olaru Marius");
	std::cout << '\n';

	A.Afisare();
	std::cout << '\n';

	std::cout << A.cautareContactDupaNume("Olaru Marius");
	std::cout << '\n';
	return 0;
}