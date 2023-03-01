#pragma once

#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	char name[100];
	int countMath, countEnglish, countHistory, avarageGrade;
	float mathGrade, englishGrade, historyGrade;
public:
	void initCount();
	void setName(char n[100]);
	string getName() const;
	void setGradeMath(int val);
	int getGradeMath() const;
	void setGradeEnglish(int val);
	int getGradeEnglish() const;
	void setGradeHistory(int val);
	int getGradeHistory() const;
	void detAvarageGrade();
	int getAvarageGrade() const;

	//int friend compareNames(Student A, Student B);
	//int friend compareGradeMath(Student A, Student B);
	//int friend compareGradeEnglish(Student A, Student B);
	//int friend compareGradeHistory(Student A, Student B);
	//int friend compareAvarageGrade(Student A, Student B);
};