#include <iostream>
#include"Teacher.h"

int main()
{
	Teacher t1, t2("Olaru", 23, "FII", 2400);
	t1.Print();
	t2.Print();
	++t2;
	t1++;
	t1.Print();
	t2.Print();

	std::cout << (int)t1 << ' ' << (int)t2 << '\n';

	std::cout << t1.SumGrades(4, 1, 2, 3, 4)<<'\n';

	t1.Print();
	t1 = t2;
	t1.Print();
}