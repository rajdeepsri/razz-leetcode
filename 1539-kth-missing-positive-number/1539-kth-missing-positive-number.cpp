class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        
        int cnt=0;
        int x=0;
        for(int i=1; i<INT_MAX; i++){
            if(x<n && arr[x] == i) x++;
            else cnt++;
            
            if(cnt==k) return i;
        }
        return -1;
    }
};