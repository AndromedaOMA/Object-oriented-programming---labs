#include <iostream>

class POO {
private:
	int v[100];
	int count;

public:
	POO() {
		count = 5;
		for (int i = 0; i < count; i++)
			v[i] = i;
	}
	POO(std::initializer_list<int> list)
	{
		count = 0;
		for (auto c : list)
			v[count++] = c;
	}
	void Print() {
		for (int i = 0; i < count; i++)
			std::cout << v[i] << ' ';
	}
};

int main()
{
	POO c{ };
	c.Print();
}