class Solution {
public:
    int numJewelsInStones(string j, string st) {
        unordered_set<char> s;
        for(char &c : j) s.insert(c);
        
        int res=0;
        for(char &c : st){
            if(s.count(c)) res++;
        }
        return res;
    }
};