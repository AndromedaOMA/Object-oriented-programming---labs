#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int a,int b)
{
	this->numarator = a;
	this->numitor = b;
}
Fraction::~Fraction()
{

}

Fraction::Fraction(const Fraction& a)
{
	numitor = a.numitor;
	numarator = a.numarator;
}

Fraction Fraction::operator*(Fraction a)
{
	Fraction aux(numitor * a.numitor, numarator * a.numarator);
	return aux;
}

Fraction Fraction::operator+(Fraction a)
{
	int numitor1 = numitor, numitor2 = a.numitor;
	if (numitor1 != numitor2)
	{
		int NUMITOR = numitor1 * numitor2;
		int NUMARATOR = numitor1 * a.numarator + numitor2 * numarator;
		Fraction dum(NUMARATOR, NUMITOR);
		return dum;
	}
	else
	{
		int NUMARATOR = numarator + a.numarator;
		int NUMITOR = numitor1;
		Fraction dum(NUMARATOR, NUMITOR);
		return dum;
	}
}

void Fraction::print()
{
	std::cout << this->numarator << ' ' << this->numitor<<'\n';
}