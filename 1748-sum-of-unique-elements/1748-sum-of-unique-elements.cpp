class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(m[nums[i]]==1) ans += nums[i];
        }
        return ans;
    }
};