#include <exception>


class exceptie_out_of_range : public std::exception
{
	virtual const char* what() const throw()
	{
		return "Indexul este inafara domeniului!";
	}
};
class exceptie_wrong_index : public std::exception
{
	virtual const char* what() const throw()
	{
		return "Indexul este invalid!";
	}
};
class exceptie_capacitate_sub_1 : public std::exception
{
	virtual const char* what() const throw()
	{
		return "Capacitatea nu poate fi mai mic ca 1!";
	}
};


class Compare
{
public:
	virtual int CompareElements(void* e1, void* e2) = 0;
};///derivare clasa de aici


template<class T>
class ArrayIterator {
	//private:
	//	int Current;
	//	T** List;
	//	int Line, Column;
	//
	//public:
	//	ArrayIterator(T** list, int line, int column) :List(list), Current(0), Line(line), Column(column) {}
	//	ArrayIterator& operator++()
	//	{
	//		++Current;
	//		return *this;
	//	}
	//	ArrayIterator& operator--()
	//	{
	//		--Current;
	//		return *this;
	//	}
	//	bool operator==(ArrayIterator<T>& otherArray)
	//	{
	//		return Current == otherArray.Current && List == otherArray.List && Line == otherArray.Line && Column = otherArray.Column;
	//	}
	//	bool operator!=(ArrayIterator<T>& otherArray)
	//	{
	//		return *this != other;
	//	}
	//	T* GetElement()
	//	{
	//	}
private:
	int Current;

public:
	ArrayIterator() {}
	ArrayIterator& operator++()
	{
	}
	ArrayIterator& operator--()
	{
	}
	bool operator==(ArrayIterator<T>& otherArray)
	{
	}
	bool operator!=(ArrayIterator<T>& otherArray)
	{
	}
	T* GetElement()
	{
	}
};

template<class T>
class Array {
private:
	T** List; // lista cu pointeri la obiecte de tipul T*
	int Capacity; // dimensiunea listei de pointeri
	int Size; // cate elemente sunt in lista

public:
	Array() // Lista nu e alocata, Capacity si Size = 0
	{
		List = nullptr;
		Capacity = 0;
		Size = 0;
	}
	~Array() // destructor
	{
		for (int i = 0; i < Capacity; i++)
			delete List[i];
		delete[]List;
	}
	Array(int capacity) // Lista e alocata cu 'capacity' elemente
	{
		try {
			if (capacity < 1)
				throw exceptie_capacitate_sub_1();
			Capacity = capacity;
			List = new T[Capacity];
			for (int i = 0; i < Capacity; i++)
				List[i] = new T;
		}

		catch (exceptie_capacitate_sub_1& e)
		{
			cout << "Exceptie: " << e.what() << '\n';
		}
	}
	Array(const Array<T>& otherArray) // constructor de copiere
	{
		Capacity = otherArray.Capacity;
		Size = otherArray.Size;
		List = new T[Capacity];
		for (int i = 0; i < Capacity; i++)
		{
			List[i] = new T;
			*List[i] = otherArray[i];
		}
	}

	T& operator[] (int index) // arunca exceptie daca index este out of range
	{
		try {
			if (index < 0 || index>Size)
				throw exceptie_out_of_range();
			return this->List[index];
		}

		catch (exceptie_out_of_range& e)
		{
			cout << "Exceptie: " << e.what() << endl;
		}
	}

	const Array<T>& operator+=(const T& newElem) // adauga un element de tipul T la sfarsitul listei si returneaza this
	{
		*(this->List[++Size]) = newElem;
		return *this;
	}
	const Array<T>& Insert(int index, const T& newElem) // adauga un element pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
	{
		try {
			if (index < 0 || index >= Size)
				throw exceptie_wrong_index();

			//T* aux = newElem;

			for (int i = index + 1; i < Size; i++)
				List[i] = List[i - 1];
			List[index] = newElem;

			return this;
		}

		catch (exceptie_wrong_index& e)
		{
			cout << "Exceptie: " << e.what() << endl;
		}
	}
	const Array<T>& Insert(int index, const Array<T> otherArray) // adauga o lista pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
	{
		try {
			if (index < 0 || index >= Size)
				throw exceptie_wrong_index();

			T* aux = List[index];

			//?????????????????????????????????
			//ca mai sus

			return this;
		}

		catch (exceptie_wrong_index& e)
		{
			cout << "Exceptie: " << e.what() << endl;
		}
	}
	const Array<T>& Delete(int index) // sterge un element de pe pozitia index, returneaza this. Daca index e invalid arunca o exceptie
	{
		try {
			if (index < 0 || index >= Size)
				throw exceptie_wrong_index();

			//T* aux = newElem;

			for (int i = index; i < Size - 1; i++)
				List[i] = List[i + 1];
			Size--;

			return this;
		}

		catch (exceptie_wrong_index& e)
		{
			cout << "Exceptie: " << e.what() << endl;
		}
	}

