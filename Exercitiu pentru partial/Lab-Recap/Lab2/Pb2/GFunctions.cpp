#include "GFunctions.h"
#include "Class.h"
int compareNames(const Class& A, const Class& B)
{
	if (A.getName() == B.getName())
		return 0;
	else
		if (A.getName() > B.getName())
			return 1;
		else
			return -1;
}
int compareGradeMath(const Class& A, const Class& B)
{
	if (A.getGradeMath() == B.getGradeMath())
		return 0;
	else
		if (A.getGradeMath() > B.getGradeMath())
			return 1;
		else
			return -1;
}
int compareGradeEnglish(const Class& A, const Class& B)
{
	if (A.getGradeEnglish() == B.getGradeEnglish())
		return 0;
	else
		if (A.getGradeEnglish() > B.getGradeEnglish())
			return 1;
		else
			return -1;
}
int compareGradeHistory(const Class& A, const Class& B)
{
	if (A.getGradeHistory() == B.getGradeHistory())
		return 0;
	else
		if (A.getGradeHistory() > B.getGradeHistory())
			return 1;
		else
			return -1;
}
int compareAvarageGrade(const Class& A, const Class& B)
{
	if (A.getAvarageGrade() == B.getAvarageGrade())
		return 0;
	else
		if (A.getAvarageGrade() > B.getAvarageGrade())
			return 1;
		else
			return -1;
}
