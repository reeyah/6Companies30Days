// 845. Longest Mountain in Array
// https://leetcode.com/problems/longest-mountain-in-array/

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3) return 0;
        int res=0, up=0, down=0;
        for(int i=1; i<arr.size(); i++){
            if(down && arr[i-1]<arr[i] || arr[i-1]==arr[i]) 
                up = down = 0;
            up+= arr[i-1]<arr[i];
            down+= arr[i]<arr[i-1];
            
            if(up && down) res= max(res, down+up+1);
        }
        return res;
    }
};