#pragma once
class Phrase
{
private:
	char str[100], ma[100][100];
	unsigned int dim, noWords;
public:
	Phrase(char* str);
	~Phrase();
	unsigned int LenghtStr(char* str);
	operator int();
	Phrase& operator=(const char* str);
	int operator[](const int i);
	int CountLetter(int nr, char c);
	int CountLetter(char c);
	int CountVowels();
	int GetLongestWord();
};

