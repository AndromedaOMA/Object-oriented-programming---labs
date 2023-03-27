#include <iostream>
#include <cmath>
#include "Number.h"
//int GlobalValue = 0;

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
		//this->Value = (char*)malloc(sizeof(char) * 25);
		strcpy(this->Value, value);
		this->Base = base;

		int length = GetDigitsCount();
		long long decimal = 0;

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
	}
}
//--
Number::Number(int value)
{
	this->Base = 10;
	this->decimalValue = value;
	char convert[10000];
	std::sprintf(convert, "%d", value);
	delete[] this->Value;
	this->Value = new char[strlen(convert) + 10];
	strcpy(this->Value, convert);
}
//--
Number::Number(const char* value)
{
	this->Base = 10;
	this->decimalValue = atoi(value);
	//delete[] this->Value;
	//this->Value = new char[strlen(value) + 10];
	//strcpy(this->Value, value);
}

//?????????????????????????????????????????
Number::Number(const Number& value)
{
	this->Base = value.Base;
	this->decimalValue = value.decimalValue;
	//if (!this->Value)

	//delete[] this->Value;
	//free(this->Value);
	//this->Value = (char*)malloc(sizeof(char) * 25);
	//this->Value = (char*)realloc(this->Value, sizeof(char) * 25);
	this->Value = new char[25];
	strcpy(this->Value,value.Value);
}
//--
Number::~Number()
{
	delete this->Value;
}

//void* Number::operator new(size_t t)
//{
//	return &GlobalValue;
//}

//--
int Number::operator [](const int i)
{
	return this->Value[i];
}
//--
Number Number::operator+(const Number& i)
{
	Number sum(decimalValue + i.decimalValue);
	return sum;
}
//--
Number Number::operator-(const Number& i)
{
	Number dif(decimalValue - i.decimalValue);
	return dif;
}
//--
int Number::operator>(const Number& i)
{
	if (decimalValue > this->decimalValue)
		return true;
	return false;
}
//--
Number& Number::operator=(int val)
{
	this->decimalValue = val;
	this->SwitchBase(2);
	return (*this);
}
//--
Number& Number::operator=(const char* val)
{
	strcpy(this->Value, val);
	return (*this);
}
//--
bool operator +=(Number& i, Number value)
{
	i.decimalValue += value.decimalValue;
	char convert[25];
	std::sprintf(convert, "%d", i.decimalValue);
	//i.Value = new char[strlen(convert) + 10];
	strcpy(i.Value, convert);
	return true;
}
//--
bool Number::operator--()
{
	int ten = 1;
	//printf("$%d$", strlen(this->Value));
	//printf("$%s$", this->Value);
	int decimalValueDimension=0,aux=this->decimalValue;
	do
	{
		decimalValueDimension++;
		aux /= 10;
	} while (aux);
	for (int i = 1; i < decimalValueDimension; i++)
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