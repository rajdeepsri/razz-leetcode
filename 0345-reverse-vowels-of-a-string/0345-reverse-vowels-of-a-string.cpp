class Solution {
private:
    bool isVowel(char &q){
        if(q=='a' || q=='e' || q=='i' || q=='o' || q=='u' || q=='A' || q=='E' || q=='I' || q=='O' || q=='U') return true;
        return false;
    }
public:
    string reverseVowels(string str) {
        int s=0, e=str.size()-1;
        while(s<e){
            if(!isVowel(str[s])) s++;
            if(!isVowel(str[e])) e--;
            if(isVowel(str[s]) && isVowel(str[e])) swap(str[s++],str[e--]);
        }
        return str;
    }
};