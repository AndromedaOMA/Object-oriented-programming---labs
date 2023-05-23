#ifndef _COLEG_H
#define _COLEG_H

#include "Contact.h"

class Coleg : public Contact {
	char* firma = nullptr, * numarTelefon, * adresa = nullptr;
public:
	void Coleg(const char* inputNume,
		const char* inputFirma,
		const char* inputNumarTelefon,
		const char* inputAdresa);

	~Coleg();

	Print Print();
};

#endif //_COLEG_H