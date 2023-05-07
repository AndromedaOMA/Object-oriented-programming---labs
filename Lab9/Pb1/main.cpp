#include <iostream>
#include <cstdio>

template<typename K, typename V>
class Map {
public:
	class Pair {
	public:
		K key;
		V value;
		int index;
		void operator=(const V& val)
		{
			this->value = val;
		}
	};

	Pair* pairs;
	int currentIndex;
	int maxElements;

	Map()
	{
		this->maxElements = 10;
		this->pairs = new Pair[this->maxElements];
		this->currentIndex = 0;
	}
	~Map()
	{
		delete pairs;
	}

	Pair& operator[](const K& k)
	{
		int index = -1;
		for (int i = 0; i < currentIndex; i++)
			if (this->pairs[i].key == k)
			{
				index = i;
				break;
			}
		if (index != -1)
			return this->pairs[index];
		else
		{
			this->pairs[currentIndex] = Pair();
			this->pairs[currentIndex].key = k;
			this->pairs[currentIndex].index = currentIndex;
			return this->pairs[currentIndex++];
		}
	}



	class MyIterator {
	public:
		Pair* p;

		MyIterator& operator++() { p++; return *this; }
		bool operator!=(MyIterator& m) { return p != m.p; }
		Pair operator*() { return *p; }
	};

	//int* begin() { return&v[0]; }
	//int* end() { return&v[10]; }
	MyIterator begin() { MyIterator i; i.p = &pairs[0]; return i; }
	MyIterator end() { MyIterator i; i.p = &pairs[currentIndex]; return i; }

//-------------------------------------------

	Pair& Set(K val, const K& k)
	{
		int index = -1;
		for (int i = 0; i < currentIndex; i++)
			if (this->pairs[i].key == k)
			{
				index = i;
				break;
			}
		if (index != -1)
		{
			this->pairs[index].key = val;
			return this->pairs[index];
		}
		else
		{
			printf("Error!");
			return 0;
		}
	}

	bool Get(const K& key, V& value)
	{
		int index = -1;
		for (int i = 0; i < currentIndex; i++)
			if (this->pairs[i].k == key)
				index = i;
		if (index != -1)
		{
			this->pairs[index].value = (V)key;
			return true;
		}
		else
			return false;
	}

	int Count()
	{
		return currentIndex;
	}

	void Clear()
	{
		delete pairs;
	}

	bool Delete(const K& key)
	{
		int index = -1;
		for (int i = 0; i < currentIndex; i++)
			if (this->pairs[i].k == key)
				index = i;
		if (index != -1)
		{
			printf("Error!");
			return 0;
		}
	}

	bool Includes(const Map<K, V>& map)
	{
		for (int i = 0; i < currentIndex; i++)
		{
			int ok = 0;
			for (int j = 0; j < map.currentIndex; i++)
				if (this->pairs[i] == map->pairs[j])
					ok = 1;
			if (ok == 0)
				return false;
		}
		return true;
	}
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