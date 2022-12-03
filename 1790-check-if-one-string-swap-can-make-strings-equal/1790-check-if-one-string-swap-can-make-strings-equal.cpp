class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        //edge cases
        if(s1==s2) return true;
        if(s1.size()!=s2.size()) return false;
        
        //checking if only 2 char are different
        int count=0;
        int a=0,b=0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i]!=s2[i]){
                count++;
                if(count==1) a=i;
                if(count==2) b=i;
                if(count>2) return false;
            }
        }
        swap(s1[a],s1[b]);
        return s1==s2;
    }
};