	bool operator==(const Array<T>& otherArray)
	{
		bool ok = true;
		List = new T[Capacity];
		for (int i = 0; i < Capacity; i++)
			if (*List[i] != otherArray[i])
				ok = false;
		if (Capacity = otherArray.Capacity && Size = otherArray.Size && ok)
			return true;
		return false;
	}

	void Sort() // sorteaza folosind comparatia intre elementele din T
	{
			for (int i = 0; i < Size - 1; i++)
				for (int j = i + 1; j < Size; j++)
					if (*List[i] > *List[j])
						std::swap(List[i], List[j]);
	}
	int compare(const T& l1, const T& l2)
	{
		return l1 > l2;
	}
	void Sort(int(*compare)(const T&, const T&)) // sorteaza folosind o functie de comparatie
	{
			for (int i = 0; i < Size - 1; i++)
				for (int j = i + 1; j < Size; j++)
					if (compare(List[i], List[j]))
						std::swap(List[i], List[j]);
	}
	void Sort(Compare* comparator) // sorteaza folosind un obiect de comparatie
	{

	}

	// functii de cautare - returneaza pozitia elementului sau -1 daca nu exista
	int BinarySearch(const T& elem) // cauta un element folosind binary search in Array
	{
		for (int i = 0; i < Capacity; i++)
		{
			int mij = Size / 2, st = 0, dr = Size;
			while (st != dr && List[i][mij] != elem)
			{
				if (elem > List[i][mij])
					st = mij + 1;
				else
					dr = mij - 1;
				if (List[i][mij] == elem)
					return mij;
			}
		}
		return -1;
	}
	int BinarySearch(const T& elem, int(*compare)(const T&, const T&)) // cauta un element folosind binary search si o functie de comparatie
	{
		for (int i = 0; i < Capacity; i++)
		{
			int mij = Size / 2, st = 0, dr = Size;
			while (st != dr && List[i][mij] != elem)
			{
				if (compare(elem, List[i][mij]))
					st = mij + 1;
				else
					dr = mij - 1;
			}
			if (List[i][mij] == elem)
				return mij;
		}
		return -1;
	}
	int BinarySearch(const T& elem, Compare* comparator)//  cauta un element folosind binary search si un comparator
	{

	}

	int Find(const T& elem) // cauta un element in Array
	{
		for (int i = 0; i < Capacity; i++)
		{
			if (List[i][Size] > elem)
				for (int j = 0; j <= Size; j++)
				{
					if (List[i][j] > elem)
						return j;
					return -1;
				}
		}
		return -1;
	}
	int Find(const T& elem, int(*compare)(const T&, const T&)) //  cauta un element folosind o functie de comparatie
	{
		for (int i = 0; i < Capacity; i++)
		{
			if (compare(List[i][Size], elem))
				for (int j = 0; j <= Size; j++)
				{
					if (compare(List[i][j], elem))
						return j;
					return -1;
				}
		}
		return -1;
	}
	int Find(const T& elem, Compare* comparator)//  cauta un element folosind un comparator
	{

	}

	int GetSize()
	{
		return Size;
	}
	int GetCapacity()
	{
		return Capacity;
	}

	ArrayIterator<T> GetBeginIterator()
	{
		ArrayIterator i;
		i.
	}
	ArrayIterator<T> GetEndIterator()
	{

	}
	//MyIterator begin() { MyIterator i; i.p = &pairs[0]; return i; }
	//MyIterator end() { MyIterator i; i.p = &pairs[currentIndex]; return i; }
};