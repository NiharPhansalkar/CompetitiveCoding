#include <bits/stdc++.h>

/*
Constraints

n -> 10^7 (Arr size)
m -> 2 x 10^5 (Queries)
a,b -> n (Left and right indices)
k -> 10^9 (Value to be added)
*/

// Brute force method
/*const long int N = 1e7 + 10;
long long int arr[N]; 

int main()
{
    int n{}, m{};
    std::cin >> n >> m;
    
    while (m--)
    {
        int a{}, b{}, k{};
        std::cin >> a >> b >> k;
        for (int i = a; i <= b; i++)
        {
            arr[i] += k;
        }
    }

    long long int max{-1};

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    std::cout << max;
    
    return 0;
}

Time complexity = O(m * n + n) = O(m * n) = 10^12
*/

// Optimised method

const long int N = 1e7 + 10;
long long int arr[N];

int main()
{
    int n{}, m{};
    std::cin >> n >> m;
    
    while (m--)
    {
        int a{}, b{}, k{};
        std::cin >> a >> b >> k;
        arr[a] += k;
        arr[b+1] -= k;
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i-1];
    }

    long long int max{-1};

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    std::cout << max;
    
    return 0;
}