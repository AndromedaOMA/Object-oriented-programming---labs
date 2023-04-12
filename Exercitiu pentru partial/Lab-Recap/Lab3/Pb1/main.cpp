#include <iostream>
#include "Math.h"

using namespace std;
int main()
{
	Math m;
	int x, y, z;
	double a, b, c;
	char string1[100], string2[100];

	cout << "Scrieti trei valori intregi:" << '\n';
	cin >> x >> y >> z;
	cout << "Scrieti trei valori reale:" << '\n';
	cin >> a >> b >> c;
	cout << "Scrieti doua string-uri:" << '\n';
	cin >> string1 >> string2;
	cout << '\n';

	cout << "Avem suma primelor doua numere intregi introduse:" << '\n';
	cout << m.Add(x, y) << '\n';
	cout << "Avem suma tuturor numerelor reale introduse:" << '\n';
	cout << m.Add(a, b, c) << '\n';
	cout << "Avem produsul primelor doua, respectiv a tuturor numerelor intregi introduse:" << '\n';
	cout << m.Mul(x, y) << ", " << m.Mul(x, y, z) << '\n';
	cout << "Avem produsul primelor doua, respectiv a tuturor numerelor reale introduse:" << '\n';
	cout << m.Mul(a, b) << ", " << m.Mul(a, b, c) << '\n';
	cout << "Avem suma numarului variabil de valori intregi:" << '\n';
	cout << m.Add(5, 1, 2, 3, 4, 5) << '\n';
	cout << "Acum vom concatena cele doua siruri introduse:" << '\n';
	cout << m.Add(string1, string2);
	return 0;
}