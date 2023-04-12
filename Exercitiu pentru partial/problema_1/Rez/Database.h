#pragma once
class Database
{
public:
	void Print();
	friend bool operator+=(Database a, const int b);
	friend bool operator-=(Database a, const int b);
};

