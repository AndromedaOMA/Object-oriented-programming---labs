#include "Coleg.h"
#include <iostream>

Coleg::Coleg(const char* inputNume, const char* inputFirma, const char* inputNumarTelefon, const char* inputAdresa) : Contact(inputNume)
{
	firma = new char[strlen(inputFirma) + 1];
	numarTelefon = new char[strlen(inputNumarTelefon) + 1];
	adresa = new char[strlen(inputAdresa) + 1];

	for (int i = 0; i < strlen(inputFirma); i++)
		firma[i] = inputFirma[i];
	firma[strlen(inputFirma)] = '\0';

	for (int i = 0; i < strlen(inputNumarTelefon); i++)
		numarTelefon[i] = inputNumarTelefon[i];
	numarTelefon[strlen(inputNumarTelefon)] = '\0';

	for (int i = 0; i < strlen(inputAdresa); i++)
		adresa[i] = inputAdresa[i];
	adresa[strlen(inputAdresa)] = '\0';

}

Coleg::~Coleg()
{
	delete[] firma;
	delete[] numarTelefon;
	delete[] adresa;
}

void Coleg::Print()
{
	std::cout << "Nume: " << nume << ", Firma: " << firma << ", Numar Telefon: " << numarTelefon << ", Adresa: " << adresa << std::endl;
}