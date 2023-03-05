class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int key = target-nums[i];
            
            int s=i+1, e=n-1;
            int mid = s+(e-s)/2;
            while(s<=e){
                if(nums[mid]==key) return {i+1, mid+1};
                else if(nums[mid]>key) e=mid-1;
                else s=mid+1;
                mid = s+(e-s)/2;
            }
        }
        return {};
    }
};