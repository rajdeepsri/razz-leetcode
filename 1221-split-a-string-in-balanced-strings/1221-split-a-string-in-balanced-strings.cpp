class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int temp=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='L') temp++;
            else temp--;
            if(temp==0) ans++;
        }
        return ans;
    }
};