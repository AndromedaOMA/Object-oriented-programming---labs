#include <iostream>

class Vector {
private:
	int v[10];
public:
	Vector() { for (int i = 0; i < 10; i++) v[i] = i; }
	int* begin() { return &v[0]; }
	int* end() { return &v[10]; }
	void print() { for (int i : v) std::cout << v[i] << ' '; std::cout << '\n'; }
};


struct Student
{
	const char* Name;
	int Grade;
};
Student GetInfo()
{
	return Student{ "Popescu",10 };
}



int main()
{
	int v[3] = { 1,2,3 };
	for (int i : v)
		std::cout << v[i] << '\n';
	std::cout << '\n';
	for (int i : v)
		std::cout << i << '\n';

	std::cout << '\n';

	//int x[][3] = { {1,2,3}, { 1,2,3 } };
	//for (int* i : x)
	//	for (int index = 0; index < 3; index++)
	//		std::cout << i[index] << ' ';

	std::cout << '\n';
	std::cout << '\n';

	Vector z;
	z.print();
	for (int &i : z)
		std::cout << i*2 << ' ';
	z.print();

	int a[2] = { 1,2 };
	auto& [x, y] = a;
	x = 3;
	printf("a=[%d,%d] and x=%d", a[0], a[1], x);

	std::cout << '\n';

	decltype(a) aa;
	std::cout <<"decltype: "<< sizeof(a) << ' ' << sizeof(aa);

	std::cout << '\n';

	auto [name, grade] = GetInfo();
	printf("Student: %s, Grade:%d ", name, grade);
	return 0;
}