class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        if(s1.size()!=s2.size()) return false;
        
        unordered_map<char,int> mp;
        for(char c:s1){
            mp[c]++;
        }
        for(char c:s2){
            mp[c]--;
        }
        for(auto i:mp){
            if(i.second != 0) return false;
        }
        
        int count=0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i]!=s2[i]) count++; 
        }
        if(count==2) return true;
        return false;
    }
};