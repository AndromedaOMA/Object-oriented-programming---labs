#include<iostream>
#include <typeinfo>

using namespace std;

void printDouble(const double& v) {
    std::cout << v << ",";
}

void copy(char* src, const char* dst)
{
    while (*dst)
    {
        *src++ = *dst++;
    }
    *src = 0;
}

int strlenght(char* sir)
{
    int i = 0;
    while (sir[i] != '\0')
        i++;
    return i;
}

template<typename T>
class Node{
public:
    Node* next, *previous;
    T value;
    Node()
    {

    }
    Node(T val)
    {
        this->value = val;
    }
};

template<typename T>
class DoubleLinkedList{
public:
   
    Node<T> lista;

    DoubleLinkedList()
    {
        lista.previous = NULL;
        lista.next = NULL;
    }
    void PushOnFront(T val)
    {
        Node<T>* newNode = new Node<T>();
        newNode->value = val;
        Node<T>* i = &lista;
        while (i->previous != NULL)
            i = i->previous;
        i->previous = newNode;
    }
    void PushOnBack(T val)
    {
        Node<T>* newNode = new Node<T>();
        newNode->value = val;
        
        Node<T>* i = &this->lista;

        while (i->next!= NULL)
            i = i->next;
        i->next = newNode;
    }
    void PrintAll(void (*print)(const double&v))
    {
        Node<T> * i = &this->lista;
        while (i->previous != NULL)
        {
            print(i->value);
            i = i->previous;
        }
    }

};

int main()
{
    DoubleLinkedList<double> d;
    d.PushOnFront(1.5); d.PrintAll(printDouble);
    d.PushOnFront(2.5); d.PushOnBack(3.5); d.PrintAll(printDouble);
    /*
    while (d.GetCount()) {
        std::cout << d.PopFromBack() << ",";
    }
    std::cout << std::endl;
    DoubleLinkedList<int> i;
    for (int index = 0; index < 10; index++) {
        if (index % 2 == 0)
            i.PushOnBack(index);
        else
            i.PushOnFront(index);
    }
    i.PrintAll(printInt);
    return 0;
}
*/
}