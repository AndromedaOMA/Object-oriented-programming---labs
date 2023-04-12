// Pb2 (problema rezolvata folosind specificatorul "friends")
#include <iostream>
#include <cstring>
#include "Class.h"
#include "GFunctions.h"
using namespace std;

int main()
{
	Class A, B;
	char nameA[100] = "Marius", nameB[100] = "Alexandru";

	A.setName(nameA);
	A.setGradeMath(9);
	A.setGradeEnglish(9);
	A.setGradeHistory(9);
	A.setAvarageGrade();

	B.setName(nameB);
	B.setGradeMath(2);
	B.setGradeEnglish(2);
	B.setGradeHistory(2);
	B.setAvarageGrade();

	int nrA = 0, nrB = 0;
	if (compareNames(A, B))
		if (compareNames(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compareGradeMath(A, B))
		if (compareGradeMath(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compareGradeEnglish(A, B))
		if (compareGradeEnglish(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compareGradeHistory(A, B))
		if (compareGradeHistory(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compareAvarageGrade(A, B))
		if (compareAvarageGrade(A, B) == 1)
			nrA++;
		else
			nrB++;

	if (nrA > nrB)
		cout << "studentul mai bun este A";
	else
		cout << "studentul mai bun este B";
	return 0;
}