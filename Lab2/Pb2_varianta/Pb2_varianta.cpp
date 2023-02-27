// Pb2 (problema rezolvata folosind specificatorul "friends")
#include <iostream>
#include <cstring>
using namespace std;

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

	int friend compNames(Student A, Student B);
	int friend compGrMath(Student A, Student B);
	int friend compGrEng(Student A, Student B);
	int friend compGrHis(Student A, Student B);
	int friend compGrAvGrade(Student A, Student B);
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

//functiile globale (friends)

int  compNames(Student A, Student B)
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
int  compGrMath(Student A, Student B)
{
	int r;
	int avMathA = 0;
	for (int i = 0; i < A.countMath; i++)
		avMathA += A.Math[i];
	avMathA /= A.countMath;
	int avMathB = 0;
	for (int i = 0; i < B.countMath; i++)
		avMathB += B.Math[i];
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
int  compGrEng(Student A, Student B)
{
	int r;
	int avEngA = 0;
	for (int i = 0; i < A.countMath; i++)
		avEngA += A.Math[i];
	avEngA /= A.countMath;
	int avEngB = 0;
	for (int i = 0; i < B.countMath; i++)
		avEngB += B.Math[i];
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
int  compGrHis(Student A, Student B)
{
	int r;
	int avHisA = 0;
	for (int i = 0; i < A.countMath; i++)
		avHisA += A.Math[i];
	avHisA /= A.countMath;
	int avHisB = 0;
	for (int i = 0; i < B.countMath; i++)
		avHisB += B.Math[i];
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
int  compGrAvGrade(Student A, Student B)
{
	int r;
	if (A.avGrade == B.avGrade)
		r = 0;
	else
		if (A.avGrade > B.avGrade)
			r = 1;
		else
			r = -1;
	return r;
}

int main()
{
	Student A, B;
	char nameA[100] = "Marius", nameB[100] = "Alexandru";

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

	int nrA = 0, nrB = 0;
	if (compNames(A, B))
		if (compNames(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compGrMath(A, B))
		if (compGrMath(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compGrEng(A, B))
		if (compGrEng(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compGrHis(A, B))
		if (compGrHis(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compGrAvGrade(A, B))
		if (compGrAvGrade(A, B) == 1)
			nrA++;
		else
			nrB++;

	if (nrA > nrB)
		cout << "studentul mai bun este A";
	else
		cout << "studentul mai bun este B";
	return 0;
}