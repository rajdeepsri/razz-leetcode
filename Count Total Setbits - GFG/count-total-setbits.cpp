//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int countBitsUtil(int n) {
        int bits = 0;
        int powerOfTwo = 1;
        while (powerOfTwo <= n) {
            int pairsOfOnes = (n + 1) / (powerOfTwo * 2) * powerOfTwo;
            int extraOnes = max(0, (n + 1) % (powerOfTwo * 2) - powerOfTwo);
            bits += pairsOfOnes + extraOnes;
            powerOfTwo <<= 1;
        }
        return bits;
    }

    long long countBits(long long N) {
        return countBitsUtil(N);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends