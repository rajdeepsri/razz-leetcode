class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1="";
        for(auto i:word1){
            ans1 += i;
        }
        
        string ans2="";
        for(auto i:word2){
            ans2 += i;
        }
        if(ans1==ans2) return true;
        return false;
    }
};