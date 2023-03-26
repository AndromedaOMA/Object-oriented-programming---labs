#pragma once

class Number
{
	char* Value;
	int Base=0, decimalValue=0;
public:
	Number(const char* value, int base); // where base is between 2 and 16
	Number(int value); 
	Number(const char* value); 
	~Number();

	// add operators and copy/move constructor
	int operator [](const int i);
	int operator+(const Number& i);
	int operator-(const Number& i);
	int operator>(const Number& i);
	Number& operator=(int val);
	friend bool operator +=(Number& i, Number value);
	bool operator--();
	bool operator--(int value);

	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount(); // returns the number of digits for the current number
	int GetBase(); // returns the current base
};