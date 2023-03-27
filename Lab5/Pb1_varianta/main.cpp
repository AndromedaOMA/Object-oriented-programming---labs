#include <iostream>
#include "Number.h"

int main()
{
    //printf("\n00---------------------------\n");
    std::cout << "\n00---------------------------\n";

    Number n1("10110010", 2);
    Number n2("734", 8);
    Number n3("FF", 16);

    //printf("n1 has %d digits and it is written in base %d:\n", n1.GetDigitsCount(), n1.GetBase());
    std::cout << "n1 has " << n1.GetDigitsCount() << " digits and it is written in base " << n1.GetBase() << ":\n";
    for (int tr = 0; tr < n1.GetDigitsCount(); tr++)
    {
        //printf("n1[%d]=%c\n", tr, n1[tr]);
        std::cout << "n1[" << tr << "]=" << n1[tr] << '\n';
    }

    //printf("\n01---------------------------\n");
    std::cout << "\n01---------------------------\n";

    //printf("n2 has %d digits and it is written in base %d:\n", n2.GetDigitsCount(), n2.GetBase());
    std::cout << "n2 has " << n2.GetDigitsCount() << " digits and it is written in base " << n2.GetBase() << ":\n";
    for (int tr = 0; tr < n2.GetDigitsCount(); tr++)
    {
        //printf("n2[%d]=%c\n", tr, n2[tr]);
        std::cout << "n2[" << tr << "]=" << n2[tr] << '\n';
    }

    //printf("\n02---------------------------\n");
    std::cout << "\n02---------------------------\n";

    //printf("n3 has %d digits and it is written in base %d:\n", n3.GetDigitsCount(), n3.GetBase());
    std::cout << "n3 has " << n3.GetDigitsCount() << " digits and it is written in base " << n3.GetBase() << ":\n";
    for (int tr = 0; tr < n3.GetDigitsCount(); tr++)
    {
        //printf("n3[%d]=%c\n", tr, n3[tr]);
        std::cout << "n3[" << tr << "]=" << n3[tr] << '\n';
    }

    //printf("\n03---------------------------\n");
    std::cout << "\n03---------------------------\n";

    n1.Print();
    n2.Print();
    n3.Print();

    //("\n04---------------------------\n");
    std::cout << "\n04---------------------------\n";

    //test
    n1.SwitchBase(10);
    n1.Print();
    n2.SwitchBase(10);
    n2.Print();
    n3.SwitchBase(10);
    n3.Print();

    //printf("\n05---------------------------\n");
    std::cout << "\n05---------------------------\n";

    n1 = n2 - n3;
    n1.Print();

    //printf("\n06---------------------------\n");
    std::cout << "\n06---------------------------\n";

    n1 = (n2 + n3 - n1) + n1; // after this n1 will be in base 16
    n1.SwitchBase(2);
    n1.Print();

    //printf("\n07---------------------------\n");
    std::cout << "\n07---------------------------\n";

    if (n1 > n2)
    {
        //printf("n1 is bigger than n2\n");
        std::cout << "n1 is bigger than n2\n";
    }
    else
    {
        //printf("n2 is bigger than n1\n");
        std::cout << "n1 is bigger (or equal) than n2\n";
    }

    //printf("\n08---------------------------\n");
    std::cout << "\n08---------------------------\n";

    Number n4 = 12345; // n4 will be in base 10
    n4.Print();

    //printf("\n09---------------------------\n");
    std::cout << "\n09---------------------------\n";


    n1 = 255; // n1 will be 11111111 (value 255 from base 10 in base 2)
    //test
    n4.SwitchBase(8);

    n4 += n1;
    n4.Print();

    n4 = "13579"; // n4 mentains its base (10) and will be 13579
    n4.Print();

    --n4; // the first digit from n4 will be remove ==> n4 becomes 3579
    n4.Print();

    n4--; // the last digit from n4 will be remove ==> n4 becomes 357
    n4.Print();

    fflush(stdout);

    return 0;
}
