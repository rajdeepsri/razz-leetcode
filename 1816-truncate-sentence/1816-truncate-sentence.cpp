class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        stringstream ss(s);
        int n = k;
        string word;
        while(ss >> word && n>0){
            if(n==k) ans += word;
            else ans += " " + word;
            n--;
        }
        return ans;
    }
};