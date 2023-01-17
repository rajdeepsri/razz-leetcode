class Solution {
public:
    bool isMatch(string type, string color, string name, string ruleKey, string ruleValue){
        if(ruleKey == "type" and ruleValue == type) return true;
        if(ruleKey == "color" and ruleValue == color) return true;
        if(ruleKey == "name" and ruleValue == name) return true;
        return false;
    }
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt=0;
        for(auto &s : items){
            if(isMatch(s[0],s[1],s[2], ruleKey, ruleValue)) cnt++;
        }
        return cnt;
    }
};