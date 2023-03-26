#include <iostream>
#include <cmath>
#include "Number.h"

//--
Number::Number(const char* value, int base)
{
	int valid = 1;
	for (int i = 0; i < strlen(value); i++)
	{
		int number;
		if ('0' <= value[i] && value[i] <= '9')
			number = value[i] - '0';
		else
			number = value[i] - 'A' + 10;
		if (number >= base || base <= 1 || base >= 17)
		{
			valid = 0;
			break;
		}
	}
	if (valid == 0)
		printf("The value does not correspond to the base!");
	else
	{
		this->Value = new char[strlen(value) + 10];
		strcpy(this->Value, value);
		this->Base = base;
	}
}
//--
Number::Number(int value)
{
	this->Base = 10;
	this->decimalValue = value;
	char convert[10000];
	std::sprintf(convert, "%d", value);
	this->Value = new char[strlen(convert) + 10];
	strcpy(this->Value, convert);
}
//--
Number::Number(const char* value)
{
	this->Base = 10;
	this->decimalValue = atoi(value);
	this->Value = new char[strlen(value) + 1];
	strcpy(this->Value, value);
	//printf("$%s$", this->Value);
	//printf("$%s$", value);
	//printf("$%d$", this->decimalValue);
}
//--
Number::~Number()
{
	delete Value;
}
//--
int Number::operator [](const int i)
{
	return this->Value[i];
}
int Number::operator+(const Number& i)
{
	int sum = decimalValue + i.decimalValue;
	char convert[10000];
	std::sprintf(convert, "%d", sum);
	this->Value = new char[strlen(convert) + 10];
	strcpy(this->Value, convert);
	return sum;
}
int Number::operator-(const Number& i)
{
	int difference = decimalValue - i.decimalValue;
	char convert[sizeof(char) + 100];
	std::sprintf(convert, "%d", difference);
	this->Value = new char[strlen(convert) + 10];
	strcpy(this->Value, convert);
	SwitchBase(16);
	return difference;
}
int Number::operator>(const Number& i)
{
	SwitchBase(10);
	if (decimalValue > this->decimalValue)
		return true;
	return false;
}
//--
Number& Number::operator=(int val)
{
	this->decimalValue = val;
	return (*this);
}
//--
bool operator +=(Number& i, Number value)
{
	i.decimalValue += value.decimalValue;
	char convert[10000];
	std::sprintf(convert, "%d", i.decimalValue);
	i.Value = new char[strlen(convert) + 10];
	strcpy(i.Value, convert);
	return true;
}

bool Number::operator--()
{
	int ten = 1;
	//printf("$%d$", strlen(this->Value));
	//printf("$%s$", this->Value);
	for (int i = 1; i < strlen(this->Value); i++)
		ten *= 10;
	this->decimalValue = this->decimalValue % ten;
	char convert[10000];
	std::sprintf(convert, "%d", this->decimalValue);
	this->Value = new char[strlen(convert) + 10];
	strcpy(this->Value, convert);
	return true;
}
//--
bool Number::operator--(int value)
{
	this->decimalValue /= 10;
	char convert[10000];
	std::sprintf(convert, "%d", this->decimalValue);
	this->Value = new char[strlen(convert) + 10];
	strcpy(this->Value, convert);
	return true;
}

//--
void Number::SwitchBase(int newBase)
{
	int length = GetDigitsCount();
	long long decimal = 0;
	char* result = new char[100];

	for (int i = 0; i < length; i++)
	{
		int number;
		if ('0' <= this->Value[i] && this->Value[i] <= '9')
			number = this->Value[i] - '0';
		else
			number = this->Value[i] - 'A' + 10;
		decimal += number * pow(this->Base, length - i - 1);
	}

	this->decimalValue = decimal;
	this->Base = newBase;

	int i = 0;
	length = 0;
	while (decimal > 0)
	{
		char character;
		if (0 <= decimal % newBase && decimal % newBase <= 9)
			character = (char)(decimal % newBase + '0');
		else
			character = (char)(decimal % newBase + 10 - 'A');
		result[length++] = character;
		decimal /= newBase;
	}
	result[length++] = '\0';

	int dim = 0;
	for (int i = strlen(result) - 1; i >= 0; i--)
		this->Value[dim++] = result[i];
	this->Value[dim] = '\0';
}
//--
void Number::Print()
{
	printf("Value: ");
	for (int i = 0; i < GetDigitsCount(); i++)
		printf("%c", operator [](i));
	printf("\n");
	printf("Base: %d", this->Base);
	printf("\n");
	printf("Decimal: %d", this->decimalValue);
	printf("\n\n");
}
//--
int  Number::GetDigitsCount()
{
	return strlen(this->Value);
}
//--
int  Number::GetBase()
{
	return this->Base;
}