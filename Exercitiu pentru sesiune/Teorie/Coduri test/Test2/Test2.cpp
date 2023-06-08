// Test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << sizeof(int*) + sizeof(char*) + sizeof(long long int*) + sizeof(unsigned char*) << '\n';
    return 0;
}