#include "Prieten.h"
#include <iostream>

Prieten::Prieten(
	const char* inputNume,
	const char* inputDataNastere,
	const char* inputNumarTelefon,
	const char* inputAdresa) : Contact(inputNume)
{
	dataNastere = new char[strlen(inputDataNastere) + 1];
	numarTelefon = new char[strlen(inputNumarTelefon) + 1];
	adresa = new char[strlen(inputAdresa) + 1];


	for (int i = 0; i < strlen(inputDataNastere); i++)
		dataNastere[i] = inputDataNastere[i];
	dataNastere[strlen(inputDataNastere)] = '\0';

	for (int i = 0; i < strlen(inputNumarTelefon); i++)
		numarTelefon[i] = inputNumarTelefon[i];
	numarTelefon[strlen(inputNumarTelefon)] = '\0';

	for (int i = 0; i < strlen(inputAdresa); i++)
		adresa[i] = inputAdresa[i];
	adresa[strlen(inputAdresa)] = '\0';

}
Prieten::~Prieten()
{
	delete[] dataNastere;
	delete[] numarTelefon;
	delete[] adresa;
}
void Prieten::Print()
{
	std::cout << "Nume: " << nume << ", Data Nastere: " << dataNastere << ", Numar Telefon: " << numarTelefon << ", Adresa: " << adresa << std::endl;
}