#include <iostream>
#include <cstring>
//#include "GlobalF.h"
#include "Student.h"

int  compareNames(Student A, Student B)
{
	int r;
	if (strcmp(A.name, B.name) == 0)
		r = 0;
	else
		if (strcmp(A.name, B.name) > 0)
			r = 1;
		else
			r = -1;
	return r;
}

int  compareGradeMath(Student A, Student B)
{
	int r;
	int avMathA = 0;
	for (int i = 0; i < A.countMath; i++)
		avMathA += A.mathGrades[i];
	avMathA /= A.countMath;
	int avMathB = 0;
	for (int i = 0; i < B.countMath; i++)
		avMathB += B.mathGrades[i];
	avMathB /= B.countMath;

	if (avMathA == avMathB)
		r = 0;
	else
		if (avMathA > avMathB)
			r = 1;
		else
			r = -1;
	return r;
}
int  compareGradeEnglish(Student A, Student B)
{
	int r;
	int avEngA = 0;
	for (int i = 0; i < A.countMath; i++)
		avEngA += A.englishGrades[i];
	avEngA /= A.countMath;
	int avEngB = 0;
	for (int i = 0; i < B.countMath; i++)
		avEngB += B.englishGrades[i];
	avEngB /= B.countMath;

	if (avEngA == avEngB)
		r = 0;
	else
		if (avEngA > avEngB)
			r = 1;
		else
			r = -1;
	return r;
}
int  compareGradeHistory(Student A, Student B)
{
	int r;
	int avHisA = 0;
	for (int i = 0; i < A.countMath; i++)
		avHisA += A.historyGrades[i];
	avHisA /= A.countMath;
	int avHisB = 0;
	for (int i = 0; i < B.countMath; i++)
		avHisB += B.historyGrades[i];
	avHisB /= B.countMath;

	if (avHisA == avHisB)
		r = 0;
	else
		if (avHisA > avHisB)
			r = 1;
		else
			r = -1;
	return r;
}
int  compareAvarageGrade(Student A, Student B)
{
	int r;
	if (A.avarageGrade == B.avarageGrade)
		r = 0;
	else
		if (A.avarageGrade > B.avarageGrade)
			r = 1;
		else
			r = -1;
	return r;
}
