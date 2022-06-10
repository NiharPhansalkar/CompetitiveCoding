#include <bits/stdc++.h>

int main()
{
    int N, K;
    std::cin >> N >> K;
    int *beg, *end;
    int A[N];

    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
    }

    std::sort(A, A + N);

    beg = A;
    end = &A[N-1];

    while (*end > K)
    {
        end--;
    }

    while (beg < end)
    {
        if (*beg + *end == K)
        {
            std::cout << "YES" << std::endl;
            exit(0);
        }
        else if (*beg + *end < K)
        {
            beg++;
        }
        else
        {
            end--;
        }
    }
    std::cout << "NO" << std::endl;
    
    return 0;
}