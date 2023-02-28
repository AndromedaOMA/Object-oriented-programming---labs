#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;

void Student::setName(char n[100])
{
	strcpy(name, n);
}
void Student::initCount()
{
	countMath = 0;
	countEnglish = 0;
	countHistory = 0;
}
void Student::setGradeMath(int val)
{
	mathGrades[countMath++] = val;
}
void Student::setGradeEnglish(int val)
{
	englishGrades[countEnglish++] = val;
}
void Student::setGradeHistory(int val)
{
	historyGrades[countHistory++] = val;
}
void Student::detAvarageGrade()
{
	int avMath = 0, avEng = 0, avHis = 0;
	for (int i = 0; i < countMath; i++)
		avMath += mathGrades[i];
	avMath /= countMath;
	for (int i = 0; i < countEnglish; i++)
		avEng += englishGrades[i];
	avEng /= countEnglish;
	for (int i = 0; i < countHistory; i++)
		avHis += historyGrades[i];
	avHis /= countHistory;
	avarageGrade = (avEng + avHis + avMath) / 3;
}
