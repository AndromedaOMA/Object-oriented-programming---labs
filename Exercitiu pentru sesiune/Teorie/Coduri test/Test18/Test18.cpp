#include <iostream>

class Test {
protected:
	int x = 1;
private:
	int y = 2;
public:
	int z;
	void Print()
	{
		std::cout << this->x;
	}
};
int main()
{
	Test t;
	t.z = 10.2;
	std::cout << t.z<<'\n';
	t.Print();
	return 0;
}