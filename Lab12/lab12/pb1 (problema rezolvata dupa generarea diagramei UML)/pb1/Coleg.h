#ifndef _COLEG_H
#define _COLEG_H

#include "Contact.h"

class Coleg : public Contact {
	char* firma = nullptr, * numarTelefon, * adresa = nullptr;
public:
	Coleg(const char* inputNume,
		const char* inputFirma,
		const char* inputNumarTelefon,
		const char* inputAdresa);

	~Coleg();

	void Print() override;
};

#endif //_COLEG_H