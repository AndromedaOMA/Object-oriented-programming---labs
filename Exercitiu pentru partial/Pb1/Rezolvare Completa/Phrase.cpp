#include "Phrase.h"

Phrase::Phrase(const char c[])
{
	int n=-1;
	do
	{
		n++;
		this->prop[n] = c[n];
	} while (c[n]);

	this->totalW = 0;
	int i,j=-1;
	do
	{
		j++;
		//inceput de cuvant (prima litera)
		if (this->prop[j] != ' ' && (j == 0 || this->prop[j - 1] == ' '))//cazul primului cuvant
			i=j;
		//sfarsit de cuvant (imediat dupa cuvant)
		if ((c[j] == ' ' || c[j] == '\0') && c[j - 1] != ' ')//cazul ultimului cuvant
		{
			for (int k = i; k < j; k++)
				this->ma[this->totalW][k - i] = this->prop[k];
			this->ma[this->totalW][j - i] = '\0';
			this->totalW++;
		}
	}while (c[j]);
}
//I have POO examination today in C++ 
//Pt "have":
//i=2
//j=6
//Pt "C++":
//i coresp lui C
//j coresp \0
Phrase::~Phrase()
{

}

Phrase::operator int()
{
	return this->totalW;
}

char* Phrase::operator[](int index)
{
	return this->ma[index];
}

int Phrase::CountLetter(int n, char c)//primul cuvant are numarul de ordine 0
{
	int i = -1,nr=0;
	do
	{
		i++;
		if (this->ma[n][i] == c)
			nr++;
	} while (this->ma[n][i]);
	return nr;
}
int Phrase::CountLetter(int c)
{
	int i = -1, nr = 0;
	do
	{
		i++;
		if (this->prop[i] == c)
			nr++;
	} while (this->prop[i]);
	return nr;
}

char* Phrase::GetLongestWord()
{
	char* rez=nullptr;
	int ma = -1;
	for (int i = 0; i < this->totalW; i++)
	{
		int lenght=0;
		do
		{
			lenght++;
		} while (this->ma[i][lenght]);
		if (lenght > ma)
		{
			ma = lenght;
			rez = this->ma[i];
		}
	}
	return rez;
}

int Phrase::CountVowels()
{
	int i = -1, nr = 0;
	do
	{
		i++;
		if (this->prop[i] == 'a' || this->prop[i] == 'e' || this->prop[i] == 'i' || this->prop[i] == 'o' || this->prop[i] == 'u' || 
			this->prop[i] == 'A' || this->prop[i] == 'E' || this->prop[i] == 'I' || this->prop[i] == 'O' || this->prop[i] == 'U')
			nr++;
	} while (this->prop[i]);
	return nr;
}