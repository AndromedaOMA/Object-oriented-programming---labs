#include <iostream>
using namespace std;

class Test {
private:
	int membru;
public:
	Test(int val) { membru = val; }
	~Test() { membru = 0; }
	int Get() { return membru; }
};

int main()
{
	Test* mm = 0;
	mm = (Test*)malloc(sizeof(Test));
	new (mm)Test(100);
	cout<<mm->Get();
	mm->~Test();
	free(mm);
	return 0;
}