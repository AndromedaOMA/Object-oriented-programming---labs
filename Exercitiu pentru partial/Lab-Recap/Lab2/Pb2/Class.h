#pragma once
class Class
{
private:
	char name[100];
	int gradeMath, gradeEnglish, GradeHistory, avarageGrade;
public:
	void setName(char n[]);
	void setGradeMath(int n);
	void setGradeEnglish(int n);
	void setGradeHistory(int n);
	void setAvarageGrade();

	int getGradeMath();
	int getGradeEnglish();
	int getGradeHistory();

};

