class Solution {
public:
    int minIncrementForUnique(vector<int>& arr) {
        int N=arr.size();
        sort(arr.begin(), arr.end());
        
        int ans=0;
        for(int i=0; i<N-1; i++){
            if(arr[i] >= arr[i+1]){
                ans+=arr[i]-arr[i+1]+1;
                arr[i+1]=arr[i]+1;
            }
        }
        return ans;
    }
};