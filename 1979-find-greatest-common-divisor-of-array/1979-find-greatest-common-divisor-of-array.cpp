class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(auto &i:nums){
            mini=min(mini,i);
            maxi=max(maxi,i);
        }
        int res=min(mini,maxi);
        while(res > 0){
            if(mini % res==0 && maxi % res==0) break;
            res--;
        }
        return res;
    }
};