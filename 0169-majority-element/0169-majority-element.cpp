class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1, maj=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==maj) cnt++;
            else if(cnt==0){
                maj=nums[i];
                cnt=1;
            }
            else cnt--;
        }
        return maj;
    }
};