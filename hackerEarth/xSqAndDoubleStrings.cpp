#include <iostream>
#include <string>

int main()
{
    int flag = 0;
    int cases{}, index{};
    std::string userString;
    std::cin >> cases;
    
    while (cases--)
    {
        int arr[26]{0};
        std::cin >> userString;
        for (char ch: userString)
        {
            index = ch - 'a';
            arr[index]++;
            if (arr[index] == 2)
            {
                std::cout << "Yes" << std::endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            std::cout << "No" << std::endl;
        }
        flag = 0;
    }
    
    return 0;
}