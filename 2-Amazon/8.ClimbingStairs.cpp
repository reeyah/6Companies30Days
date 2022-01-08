// Count ways to N'th Stair(Order does not matter)
// https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long countWays(int m)
    {
        // your code here
        return m/2 + 1; 
    }
};

int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
} 