// First non-repeating character in a stream
// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char>q;
		    string s;
		    vector<int>v(26,0);
		    for(int i=0; i<A.length();i++){
		        v[A[i]-'a']++;
		        if(v[A[i]-'a']==1)
		            q.push(A[i]);
		        while(!q.empty() && v[q.front()-'a']!=1)
		            q.pop();
		        if(q.empty())
		            s+='#';
		        else s+=q.front();
		    }
		    return s;
		}

};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}