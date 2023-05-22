#include <iostream>
#include <cassert>
#include "Sort.h"

int main()
{
    MyList<int> v, v1;
    v += 20;
    v += 30;
    v += 10;

    v1 += 5;
    v1 += 4;
    v1 += 1;
    v1 += 2;
    v1 += 3;

    v.Sort();
    v.Print();
    v1.Print();



    return 0;
}

