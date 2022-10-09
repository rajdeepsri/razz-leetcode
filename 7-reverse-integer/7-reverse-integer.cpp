class Solution {
public:
    int reverse(int n) {
        int x=n;
        int rev=0;
        while(x!=0){
            int digit = x%10;
            x=x/10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            rev=rev*10+digit;
        }
        return rev;
    }
};