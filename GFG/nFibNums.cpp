#include <bits/stdc++.h>

using std::vector;
using std::cout;
using std::cin;

class Solution
{
    public:
        vector<long long> printFibb (int n)
        {
            vector<long long> myAns;
            long long int sum = 0;
            long long int first = 1, second = 1;

            if (n == 1)
            {
                myAns.push_back(first);
                return myAns;
            }
            if (n == 2)
            {
                myAns.push_back(first);
                myAns.push_back(second);
                return myAns;
            }

            myAns.push_back(first);
            myAns.push_back(second);

            for (int i = 0; i < n-2; i++)
            {
                sum = first + second;
                myAns.push_back(sum);
                first = second;
                second = sum;
            }
            
            return myAns;
        }
};

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        Solution obj;
        vector<long long> ans = obj.printFibb(n);
        for (long long i : ans)
        {
            cout << i << " ";
        }
        cout << std::endl;
    }
    
    return 0;
}