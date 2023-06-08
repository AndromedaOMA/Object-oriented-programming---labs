#include <iostream>

class Exam {
	int nr;
public:
	Exam(int a) { this->nr = a; }
	void operator++() { this->nr += 5; }
	void operator++(int i) { this->nr -= 1; }
	void Print() { std::cout << this->nr<< ' '; }
};
int main()
{
	Exam a(4), b(5), c(6);
	a++; ++a; ++b; ++b; b++; ++c; c++;
	a.Print();
	b.Print();
	c.Print();
	return 0;
}