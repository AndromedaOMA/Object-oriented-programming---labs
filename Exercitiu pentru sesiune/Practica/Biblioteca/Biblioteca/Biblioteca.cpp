#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
	count = 0;
	//carti = nullptr;
}
Biblioteca::~Biblioteca()
{
	for (auto a : carti)
		delete a;
	delete[]carti;
}
carte* Biblioteca::operator+=(carte* a)
{
	if (count < 100)
		this->carti[count++] = a;
}
carte* Biblioteca::begin()
{
	return carti[0];
}
carte* Biblioteca::end()
{
	return carti[count-1];
}
Biblioteca::operator int()
{
	return count;
}
//void PrintFilter();