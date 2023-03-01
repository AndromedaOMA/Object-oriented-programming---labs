#include <iostream>
#include <cstring>
#include "GlobalF.h"
#include "Student.h"
//#include "Student.h"

int compareNames(const Student& A, const Student& B)
{
	if (A.getName() == B.getName())
		return 0;
	else
		if (A.getName() > B.getName())
			return 1;
		else
			return -1;
}

//int  compareGradeMath(const Student& A, const Student& B)
//{
//	int avMathA = 0;
//	for (int i = 0; i < A.countMath; i++)
//		avMathA += A.mathGrades[i];
//	avMathA /= A.countMath;
//	int avMathB = 0;
//	for (int i = 0; i < B.countMath; i++)
//		avMathB += B.mathGrades[i];
//	avMathB /= B.countMath;
//
//	if (avMathA == avMathB)
//		return 0;
//	else
//		if (avMathA > avMathB)
//			return 1;
//		else
//			return -1;
//}
int compareGradeMath(const Student& A, const Student& B)
{
	if (A.getGradeMath() == B.getGradeMath())
		return 0;
	else
		if (A.getGradeMath() > B.getGradeMath())
			return 1;
		else
			return -1;
}
//int  compareGradeEnglish(const Student& A, const Student& B)
//{
//	int avEngA = 0;
//	for (int i = 0; i < A.countMath; i++)
//		avEngA += A.englishGrades[i];
//	avEngA /= A.countMath;
//	int avEngB = 0;
//	for (int i = 0; i < B.countMath; i++)
//		avEngB += B.englishGrades[i];
//	avEngB /= B.countMath;
//
//	if (avEngA == avEngB)
//		return 0;
//	else
//		if (avEngA > avEngB)
//			return 1;
//		else
//			return -1;
//}
int compareGradeEnglish(const Student& A, const Student& B)
{
	if (A.getGradeEnglish() == B.getGradeEnglish())
		return 0;
	else
		if (A.getGradeEnglish() > B.getGradeEnglish())
			return 1;
		else
			return -1;
}
//int  compareGradeHistory(const Student& A, const Student& B)
//{
//	int avHisA = 0;
//	for (int i = 0; i < A.countMath; i++)
//		avHisA += A.historyGrades[i];
//	avHisA /= A.countMath;
//	int avHisB = 0;
//	for (int i = 0; i < B.countMath; i++)
//		avHisB += B.historyGrades[i];
//	avHisB /= B.countMath;
//
//	if (avHisA == avHisB)
//		return 0;
//	else
//		if (avHisA > avHisB)
//			return 1;
//		else
//			return -1;
//}
int compareGradeHistory(const Student& A, const Student& B)
{
	if (A.getGradeHistory() == B.getGradeHistory())
		return 0;
	else
		if (A.getGradeHistory() > B.getGradeHistory())
			return 1;
		else
			return -1;
}
int compareAvarageGrade(const Student& A, const Student& B)
{
	if (A.getAvarageGrade() == B.getAvarageGrade())
		return 0;
	else
		if (A.getAvarageGrade() > B.getAvarageGrade())
			return 1;
		else
			return -1;
}
