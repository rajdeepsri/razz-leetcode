class Solution {
public:
    void rev(string &s){
        int i=0,j=s.size()-1;
        while(i<j){
            swap(s[i++],s[j--]);
        }
    }
    
    string reverseWords(string s) {
        string ans="";
        stringstream ss(s);
        string word="";
        
        while(ss>>word){
            rev(word);
            ans += word;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};