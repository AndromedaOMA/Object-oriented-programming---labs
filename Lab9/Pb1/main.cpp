#include <iostream>
#include <cstdio>

template<typename K, typename V>
class Map {
private:
	class Pair {
	private:
		K key;
		V value;
		int index;
	public:
		//TODO
		operator=(const V& val)
		{
			this->value = val;
		}
	};
	Pair* pairs;
	int indexCurent;
	int maxElements;

public:
	Map()
	{
		this->maxElements = 10;
		this->pairs = new Pair[this->maxElements];
		this->indexCurent = 0;
	}
	~Map()
	{
		//OPTIONAL
		/*for(int i=0;i< this->indexCurent;i++)
			delete Pair[i];*/
		delete[]Pair;
	}
	//TODO
	Pair& operator[](const K& k)
	{
		int ok = 0;
		for (int i : pairs)
			if (this->key == k)
				ok = 1;
		if (!ok)
			this->Key = k;
		else
			this->pairs = new Pair[this->maxElements];
	}

	//-------------------------------------------
	
	class MyIterator {
	public:
		int* p;

		MyIterator& operator++() { p++; return *this; }
		bool operator!=(MyIterator& m) { return p != m.p; }
		int operator*() { return *p; }
	};
	//int* begin() { return&v[0]; }
	//int* end() { return&v[10]; }
	MyIterator begin() { MyIterator i; i.p = &v[0]; return i; }
	MyIterator end() { MyIterator i; i.p = &v[10]; return i; }
};

int main()
{
	Map<int, const char*> m;
	m[10] = "C++";
	m[20] = "test";
	m[30] = "Poo";

	for (auto [key, value, index] : m)
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);

	m[20] = "result";

	for (auto [key, value, index] : m)
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);

	return 0;
}

//will print the following on the screen :
//Index:0, Key = 10, Value = C++
//Index : 1, Key = 20, Value = test
//Index : 2, Key = 30, Value = Poo
//Index : 0, Key = 10, Value = C++
//Index : 1, Key = 20, Value = result
//Index : 2, Key = 30, Value = Poo