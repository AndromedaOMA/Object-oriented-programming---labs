#include "Class.h"
#include <string>

void Class::setName(char n[])
{
	memcpy(this->name, n, strlen(n) + 1);
}

void Class::setGradeMath(int n)
{
	this->gradeMath = n;
}
void Class::setGradeEnglish(int n)
{
	this->gradeEnglish = n;
}
void Class::setGradeHistory(int n)
{
	this->GradeHistory = n;
}
void Class::setAvarageGrade()
{
	this->avarageGrade = (this->gradeMath + this->gradeEnglish + this->GradeHistory) / 3;
}

int Class::getGradeMath()
{
	return this->gradeMath;
}
int Class::getGradeEnglish()
{
	return this->gradeEnglish;
}
int Class::getGradeHistory()
{
	return this->GradeHistory;
}