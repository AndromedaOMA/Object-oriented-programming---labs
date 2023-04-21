#pragma once

template<typename T>
class Node {
public:
	Node* next;
	T value;
	Node(T val)
	{
		this->next = NULL;
		this->value = val;
	}
};

template<typename T>
class SingleLinkedList {
private:
	Node<T>* lista;
public:
	SingleLinkedList()
	{
		lista = NULL;
	}
	~SingleLinkedList()
	{
		Node<T>* i = lista;
		while (i != NULL)
		{
			Node<T>* currentNode = i;
			i = i->next;
			delete currentNode;
		}
	}

	SingleLinkedList<T>& operator+=(T val)
	{
		Node<T>* newNode = new Node<T>(val);
		Node<T>* i = lista;
		if (lista == NULL)
		{
			lista = newNode;
			return *this;
		}
		while (i->next != NULL)
			i = i->next;
		i->next = newNode;
		return *this;
	}

	bool operator&&(T val)
	{
		Node<T>* i = this->lista;
		while (i != NULL && i->value != val)
			i = i->next;
		if (i == NULL)
			return false;
		return true;
	}

	T pop_first()
	{
		T aux= lista->value;
		Node<T>* auxDelete= lista;
		lista = lista->next;
		delete auxDelete;
		return aux;
	}

	void print(void (*print)(const T& value))
	{
		Node<T>* i = this->lista;
		while (i != NULL)
		{
			print(i->value);
			i = i->next;
		}
	}

	operator bool()
	{
		return lista;
	}
};