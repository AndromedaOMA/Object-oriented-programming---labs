class MyIterator {
public:
	int* p;

	MyIterator& operator++() { p++; return *this; }
	bool operator!=(MyIterator& m) { return p != m.p; }
	int operator*() { return *p; }
};

class MyVector {
	int v[10];
public:
	MyVector()
	{
		for (int i = 0; i < 10; i++)
			v[i] = i;
	}
	MyIterator begin() { MyIterator i; i.p = &v[0]; return i; }
	MyIterator end() { MyIterator i; i.p = &v[10]; return i; }
};

//SAU

class MyVector
{
	int x[10];
public:
	MyVector() { for (int tr = 0; tr < 10; tr++) x[tr] = tr; }
	int* begin() { return &x[0]; }
	int* end() { return &x[10]; }
};