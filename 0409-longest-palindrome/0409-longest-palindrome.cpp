class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
            if(mp[s[i]]%2==0) {
                ans += mp[s[i]];
                mp[s[i]] = 0;
            }
        }
        for(auto x: mp) {
            if(x.second==1) {
              ans++;
              break;
            }  
        }
        return ans;
    }
};