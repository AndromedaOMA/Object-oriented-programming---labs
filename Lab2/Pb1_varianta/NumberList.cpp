#include <iostream>
#include "NumberList.h"
using namespace std;

void NumberList::Init()
{
	count = 0;
}
bool NumberList::Add(int x)
{
	if (count < 10)
	{
		numbers[count++] = x;
		return 1;
	}
	return 0;
}
void NumberList::Sort()
{
	for (int i = 0; i < count - 1; i++)
		for (int j = i + 1; j < count; j++)
			if (numbers[i] > numbers[j])
				swap(numbers[i], numbers[j]);
}
void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		cout << numbers[i] << ' ';
	cout << '\n';
}

