#include < iostream>
class A
{
public:
	virtual ~A()
	{
		std ::cout << "destructor A";
	}
};
class B
{
public:
	virtual ~B()
	{
		std ::cout << "destructor B";
	}
};
int main()
{
	B* b = new B();
	A* a = (A*)b;
	delete a;
	return 0;
}