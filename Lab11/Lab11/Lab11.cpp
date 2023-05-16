#include <iostream>
#include <cassert>
#include "Sort.h"

int main()
{
	MyList<int> v1, v2;
	v1 += 3;
	v1 += 5;
	v1 += 1;
	v1 += 9;

	v2 += 5;
	v2 += 1;
	v2 += 9;
	v2 += 3;

	v1.afisare();
	v2.afisare();

	v2.Sort();

	v1.afisare();
	v2.afisare();
	//assert(v1 == v2);

}