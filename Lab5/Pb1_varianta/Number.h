
#pragma once

class Number
{
	char Value[25] = { 0 };
	int Base = 0;
	long long int decimalValue = 0;
public:
	Number(const char* value, int base); // where base is between 2 and 16
	Number(long long int value);
	Number(const char* value);
	Number(const Number& value); // constructor de copiere
	~Number();

	// add operators and copy/move constructor
	char operator [] (const int i);
	Number operator + (const Number& t);
	Number operator - (const Number& t);
	bool operator == (const Number& t);
	bool operator > (const Number& t);
	bool operator >= (const Number& t);
	bool operator < (const Number& t);
	bool operator <= (const Number& t);
	Number& operator = (long long int val); // move assignment (atribuire)
	friend bool operator += (Number& i, Number value);
	bool operator -- ();
	bool operator -- (int value);

	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount(); // returns the number of digits for the current number
	int GetBase(); // returns the current base
};
