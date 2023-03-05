class Solution {
public:
    void shiftZero(vector<int>& nums, int n){
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0) nums[j++]=nums[i];
        }
        for(;j<n; j++) nums[j]=0;
    }
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                nums[i+1]=0;
                nums[i] *= 2;
            }
        }
        shiftZero(nums,n);
        return nums;
    }
};