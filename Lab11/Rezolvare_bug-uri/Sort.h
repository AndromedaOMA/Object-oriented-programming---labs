#pragma once
#include <iostream>

template <class T>
void Interclasare(T**& list_to_sort, int st, int m, int dr)
{
    T** aux = new T * [2];
    int i = st, j = m + 1, k = 0;
    while (i < m || j < dr)
        if (*list_to_sort[i] > *list_to_sort[j])
            aux[k++] = list_to_sort[i++];
        else
            aux[k++] = list_to_sort[j++];
    while (i <= m)
        aux[k++] = list_to_sort[i++];
    while (j <= dr)
        aux[k++] = list_to_sort[j++];
    for (int i = st; i <= dr; i++)
        list_to_sort[i] = aux[i + st];
}

template <class T>
void MergeSort(T**& list_to_sort, int st, int dr)
{
    if (st < dr)
    {
        int m = (st + dr) / 2;
        MergeSort(list_to_sort, st, m);
        MergeSort(list_to_sort, m + 1, dr);
        Interclasare(list_to_sort, st, m, dr);
    }
}

template <class T>
class MyList {
public:

    T** List = new T * [1000];
    int Size = 0, Capacity = 1000;

    void operator+=(const T& newElem) {
        List[Size] = new T(newElem);
        Size++;
    }

    T& operator[] (int index) const noexcept(false) {
        return *(this->List[index]);
    }

    bool operator == (MyList<T>& list_to_compare)
    {
        if (Size != list_to_compare.Size)
            return false;
        for (int i = 0; i < Size; i++)
            if (*List[i] != *list_to_compare.List[i])
                return false;
        return true;
    }

    template <class T>
    friend void Interclasare(T**& list_to_sort, int st, int m, int dr);

    template <class T>
    friend void MergeSort(T**& list_to_sort, int st, int dr);

    void Sort()
    {
        MergeSort(List, 0, Size - 1);
    }

    void Print()
    {
        for (int i = 0; i < Size; i++)
            std::cout << *List[i] << " ";
        std::cout << std::endl;
    }
};

