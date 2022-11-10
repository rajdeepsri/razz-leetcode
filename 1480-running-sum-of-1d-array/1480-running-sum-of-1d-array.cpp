class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            nums[i] = nums[i] + ans;
            ans=nums[i];
        }
        return nums;
    }
};