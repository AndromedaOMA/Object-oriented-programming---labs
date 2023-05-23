#ifndef _CONTACT_H
#define _CONTACT_H

class Contact {
public:
	char* nume = nullptr;

	Contact();
	Contact(const char* NUME);
	~Contact();
	virtual void Print() {};
};

#endif //_CONTACT_H