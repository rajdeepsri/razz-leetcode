class Solution {
public:
    string defangIPaddr(string address) {
        string temp="";
        for(char c:address){
            if(c=='.'){
                temp += "[.]";
            }
            else{
                temp += c;
            }
        }
        return temp;
    }
};