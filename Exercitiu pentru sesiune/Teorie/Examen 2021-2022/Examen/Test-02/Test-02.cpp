#include <iostream>

class cat {
public:
	cat() { std::cout << "CAT "; }
	~cat() { std::cout << "~CAT "; }
};
class dog {
public:
	dog() { std::cout << "DOG "; }
	~dog() { std::cout << "~DOG "; }
};
class hamster {
public:
	hamster() { std::cout << "HAMSTER "; }
	~hamster() { std::cout << "~HAMSTER "; }
};
class zoo {
	cat c;
	dog d1, d2;
	hamster h;
public:
	zoo() { std::cout << "zoo "; }
	~zoo() { std::cout << "~zoo "; }
};
int main()
{
	zoo z;
	return 0;
}