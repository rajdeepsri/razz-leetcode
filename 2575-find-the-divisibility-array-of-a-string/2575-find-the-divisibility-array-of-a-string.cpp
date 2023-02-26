class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> ans;
        long long x=0;
        for(int i=0; i<word.size(); i++){
            x = (x*10 + (word[i]-'0'))%m;
            if(x==0) ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }
};