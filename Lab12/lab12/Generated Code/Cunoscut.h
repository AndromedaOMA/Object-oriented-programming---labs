#ifndef _CUNOSCUT_H
#define _CUNOSCUT_H

#include "Contact.h"

class Cunoscut : public Contact {
public:
	char* numarTelefon;
	Cunoscut(const char* inputNume, const char* inputNumarTelefon);

	~Cunoscut();

	Print Print();
};

#endif //_CUNOSCUT_H