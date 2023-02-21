// Lab1
#include <iostream>
#pragma warning(disable:4996)
using namespace std;

int myAtoi(char* str)
{
	int res = 0, i = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return res;
}

int main()
{
	int s = 0;
	FILE* fp = fopen("in.txt", "r");
	char line[100];
	while (fgets(line, 100, fp))
		s += myAtoi(line);
	printf("Rezultatul este: %i", s);
	return 0;
}