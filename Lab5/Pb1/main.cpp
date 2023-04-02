#include <iostream>
#include "Number.h"

int main()
{
	Number n1("10110010", 2);	
	Number n2("734", 8);
	Number n3("FF", 16);

	printf("00---------------------------\n\n");
	//--
	printf("n1 has %d digits and it is written in base %d:\n", n1.GetDigitsCount(), n1.GetBase());
	for (int tr = 0; tr < n1.GetDigitsCount(); tr++)
	{
		printf("n1[%d]=%c\n", tr, n1[tr]);
	}

	printf("\n");

	printf("n2 has %d digits and it is written in base %d:\n", n2.GetDigitsCount(), n2.GetBase());
	for (int tr = 0; tr < n2.GetDigitsCount(); tr++)
	{
		printf("n2[%d]=%c\n", tr, n2[tr]);
	}

	printf("\n");

	printf("n3 has %d digits and it is written in base %d:\n", n3.GetDigitsCount(), n3.GetBase());
	for (int tr = 0; tr < n3.GetDigitsCount(); tr++)
	{
		printf("n3[%d]=%c\n", tr, n3[tr]);
	}

	printf("01---------------------------\n\n");
	//--
	n1.Print();
	n2.Print();
	n3.Print();

	printf("02---------------------------\n\n");
	//--
	//test
	n1.SwitchBase(10);
	n1.Print();
	n2.SwitchBase(10);
	n2.Print();
	n3.SwitchBase(10);
	n3.Print();

	printf("03---------------------------\n\n");

	n1 = n2 - n3;
	n1.Print();

	printf("04---------------------------\n\n");

	n1 = (n2 + n3 - n1) + n1; // after this n1 will be in base 16
	n1.SwitchBase(2);
	n1.Print();

	printf("05---------------------------\n\n");
	//--
	if (n1 > n2)
		printf("n1 is bigger than n2\n");
	else
		printf("n2 is bigger than n1\n");

	printf("06---------------------------\n\n");
	//--
	Number n4 = 12345; // n4 will be in base 10
	n4.Print();

	printf("07---------------------------\n\n");
	//--
	n1 = 255; // n1 will be 11111111 (value 255 from base 10 in base 2)
	n4 += n1;
	n4.Print();

	n4 = "13579"; // n4 mentains its base (10) and will be 13579
	n4.Print();

	printf("08---------------------------\n\n");
	//--
	--n4; // the first digit from n4 will be remove ==> n4 becomes 3579
	n4.Print();
	 
	printf("09---------------------------\n\n");
	//--
	n4--; // the last digit from n4 will be remove ==> n4 becomes 357
	n4.Print();
	return 0;
}