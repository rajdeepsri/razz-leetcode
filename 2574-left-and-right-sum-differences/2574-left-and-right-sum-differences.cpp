class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n);
        vector<int> r(n);
        vector<int> ans(n);
        
        int sum=0;
        for(int i=0; i<n; i++){
            l[i]=sum;
            sum += nums[i];
        }
        sum=0;
        for(int i=n-1; i>=0; i--){
            r[i]=sum;
            sum += nums[i];
        }
        for(int i=0; i<n; i++) ans[i] = abs(l[i]-r[i]);
        return ans;
    }
};