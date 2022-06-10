#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

bool containsDuplicate(vector<int>& nums) {
    long int hash[N]{0};
    
    for (int i = 0; i < nums.size(); i++)
    {
        hash[nums.at(i)]++;
    }
    
    for (int i = 0; i < 5; i++)
    {
        if(hash[i] > 1)
        {
            return "true";
        }
    }
    return "false";
}

int main()
{
    vector<int> nums;
    int t{}, input;

    cin >> t;
    for (int i{}; i < t; i++)
    {
        cin >> input;
        nums.push_back(input);
    }
    cout << containsDuplicate(nums) << endl;
}