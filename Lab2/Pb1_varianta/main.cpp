// Pb1
#include <iostream>
#include "NumberList.cpp"
using namespace std;
int main()
{
	NumberList n;
	n.Init();
	n.Add(12);
	n.Add(11);
	n.Add(25);
	n.Sort();
	n.Print();
	return 0;
}
