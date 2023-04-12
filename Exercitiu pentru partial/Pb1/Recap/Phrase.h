#pragma once

class Phrase
{
private:
	char c[100], ma[100][100];
	int dim = 0, wordCount=-1;
public:
	~Phrase();
	Phrase(const char* c);

	operator int();

	char* operator[](int index);

	int CountLetter(int n, const char str);

	int CountLetter(const char str);

	int GetLongestWord();

	void verifyPrint();
};

