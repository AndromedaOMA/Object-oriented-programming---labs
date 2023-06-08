#include <iostream>
using namespace std;

class Masina {
protected:
	int km;
public:
	void SetKM() { km = 10; }
	int GetKM() { return km; }
};

class Dacia : public Masina {
protected:
	int km;
public:
	void SetKM() { km = 20; }
};

int main()
{
	Dacia d;
	Masina* m = (Masina*)&d;
	m->SetKM();
	d.SetKM();
	cout << m->GetKM() << ' ' << d.GetKM();
	return 0;
}