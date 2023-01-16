class Solution {
public:
    int numberOfMatches(int n) {
        // int k =0;
        // while(n!= 1)
        // {
        //     if(n%2==0){
        //         n = n/2;
        //         k = k + n;
        //     }else{
        //         n = (n-1)/2;
        //         k = k + n;
        //         n = n+1;
        //     }
        // }
        // return k;
        //simple
        return n-1;
    }
};