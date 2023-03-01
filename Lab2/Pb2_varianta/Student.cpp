#include <iostream>
#include <cstring>
#include <string.h>
#include "Student.h"
using namespace std;

void Student::initCount()
{
	countMath = 0;
	countEnglish = 0;
	countHistory = 0;
}
//---------------------------------
void Student::setName(char n[100])
{
	strcpy(name, n);
}
string Student::getName() const
{
	return name;
}
//---------------------------------
void Student::setGradeMath(int val)
{
	mathGrade = val;
}
int Student::getGradeMath() const
{
	return mathGrade;
}
//---------------------------------
void Student::setGradeEnglish(int val)
{
	englishGrade = val;
}
int Student::getGradeEnglish()const
{
	return englishGrade;
}
//---------------------------------
void Student::setGradeHistory(int val)
{
	historyGrade = val;
}
int Student::getGradeHistory()const
{
	return historyGrade;
}
//---------------------------------
void Student::detAvarageGrade()
{
	avarageGrade = (englishGrade + historyGrade + mathGrade) / 3;
}
int Student::getAvarageGrade()const
{
	return avarageGrade;
}
