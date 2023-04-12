#include "Phrase.h"
#include <iostream>

Phrase::~Phrase()
{

}
Phrase::Phrase(const char* str)
{
	int i = -1,j=0;
	do
	{
		i++;
		this->c[i] = str[i];
		if (str[i] == ' ' && str[i - 1] != ' ')
		{
			this->wordCount++;
			for (int k = j; k < i; j++)
				this->ma[wordCount][k] = str[k];
			while (str[i] == ' ')
				i++;
			j = i;
		}
	} while (str[i]);
	this->dim = i + 1;
}
Phrase::operator int()
{
	return this->wordCount;
}
char* Phrase::operator[](int index)
{
	return this->ma[index];
}

int Phrase::CountLetter(int n, const char str)
{
	int i = 0, nr=0;
	while (ma[n][i])
		if (ma[n][i++] == str)
			nr++;
	return nr;
}

int Phrase::CountLetter(const char str)
{
	int i = 0, nr=0;
	while (this->c[i])
		if (this->c[i++] == str)
			nr++;
	return nr;
}

/*char* Phrase::GetLongestWord()
{
	char* longestWord;
	int ma = -1;
	for (int i = 0; i < this->wordCount; i++)
	{
		int j = 0, dim=0;
		while (ma[i][j++])
			dim++;
		if (dim > ma)
		{
			ma = dim;
			int k = -1;
			do
			{
				k++;
				longestWord[k] = ma[k];
			} while (ma[k]);
		}
	}
}
*/
void Phrase::verifyPrint()
{
	for (int i = 0; i < this->dim; i++)
		std::cout << this->c[i];
	std::cout << '\n';
}

