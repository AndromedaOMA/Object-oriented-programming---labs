#pragma once

class Phrase
{
private:
	char ma[100][100];
	int totalW;
public:
	char prop[100];
	Phrase(const char c[]);
	~Phrase();

	operator int();//cast

	char* operator[](int index);

	int CountLetter(int n, char c);

	int CountLetter(int n);

	char* GetLongestWord();

	int CountVowels();
};

