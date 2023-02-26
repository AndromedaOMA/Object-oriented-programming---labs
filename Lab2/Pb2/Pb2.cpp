// Pb2
#include <iostream>
#include <cstring>
using namespace std;

/*	ultimul enunt!
void compNames(Student A, Student B, int r)
{
	if(strcmp(A.name,B.name)<=0)
		r=...;
}
*/

class Student
{
	char name[100];
	int Math[10], countMath, Eng[10], countEng, His[10], countHis, avGrade;
public:
	void setName(char n[100]);
	void init();
	void setGrMath(int val);
	void setGrEng(int val);
	void setGrHis(int val);
	void detAvGrade();
};
void Student::setName(char n[100])
{
	strcpy(name, n);
}
void Student::init()
{
	countMath = 0;
	countEng = 0;
	countHis = 0;
}
void Student::setGrMath(int val)
{
	Math[countMath++] = val;
}
void Student::setGrEng(int val)
{
	Eng[countEng++] = val;
}
void Student::setGrHis(int val)
{
	His[countHis++] = val;
}
void Student::detAvGrade()
{
	int avMath = 0, avEng = 0, avHis = 0;
	for (int i = 0; i < countMath; i++)
		avMath += Math[i];
	avMath /= countMath;
	for (int i = 0; i < countEng; i++)
		avEng += Eng[i];
	avEng /= countEng;
	for (int i = 0; i < countHis; i++)
		avHis += His[i];
	avHis /= countHis;
	avGrade = (avEng + avHis + avMath) / 3;
}

int main()
{
	Student A, B;
	char nameA[100] = "Marius", nameB[100] = "Marius";
	A.setName(nameA);
	A.init();
	A.setGrMath(9);
	A.setGrMath(5);
	A.setGrEng(9);
	A.setGrEng(5);
	A.setGrHis(9);
	A.setGrHis(5);
	A.detAvGrade();

	B.setName(nameB);
	B.init();
	B.setGrMath(9);
	B.setGrMath(10);
	B.setGrEng(9);
	B.setGrEng(10);
	B.setGrHis(9);
	B.setGrHis(10);
	B.detAvGrade();

	return 0;
}