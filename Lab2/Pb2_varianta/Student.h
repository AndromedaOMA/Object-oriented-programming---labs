#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	char name[100];
	int countMath, countEnglish, countHistory, avarageGrade;
	float mathGrades[10], englishGrades[10], historyGrades[10];
public:
	void setName(char n[100]);
	void initCount();
	void setGradeMath(int val);
	void setGradeEnglish(int val);
	void setGradeHistory(int val);
	void detAvarageGrade();

	int friend compareNames(Student A, Student B);
	int friend compareGradeMath(Student A, Student B);
	int friend compareGradeEnglish(Student A, Student B);
	int friend compareGradeHistory(Student A, Student B);
	int friend compareAvarageGrade(Student A, Student B);
};