#include <iostream>
#include <string>
#include <cstdarg>
#include <stack>
#include "Sort.h"
using namespace std;

Sort::Sort(int count, int min, int max)
{
	this->count = count;
	v = new int[this->count];
	for (int i = 0; i < this->count; i++)
		v[i] = rand() % (max - min + 1) + min;
}

Sort::Sort(int countSort, int vSort[]) : v(vSort), count(countSort) {}

Sort::Sort(int* vSort, int count)
{
	this->count = count;
	v = new int[this->count];
	for (int i = 0; i < this->count; i++)
		v[i] = vSort[i];
}

Sort::Sort(int count, ...)
{
	this->count = count;
	va_list arguments;
	va_start(arguments, count);
	v = new int[count];
	for (int i = 0; i < count; i++)
		v[i] = va_arg(arguments, int);
	va_end(arguments);
}

Sort::Sort(char* str)
{
	int vect[100], dim = 0;
	char* p = strtok(str, ",");
	while (p)
	{
		vect[dim++] = atoi(p);
		p = strtok(NULL, ",");
	}
	count = dim;
	v = new int[dim];
	for (int i = 0; i < dim; i++)
		v[i] = vect[i];
}

//--------------------------------------------

void Sort::InsertSort(bool ascendent)
{
	int count = GetElementsCount();
	if (ascendent)
	{
		int curent = 1;
		while (curent <= count - 1)
		{
			int aux = v[curent], i = curent - 1;
			while (i >= 0 && v[i] > aux)
			{
				v[i + 1] = v[i];
				i--;
			}
			v[i + 1] = aux;
			curent++;
		}
	}
	else
	{
		int curent = 1;
		while (curent <= count - 1)
		{
			int aux = v[curent], i = curent - 1;
			while (i >= 0 && v[i] < aux)
			{
				v[i + 1] = v[i];
				i--;
			}
			v[i + 1] = aux;
			curent++;
		}
	}
}
void Sort::QuickSort(bool ascendent)
{
	int count = GetElementsCount();
	stack<pair<int, int>> stk;
	stk.push({ 0, count - 1 });
	while (!stk.empty()) {
		int l = stk.top().first, r = stk.top().second;
		stk.pop();
		if (l >= r) continue;
		int laux = l, raux = r;
		bool pivotL = true;
		//daca pivotL este true, atunci pivotul se afla in capatul din stanga
		while (l < r)
		{
			if (ascendent)
			{
				if (v[l] > v[r])
				{
					swap(v[l], v[r]);
					pivotL = !pivotL;
				}
			}
			else
			{
				if (v[l] < v[r])
				{
					swap(v[l], v[r]);
					pivotL = !pivotL;
				}
			}
			if (pivotL)
				r--;
			else
				l++;
		}
		//l=r (pozitia pivotului)
		stk.push({ laux, l - 1 }), stk.push({ l + 1, raux });
	}
}
void Sort::BubbleSort(bool ascendent)
{
	int count = GetElementsCount();
	if (ascendent)
	{
		bool sorted = false;
		while (!sorted)
		{
			sorted = true;
			for (int i = 0; i <= count - 2; i++)
				if (v[i] > v[i + 1])
				{
					swap(v[i], v[i + 1]);
					sorted = false;
				}
		}
	}
	else
	{
		bool sorted = false;
		while (!sorted)
		{
			sorted = true;
			for (int i = 0; i <= count - 2; i++)
				if (v[i] < v[i + 1])
				{
					swap(v[i], v[i + 1]);
					sorted = false;
				}
		}
	}
}
void Sort::Print()
{
	for (int i = 0; i < count; i++)
		cout << v[i] << ' ';
}
int  Sort::GetElementsCount()
{
	return count;
}
int  Sort::GetElementFromIndex(int index)
{
	if (index >= 0)
		return v[index];
	return 0;
}