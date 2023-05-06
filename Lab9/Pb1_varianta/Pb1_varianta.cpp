#include <iostream>

//O IDEE DATA DE ChatGPT...

template<typename K, typename V>
class Map
{
private:
	static const int MAX_SIZE = 100;
	K keys[MAX_SIZE];
	V values[MAX_SIZE];
	int count;

public:
	Map()
	{
		count = 0;
	}

	void Set(const K& key, const V& value)
	{
		for (int i = 0; i < count; i++)
		{
			if (keys[i] == key)
			{
				values[i] = value;
				return;
			}
		}
		if (count < MAX_SIZE)
		{
			keys[count] = key;
			values[count] = value;
			count++;
		}
	}

	bool Get(const K& key, V& value)
	{
		for (int i = 0; i < count; i++)
		{
			if (keys[i] == key)
			{
				value = values[i];
				return true;
			}
		}
		return false;
	}

	int Count() const
	{
		return count;
	}

	void Clear()
	{
		count = 0;
	}

	bool Delete(const K& key)
	{
		for (int i = 0; i < count; i++)
		{
			if (keys[i] == key)
			{
				keys[i] = keys[count - 1];
				values[i] = values[count - 1];
				count--;
				return true;
			}
		}
		return false;
	}

	bool Includes(const Map<K, V>& other) const
	{
		for (int i = 0; i < other.count; i++)
		{
			bool found = false;
			for (int j = 0; j < count; j++)
			{
				if (keys[j] == other.keys[i])
				{
					found = true;
					break;
				}
			}
			if (!found)
				return false;
		}
		return true;
	}

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

	class Iterator
	{
	private:
		const Map<K, V>& map;
		int index;

	public:
		Iterator(const Map<K, V>& map, int index) : map(map), index(index) {}
		Iterator& operator++() { p++; return *this; }
		bool operator!=(MyIterator& m) { return p != m.p; }
		int operator*() { return *p; }
	};
	Iterator begin() const { return Iterator(*this, 0); }
	Iterator end() const { return Iterator(*this, count); }
};


int main()
{
	Map<int, const char*> m;
	m[10] = "C++";
	m[20] = "test";
	m[30] = "Poo";
	for (auto [key, value, index] : m)
	{
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
	}
	m[20] = "result";
	for (auto [key, value, index] : m)
	{
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
	}
	return 0;
}

//will print the following on the screen :
//Index:0, Key = 10, Value = C++
//Index : 1, Key = 20, Value = test
//Index : 2, Key = 30, Value = Poo
//Index : 0, Key = 10, Value = C++
//Index : 1, Key = 20, Value = result
//Index : 2, Key = 30, Value = Poo