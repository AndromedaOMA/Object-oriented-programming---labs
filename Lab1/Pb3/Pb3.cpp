// Pb3
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    for (int tr = 2; tr < n / sqrt(n); tr++)
        if ((n % tr) == 0)
            return false;
    return true;
}
int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;
    if (isPrime(n))
        std::cout << n << " is prime !";
    else
        std::cout << n << " is NOT prime !";
    return 0;
}