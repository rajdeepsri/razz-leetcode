class Solution {
public:
    int solve(int n){
        int sum=0;
        while(n%2==0){
            sum += 2;
            n/=2;
        }
        
        for(int i=3; i<=sqrt(n); i=i+2){
            while(n%i==0){
                sum+=i;
                n/=i;
            }
        }
        
        if(n>2) sum+=n;
        return sum;
    }
    
    int smallestValue(int n) {
        int x = INT_MAX;
        while(x != solve(n)){
            x=solve(n);
            n=x;
        }
        return x;
    }
};