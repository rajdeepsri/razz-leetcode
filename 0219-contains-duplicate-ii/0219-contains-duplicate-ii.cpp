class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> v(n);
        
        for(int i=0; i<n; i++){
            v[i].first=nums[i];
            v[i].second=i;
        }
        
        sort(v.begin(), v.end());
        for(int i=0; i<n-1; i++){
            if(v[i].first==v[i+1].first && abs(v[i].second-v[i+1].second)<=k) return true;
        }
        return false;
    }
};