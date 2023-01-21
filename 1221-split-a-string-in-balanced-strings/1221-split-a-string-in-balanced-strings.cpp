class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int temp=0;
        if(s[0]=='L') temp++;
        else temp--;
        for(int i=1; i<s.size(); i++){
            if(s[i]=='L') temp++;
            else temp--;
            if(temp==0) ans++;
        }
        return ans;
    }
};