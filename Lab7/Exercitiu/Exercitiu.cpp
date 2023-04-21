#include <iostream>
//MACROS
#define Buffer 2000
#define MAXIM(x,y){\
if (x > y) std::cout << x << " este mai mare\n";\
else std::cout << y << " este mai mare\n";\
}

#undef MAXIM

#define MAXIM()\
std::cout<<"Super tare!\n";

int operator""_GSUM(unsigned long long int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
		s += i;
	return s;
}

//Templates for functions:
template <typename T>
T maxim(T x, T y)
{
	if (x > y)
		return x;
	return y;
}

template <typename T1,typename T2>
T1 minim(T1 a, T2 b)
{
	if (a < b)
		return a;
	return b;
}

//Template for classes:
	template <typename T>
class Tower {
private:
	int tower[100], height[100], nr = 0;
public:
	void addTower(T val, T h)
	{
		tower[nr] = val;
		height[nr] = h;
		nr++;
	}
	void print()
	{
		for (int i = 0; i < nr; i++)
			std::cout << "Number: " << tower[i] << ", height: " << height[i]<<'\n';
	}
};

int main()
{
	int a = 100, b = 2;
	MAXIM(a, b);

	std::cout << 3_GSUM<<'\n';
	//---------------------------
	float c = 1.2, d = 9.3;
	char e = 'a', f = 'v';
	std::cout << maxim<int>(c, d) << '\n';
	std::cout << maxim<char>(e, f) << '\n';
	///--------------------------
	std::cout << minim<int,float>(3, 2.2) << '\n';
	//---------------------------
	Tower<int> t;
	t.addTower(1, 10);
	t.addTower(2, 15);
	t.addTower(3, 11);
	t.print();
}