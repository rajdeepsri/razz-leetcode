class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        // Your code here
       int idx=0;
        int n = arr.size();
       for(int i=0; i<n-1; i++){
           if(arr[i]<arr[i+1]) idx = i+ 1;
       }
       return idx;
    }
};