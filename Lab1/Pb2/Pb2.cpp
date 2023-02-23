// Pb2
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char* p, list[100][100], prop[100];
	int dim = -1;
	cin.get(prop, 100);
	p = strtok(prop, " ");
	while (p)
	{
		strcpy(list[++dim], p);
		p = strtok(NULL, " ");
	}
	for (int i = 0; i < dim; i++)
		for (int j = i + 1; j <= dim; j++)
			if (strlen(list[i]) < strlen(list[j]) ||
				strlen(list[i]) == strlen(list[j]) &&
				strcmp(list[i], list[j]) < 0)
				swap(list[i], list[j]);
	for (int i = 0; i <= dim; i++)
	{
		cout << list[i];
		cout << '\n';
	}
	return 0;
}