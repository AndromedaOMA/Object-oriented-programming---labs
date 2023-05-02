#pragma once

template<typename T>
class Node {
public:
	Node* next;
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
class SingleLinkedList{
private:
	Node<T> lista;

	SingleLinkedList* next;
	T value;

public:
	SingleLinkedList()
	{
		this->value = val;
		lista.next = NULL;
	}
	~SingleLinkedList()
	{

	}

	void operator+=(int val)
	{
		Node<T>* newNode = new Node<T>();
		newNode->value = val;
		Node<T>* i = &lista;
		while (i->next != NULL)
			i = i->next;
		i->next = newNode;
	}

	bool operator&&(int val)
	{
		Node<T>* i = &this->lista;
		while (i->next != NULL || i->value != val)
			i = i->next;
		if (i->next == NULL)
			return false;
		return true;
	}

	T pop_first()
	{
		Node<T>* i = &lista;
		return i;
	}

	void print(void (*print)(const double& v))
	{
		Node<T>* i = &this->lista;
		while (i->next != NULL)
		{
			print(i->value);
			i = i->next;
		}
	}

	operator while()
	{
		Node<T>* i = &this->lista;
		while (i->next != NULL)
			return true;
		return false;
	}
};