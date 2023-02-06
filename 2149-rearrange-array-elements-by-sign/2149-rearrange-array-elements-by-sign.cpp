class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> plus;
        vector<int> minus;
        
        int n=nums.size();
        
        //first we'll push positive
        for(int i=0; i<n; i++){
            if(nums[i]>0) plus.push_back(nums[i]);
        }
        
        //now negative
        for(int i=0; i<n; i++){
            if(nums[i]<0) minus.push_back(nums[i]);
        }
        
        int i=0,j=0;
        int k=0;
        while(k<n && i!=plus.size() && j!=minus.size()){
            nums[k++] = plus[i++];
            nums[k++] = minus[j++];
        }
        return nums;
    }
};