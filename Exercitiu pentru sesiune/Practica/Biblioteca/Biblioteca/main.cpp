#include <iostream>
#include "Biblioteca.h"
#include "carte.h"
#include "revista.h"
#include "roman.h"

int main()
{
	Biblioteca b;
	(b += new roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new revista("Journal of Artificial Intelligence", 100);
	b += new roman("MACBETH", "WILLIAM SHAKESPEARE");
	for (auto x : b)
	{
		std::cout << x->GetInfo() << std::endl;
	}
	std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
	std::cout << "Lista doar cu romane:" << std::endl;
	//b.PrintFilter([](carte* c)->bool {
	//	std::string str = c->GetInfo();
	//std::string s;
	//std::getline(str, s, ' ');
	//if (s == "Roman")
	//	return true;
	//else
	//	return false;
	//	});
	return 0;
}