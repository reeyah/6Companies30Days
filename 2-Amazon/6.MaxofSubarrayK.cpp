// Maximum of all subarrays of size k 
// https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
// https://leetcode.com/problems/sliding-window-maximum/submissions/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        int i;
        vector<int>res;
        deque<int>d(k);
        for(i=0; i<k; i++){
        while(!d.empty()&& arr[i]>=arr[d.back()])
            d.pop_back();
        d.push_back(i);
        }
        for(;i<n;i++){
        res.push_back(arr[d.front()]);
        while(!d.empty() && d.front()<= i-k)
            d.pop_front();
        while(!d.empty()&& arr[i]>=arr[d.back()])
            d.pop_back();
        d.push_back(i);
    }
    res.push_back(arr[d.front()]);
    return res;
    }
};

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}