#ifndef _PRIETEN_H
#define _PRIETEN_H
#include "Contact.h"

class Prieten : public Contact {
public:
	char* dataNastere = nullptr, * numarTelefon = nullptr, * adresa = nullptr;

	Prieten(const char* inputNume, const char* inputDataNastere, const char* inputNumarTelefon, const char* inputAdresa);

	~Prieten();

	Print Print();
};

#endif //_PRIETEN_H