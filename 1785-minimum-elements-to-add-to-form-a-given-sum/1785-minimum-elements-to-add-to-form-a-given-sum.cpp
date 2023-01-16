class Solution {
public:
    int minElements(vector<int>& nums, int limit, int g) {
        long long goal = g;
        long long sum=0;
        for(auto &i:nums) sum+=i;
        
        long long reqGoal = abs(sum-goal);
        long long ans = 0;
        if(reqGoal%limit==0) ans = reqGoal/abs(limit);
        else ans = reqGoal/abs(limit) + 1;
        return (int)ans;
    }
};