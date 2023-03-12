#pragma once
#include <string.h>
class Sort
{
	int* v, count;
public:
	Sort(int count, int min, int max);
	Sort(int countSort, int vSort[]);
	Sort(int* v, int count);
	Sort(int count, ...);
	Sort(char* str);

	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);
	void Print();
	int GetElementsCount();
	int GetElementFromIndex(int index);
};