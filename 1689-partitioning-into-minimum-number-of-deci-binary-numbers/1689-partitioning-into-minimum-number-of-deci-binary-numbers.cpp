class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = 0;
        for(char &c : n){
            if(c - '0' > maxDigit) maxDigit = c - '0';
        }
        return maxDigit;
    }
};