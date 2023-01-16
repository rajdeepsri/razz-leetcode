class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> v = nums;
        int n = nums.size();
        
        sort(v.begin(), v.end());
        
        for(int i=n-1; i>=0; i--) mp[v[i]]=i;
        for(int i=0; i<n; i++) nums[i]=mp[nums[i]];
        return nums;
    }
    
};