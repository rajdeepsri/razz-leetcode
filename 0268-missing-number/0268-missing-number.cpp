class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        
        int ans=0;
        
        for(int i=0; i<=n; i++){
            if(i!=n) ans ^= i^nums[i];
            else ans ^= i;
        }
        return ans;
    }
};