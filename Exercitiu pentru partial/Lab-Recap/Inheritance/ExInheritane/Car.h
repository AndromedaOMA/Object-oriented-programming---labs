#pragma once

class Car {
protected:
	char name[100];
	int units;
public:
	virtual void SetUnits(int val) = 0;
	virtual void SetName(const char* n) = 0;
	virtual int GetUnits() = 0;
	virtual char* GetName() = 0;
	virtual void Print() = 0;
};