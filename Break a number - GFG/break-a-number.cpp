//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int waysToBreakNumber(int N){
        // code here 
        // if we observe the pattern for a few numbers, we can form a mathematical function to
        // solve the problem.
        // N = 2:
            // numbers that can be used: 0, 1, 2
            // on fixing 0 at first place, we can observe that there are 3 combinations
            // on fixing 1 at first place, we can observe that there are 2 combinations
            // on fixing 2 at first place, we can observe that there are 1 combinations
            // total ways : 3 + 2 + 1 : 6
        
        // N = 3:
            // numbers that can be used: 0, 1, 2, 3
            // on fixing 0 at first place, we can observe that there are 4 combinations
            // on fixing 1 at first place, we can observe that there are 3 combinations
            // on fixing 2 at first place, we can observe that there are 2 combinations
            // on fixing 3 at first place, we can observe that there are 1 combinations
            // total ways : 4 + 3 + 2 + 1 : 10
        
        // If you observe, it is just the summation of numbers from (n+1)+(n)+(n-1)+...+(1): (n+1)(n+2)/2
        long long mod_val = 1e9 + 7;
        int ans = (((long long)(N + 1) * (long long)(N + 2))/2) % mod_val;
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.waysToBreakNumber(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends