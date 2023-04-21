#pragma once
class Fraction
{
private:
	int numitor, numarator;
public:
	Fraction(int a,int b);
	~Fraction();

	Fraction operator*(Fraction a);
	Fraction operator+(Fraction a);

	Fraction(const Fraction& a);

	void print();
};

