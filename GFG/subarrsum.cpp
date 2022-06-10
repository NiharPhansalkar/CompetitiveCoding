// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> finalPos;
        int flag = 0;
        long long int sum = 0;
        long long int l = 0;
        long long int r = 0;

        while (l < n && r < n)
        {
            if (flag == 0)
            {
                sum += arr[r];
            }

            if (sum == s)
            {
                finalPos.push_back(l+1);
                finalPos.push_back(r+1);
                return finalPos;
            }
            else if (sum < s)
            {
                r++;
                flag = 0;
            }
            else
            {
                sum -= arr[l];
                flag = 1;
                l++;
            }
        }

        finalPos.push_back(-1);
        return finalPos;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends