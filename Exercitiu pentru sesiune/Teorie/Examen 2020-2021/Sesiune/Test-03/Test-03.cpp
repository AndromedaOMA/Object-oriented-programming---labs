#include <iostream>

struct MyString {
	MyString(const char* string)
	{
		std::cout << string << ' ';
	}
};
struct Number {
	Number(int val)
	{
		std::cout << val << ' ';
	}
};
struct Person {
	MyString  name;
	Number age;
	MyString last_name;
	Person() : age(25), last_name("Wayne"), name("Bruce") {}
};
int main()
{
	Person p;
	return 0;
}