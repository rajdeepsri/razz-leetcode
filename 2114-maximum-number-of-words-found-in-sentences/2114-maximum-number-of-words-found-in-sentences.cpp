class Solution {
public:
    int maxWords(string &s){
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ') cnt++;
        }
        return cnt;
    }
    int mostWordsFound(vector<string>& sen) {
        int cnt=0;
        for(auto &s : sen){
            int temp = maxWords(s);
            cnt = max(cnt,temp);
        }
        return cnt+1;
    }
};