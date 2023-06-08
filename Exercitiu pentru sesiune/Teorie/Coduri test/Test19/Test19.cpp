#include <iostream>

class Masina{
protected: int km;
public:
	void SetKm()
	{
		km = 10;
	}
	int GetKm()
	{
		return km;
	}
};
class Dacia : public Masina{
protected: int km;
public:
	void SetKm()
	{
		km = 20;
	}
};

int main()
{
	Dacia d;
	Masina* m = (Masina*)&d;
	m->SetKm();
	d.SetKm();
	std::cout << m->GetKm() << ' ' << d.GetKm();
	return 0;
}