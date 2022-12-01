class Solution {
private:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') return true;
        return false;
    }
public:
    bool halvesAreAlike(string str) {
        int lcount=0, rcount=0;
        int s=0, e=str.size()-1;
        
        while(s<e){
            if(isVowel(str[s])) lcount++;
            if(isVowel(str[e])) rcount++;
            s++;
            e--;
        }
        return lcount==rcount;
    }
};