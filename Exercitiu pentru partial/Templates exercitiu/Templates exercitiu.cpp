#include <iostream>

template <typename test>
test maxi(test a, test b)
{
	if (a > b)
		return a;
	return b;
}

int main()
{
	std::cout<<maxi<int>(20, 400);
	std::cout << maxi<char>('a', 'b');
}