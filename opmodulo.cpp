#include <bits/stdc++.h>

int opmod(int);

int main(void)
{
    long long L,R;
    int finalSum{0};
    std::cin >> L >> R;     

    for (int i = L; i < R; i++)
    {
        long long funcn1{opmod(i)};
        long long funcn2{opmod(i+1)};

        if (funcn1 == funcn2)
        {
            finalSum = finalSum + i + (i+1);
        }
    }
    std::cout << finalSum;
    
    return 0;
}

int opmod(int findMod)
{
    long long sum{0};
    for (int i{1}; i <= findMod; i++)
    {
        sum += findMod % i;
    }
    return sum;
}