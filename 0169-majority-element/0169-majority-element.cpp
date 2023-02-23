class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto &i:nums) mp[i]++;
        int n=nums.size();
        int cnt=ceil(n/2);
        int ans;
        for(auto i:mp){
            if(i.second > cnt) ans=i.first;
        }
        return ans;
    }
};