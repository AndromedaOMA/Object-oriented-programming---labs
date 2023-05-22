#include <iostream>
struct MyString {
	MyString(const char* string)
	{
		std::cout << string;
	}
};
struct Person {
	MyString name,last_name;
	int age;
	Person() : last_name("Waine"), age(25),  name("Bruce"){}
};
int main()
{
	Person Batman;
	return 0;
}