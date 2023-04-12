#pragma once

class Person {
protected:
	char name[100];
	int age;
public:
	virtual void SetName(const char* n) = 0;
	virtual void SetAge(int n) = 0;

	virtual char* GetName() = 0;
	virtual int GetAge() = 0;
};


