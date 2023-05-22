#include <iostream>
#include <cassert>
#include "Sort.h"

int main()
{
    MyList<int> v, v1;
    v += 20;
    v += 30;
    v += 10;

    std::cout << "Inainte de sortarea lui v!\n";
    assert(v[0] == 20);
    std::cout << "Prima valoare a lui v e OK!\n";
    assert(v[2] == 10);
    std::cout << "Ultima valoare a lui v e OK!\n";
    std::cout << std::endl;

    v1 += 5;
    v1 += 4;
    v1 += 1;
    v1 += 2;
    v1 += 3;

    std::cout << "Inainte de sortarea lui v1!\n";
    assert(v1[0] == 5);
    std::cout << "Prima valoare a lui v1 e OK!\n";
    assert(v1[4] == 3);
    std::cout << "Ultima valoare a lui v1 e OK!\n";
    std::cout << std::endl;

    v.Sort();

    std::cout << "Dupa de sortarea lui v!\n";
    assert(v[0] == 10);
    std::cout << "Prima valoare a lui v e OK!\n";
    assert(v[2] == 30);
    std::cout << "Ultima valoare a lui v e OK!\n";
    std::cout << std::endl;

    v1.Sort();

    std::cout << "Dupa de sortarea lui v1!\n";
    assert(v1[0] == 1);
    std::cout << "Prima valoare a lui v1 e OK!\n";
    assert(v1[4] == 5);
    std::cout << "Ultima valoare a lui v1 e OK!\n";

    //v.Print();
    //v1.Print();



    return 0;
}

