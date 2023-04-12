#include "NumberList.h"
#include <iostream>
int main()
{
	NumberList l;
	l.Init();
	l.Add(3);
	l.Add(2);
	l.Add(5);
	l.Add(1);
	l.Add(4);
	l.Print();
	l.Sort();
	l.Print();
}