#include <iostream>
#include "Sort.h"
using namespace std;

int main()
{
	Sort s1(10, 0, 100);

	cout << "Vectorul nesortat este: ";
	s1.Print();
	cout << '\n';

	s1.InsertSort(true);
	cout << "Vectorul sortat crescator este: ";
	s1.Print();
	cout << '\n';

	s1.InsertSort(false);
	cout << "Vectorul sortat descrescator este: ";
	s1.Print();
	cout << '\n';

	cout << "----------------------------------------------\n";

	int v2[6] = { 1,4,2,5,6,8 };
	Sort s2(6,v2);

	cout << "Vectorul nesortat este: ";
	s2.Print();
	cout << '\n';

	s2.QuickSort(true);
	cout << "Vectorul sortat crescator este: ";
	s2.Print();
	cout << '\n';

	s2.QuickSort(false);
	cout << "Vectorul sortat descrescator este: ";
	s2.Print();
	cout << '\n';

	cout << "----------------------------------------------\n";

	int v3[] = { 0, 2, 4, 1, 7 };
	Sort s3(v3, 5);
	cout << "Vectorul nesortat este: ";
	s3.Print();
	cout << '\n';

	s3.BubbleSort(true);
	cout << "Vectorul sortat crescator este: ";
	s3.Print();
	cout << '\n';

	s3.BubbleSort(false);
	cout << "Vectorul sortat descrescator este: ";
	s3.Print();
	cout << '\n';

	cout << "----------------------------------------------\n";

	Sort s4(5, 10, 3, 23, 8, 0);
	cout << "Vectorul nesortat este: ";
	s4.Print();
	cout << '\n';

	s4.InsertSort(true);
	cout << "Vectorul sortat crescator este: ";
	s4.Print();
	cout << '\n';

	s4.InsertSort(false);
	cout << "Vectorul sortat descrescator este: ";
	s4.Print();
	cout << '\n';
	
	cout << "----------------------------------------------\n";

	char s[] = "2,4,51,3,0,22";
	Sort s5(s);
	cout << "Vectorul nesortat este: ";
	s5.Print();
	cout << '\n';

	s5.InsertSort(true);
	cout << "Vectorul sortat crescator este: ";
	s5.Print();
	cout << '\n';

	s5.InsertSort(false);
	cout << "Vectorul sortat descrescator este: ";
	s5.Print();
	cout << '\n';

	return 0;
}