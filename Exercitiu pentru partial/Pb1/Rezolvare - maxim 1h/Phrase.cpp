#include "Phrase.h"
#include <string.h>

Phrase::Phrase(char* c)
{
	int i = 0;
	char aux[101] = "";
	for (int j = 0; j < LenghtStr(this->str); j++)
	{
		aux[j] = c[j];
		if (('a' <= this->str[j - 1] && this->str[j - 1] <= 'z' || 'A' <= this->str[j - 1] && this->str[j - 1] <= 'Z') &&
			this->str[j] == ' ')
		{
			for (int k = 0; k < j; k++)
				this->ma[i][k] = aux[j];
			i++;
		}
	}
}

Phrase::~Phrase()
{

}

unsigned int Phrase::LenghtStr(char* c)
{
	unsigned int i = 0;
	while (c[i])
		i++;
	return i;
}

Phrase& Phrase::operator=(const char* c)
{
	int i;
	for (i = 0; i < LenghtStr(this->str); i++)
		this->str[i] = c[i];
}

Phrase::operator int()
{
	this->noWords = 0;
	int i;
	for (i = 0; i < LenghtStr(this->str); i++)
		if (('a' <= this->str[i - 1] && this->str[i - 1] <= 'z' || 'A' <= this->str[i - 1] && this->str[i - 1] <= 'Z') &&
			this->str[i] == ' ')
			this->noWords++;
	if ('a' <= this->str[i - 1] && this->str[i - 1] <= 'z' || 'A' <= this->str[i - 1] && this->str[i - 1] <= 'Z')
		return this->noWords + 1;
	return this->noWords;

}

int Phrase::operator[](const int i)
{
	return this->str[i];
}

int Phrase::CountLetter(int i, char c)
{
	int nr = 0;
	int j = 0;
	while (ma[i][j])
	{
		if (ma[i][j] == c)
			nr++;
		j++;
	}
	return nr;
}

int Phrase::CountLetter(char c)
{
	int nr = 0;
	for (int i = 0; i < LenghtStr(this->str); i++)
		if (this->str[i] == c)
			nr++;
	return nr;
}

int Phrase::CountVowels()
{

}

int GetLongestWord()
{

}