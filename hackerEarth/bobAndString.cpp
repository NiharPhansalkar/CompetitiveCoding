#include <bits/stdc++.h>

int main()
{
    int T, counter{0};
    std::string S,T1;

    int arr1[27]{0};
    int arr2[27]{0};

    std::cin >> T;

    while (T--)
    {
        std::cin >> S >> T1;

        for (auto ch : S)
        {
            arr1[(ch+1) - 'a']++;
        }
        for (auto ch : T1)
        {
            arr2[(ch+1) - 'a']++;
        }

        for (int i = 1; i < 27; i++)
        {
            if (arr1[i] != arr2[i])
            {
                if (arr1[i] > arr2[i])
                {
                    counter += arr1[i] - arr2[i];
                }
                else
                {
                    counter += arr2[i] - arr1[i];
                }
            }
        }

        std::cout << counter << std::endl;
        counter = 0;
        
        for (int i{}; i < 27; i++)
        {
            arr1[i] = 0;
            arr2[i] = 0;
        }
    }    
    
    return 0;
}