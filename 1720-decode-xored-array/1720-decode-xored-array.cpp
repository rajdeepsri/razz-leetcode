class Solution {
public:
    vector<int> decode(vector<int>& enc, int first) {
        int n = enc.size();
        vector<int> ans(n+1);
        ans[0]=first;
        
        for(int i=0; i<n; i++) ans[i+1] = enc[i]^ans[i];
        return ans;
    }
};