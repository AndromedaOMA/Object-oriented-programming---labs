#pragma once

class Number
{
private:
	int finalbase, base;
	char* str;
	char value[1000];
public:

	Number(const char value[], int base);
	Number(const Number& a);
	Number(Number&& a);
	Number(int val);
	~Number();

	int GetDigitsCount();
	int GetBase();

	int operator[](int index)
	{
		return this->value[index];
	}

	void Print();
	void PrintBase();

	Number operator+(Number& a);
	Number operator-(Number a);

	void SwitchBase(int val);

	bool operator>(Number a);
	bool operator>=(Number a);

	Number operator+=(Number a);

	Number& operator=(Number&& a);//move asg
};