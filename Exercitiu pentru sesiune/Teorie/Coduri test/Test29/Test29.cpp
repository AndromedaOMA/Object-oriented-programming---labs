#include <iostream>
using namespace std;
struct Iterator {
	int* a;
	int poz;
	Iterator(int* _a, int _poz) { a = _a; poz = _poz; }
	Iterator& operator++() { poz = (poz + 2) % 10; return *this; }
	int operator* () { return a[poz]; }
	bool operator!=(const Iterator& it) { return poz != it.poz; }
};
class Data {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
public:
	Iterator begin() { return { a,1 }; }
	Iterator end() { return { a,10 }; }
};
int main()
{
	Data d;
	for (auto value : d) cout << value << ' ';
	return 0;
}