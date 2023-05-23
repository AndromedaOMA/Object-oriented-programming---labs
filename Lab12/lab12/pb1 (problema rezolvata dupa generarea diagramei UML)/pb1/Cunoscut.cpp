#include "Cunoscut.h"
#include <iostream>

Cunoscut::Cunoscut(const char* inputNume, const char* inputNumarTelefon) : Contact(inputNume)
{
	numarTelefon = new char[strlen(inputNumarTelefon) + 1];

	for (int i = 0; i < strlen(inputNumarTelefon); i++)
		numarTelefon[i] = inputNumarTelefon[i];
	numarTelefon[strlen(inputNumarTelefon)] = '\0';
}

Cunoscut::~Cunoscut()
{
	delete[] numarTelefon;
}

void Cunoscut::Print()
{
	std::cout << "Nume: " << nume << ", Numar Telefon: " << numarTelefon << std::endl;
}