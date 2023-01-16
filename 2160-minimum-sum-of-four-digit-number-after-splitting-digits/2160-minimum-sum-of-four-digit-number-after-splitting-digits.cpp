class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits(4);
        int i=0;
        while(num!=0){
            digits[i] = num%10;
            num=num/10;
            i++;
        }
        sort(digits.begin(), digits.end());
        return (digits[0]*10 + digits[2]) + (digits[1]*10 + digits[3]);
    }
};