class Solution {
public:
    string replaceWords(vector<string>& dic, string s) {
        unordered_map<string, bool> mp;
        string ans=""; 
        for(string &s:dic) mp[s]=true;
        
        string temp="";
        istringstream words(s);
        while(words >> temp){
            if(ans.size()!=0) ans += " "; 
            string curr="";
            for(char &c:temp){
                curr += c;
                if(mp[curr]){
                    ans += curr;
                    break;
                }
            }
            if(!mp[curr]) ans += curr;
        }
        return ans;
    }
};