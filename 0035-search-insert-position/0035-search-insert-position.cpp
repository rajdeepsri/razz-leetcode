class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s=0, e=n-1;
        int mid = s + (e-s)/2;
        int idx = -1;
        while(s<=e){
            if(nums[mid]==target) return mid;
            else if(nums[mid] > target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid = s + (e-s)/2;
        }
        return mid;
    }
};