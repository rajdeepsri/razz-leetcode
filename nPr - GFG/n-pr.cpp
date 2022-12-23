//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    long long fact(long long int n){
        long long int ans=1;
        if(n==0) return 1;
        for(long long int i=1; i<=n; i++){
            ans*=i;
        }
        return ans;
    }
public:
    long long nPr(int N, int R){
        long long int n=N;
        long long int r=R;
        return fact(n)/fact(n-r);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends