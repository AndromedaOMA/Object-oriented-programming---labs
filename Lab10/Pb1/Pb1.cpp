#include <exception>
using namespace std;

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
};


template<class T>
class ArrayIterator {
private:
	int Current, Dim;
	T** List;

public:
	ArrayIterator(T** list, int current, int dim) :List(list), Current(current), Dim(dim) {}
	ArrayIterator& operator++()
	{
		if (Current == Dim)
			throw "Eroare: Iteratorul a depasit dimensiunea listei!";
		++Current;
		return *this;
	}
	ArrayIterator& operator--()
	{
		if (Current == 0)
			throw "Eroare: Iteratorul a depasit dimensiunea listei!";
		--Current;
		return *this;
	}
	bool operator==(ArrayIterator<T>& otherArray)
	{
		return Current == otherArray.Current && List == otherArray.List && Dim == otherArray.Dim;
	}
	bool operator!=(ArrayIterator<T>& otherArray)
	{
		return *this != otherArray;
	}
	T* GetElement()
	{
		return this->List[current];
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
			if (List[i] != nullptr)
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
				List[i] = nullptr;
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
			List[i] = otherArray[i];
	}

	T& operator[] (int index) // arunca exceptie daca index este out of range
	{
		try {
			if (index < 0 || index>Size)
				throw exceptie_out_of_range();
			if (List[index] != nullptr)
				return *this->List[index];
			else
				throw "Error: elementul curent e nullptr! ..."
		}

		catch (exceptie_out_of_range& e)
		{
			cout << "Exceptie: " << e.what() << endl;
		}
	}

	const Array<T>& operator+=(const T& newElem) // adauga un element de tipul T la sfarsitul listei si returneaza this
	{
		if (Size == Capacity)
			DoubleSize();
		this->List[++Size] = &newElem;
		return this;
	}
	void DoubleSize()
	{
		Capacity *= 2;
		T** Aux = new T[Capacity];
		for (int i = 0; i < Size; i++)
			Aux[i] = List[i];
		delete[]List;
		List = Aux;
	}
	const Array<T>& Insert(int index, const T& newElem) // adauga un element pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
	{
		try {
			if (index < 0 || index >= Size)
				throw exceptie_wrong_index();

			if (Size == Capacity)
				DoubleSize();

			for (int i = index + 1; i < Size; i++)
				List[i] = List[i - 1];
			List[index] = *newElem;

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

			while (Size + otherArray.Size >= Capacity)
				DoubleSize();

			for (int i = index; i < Size; i++)
				List[i + otherArray.Size] = List[i];
			for (int i = index; i < otherArray.Size; i++)
				List[i] = otherArray.List[i];

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

			delete List[index];
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
		for (int i = 0; i < Size - 1; i++)
			for (int j = i + 1; j < Size; j++)
				if (comparator->CompareElements(List[i], List[j]))
					std::swap(List[i], List[j]);
	}



	// functii de cautare - returneaza pozitia elementului sau -1 daca nu exista
	int BinarySearch(const T& elem) // cauta un element folosind binary search in Array
	{
		int mij, st = 0, dr = Size;
		while (st != dr && *List[mij] != elem)
		{
			mij = (st + dr) / 2;
			if (elem > *List[mij])
				st = mij + 1;
			else
				dr = mij - 1;
			if (*List[mij] == elem)
				return mij;
		}
		return -1;
	}
	int BinarySearch(const T& elem, int(*compare)(const T&, const T&)) // cauta un element folosind binary search si o functie de comparatie
	{
		int mij, st = 0, dr = Size;
		while (st != dr && *List[mij] != elem)
		{
			mij = (st + dr) / 2;
			if (compare(elem, *List[mij]))
				st = mij + 1;
			else
				dr = mij - 1;
			if (*List[mij] == elem)
				return mij;
		}
		return -1;
	}
	int BinarySearch(const T& elem, Compare* comparator)//  cauta un element folosind binary search si un comparator
	{
		int mij, st = 0, dr = Size;
		while (st != dr && *List[mij] != elem)
		{
			mij = (st + dr) / 2;
			if (comparator->CompareElements(elem, *List[mij]))
				st = mij + 1;
			else
				dr = mij - 1;
			if (*List[mij] == elem)
				return mij;
		}
		return -1;
	}


	int Find(const T& elem) // cauta un element in Array
	{
		for (int j = 0; j < Size; j++)
			if (*List[j] == elem)
				return j;
		return -1;
	}
	int Find(const T& elem, int(*compare)(const T&, const T&)) //  cauta un element folosind o functie de comparatie
	{
		for (int j = 0; j < Size; j++)
			if (compare(*List[j], elem))
				return j;
		return -1;
	}
	int Find(const T& elem, Compare* comparator)//  cauta un element folosind un comparator
	{
		for (int j = 0; j < Size; j++)
			if (comparator->CompareElements(*List[j], elem))
				return j;
		return -1;
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
		ArrayIterator<T> i(List, 0, Size);
		return i;
	}
	ArrayIterator<T> GetEndIterator()
	{
		ArrayIterator<T> i(List, Size, Size);
		return i;
	}
	//MyIterator begin() { MyIterator i; i.p = &pairs[0]; return i; }
	//MyIterator end() { MyIterator i; i.p = &pairs[currentIndex]; return i; }
};