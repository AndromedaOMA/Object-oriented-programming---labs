#include <iostream>

class Exam {
private:
	int nr;
public:
	Exam(int a) { this->nr = a; }
	void operator++(int index) { this->nr--; }
	void operator++() { this->nr += 5; }
	void print() { std::cout << "nr= " << this->nr<<", "; }
};

int main()
{
	Exam a(7), b(4), c(6);
	a++; ++b; ++b; ++c; b++; ++a; ++a; c++;
	a.print();
	b.print();
	c.print();
	return 0;
}