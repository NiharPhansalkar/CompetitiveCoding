#include <iostream>

long long int nthFibonacci(long long int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return nthFibonacci(n-1) + nthFibonacci (n-2);
}

int main()
{
    long long int n;
    std::cin >> n;

    std::cout << nthFibonacci(n);
    
    return 0;
}