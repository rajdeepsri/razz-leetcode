class Solution {
public:
    vector<int> minOperations(string s) {
        int n = s.size();
        vector<int> ans(n);
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(s[j]=='1') ans[i] += abs(i-j);
            }
        }
        return ans;
    }
};