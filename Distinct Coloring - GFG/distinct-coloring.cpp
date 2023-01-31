//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    # define ll long long int
    vector<vector<ll>> dp;
    ll helper(int i,int prevColor,int n,int r[], int g[], int b[]){
        if(i==n) return 0;
        if(dp[i][prevColor]!=-1) 
        return dp[i][prevColor];
        ll redCost,blueCost,greenCost;
        redCost=blueCost=greenCost=1e18;
        if(prevColor!=1) 
        redCost=r[i]+helper(i+1,1,n,r,g,b);
        if(prevColor!=2) 
        blueCost=b[i]+helper(i+1,2,n,r,g,b);
        if(prevColor!=3) 
        greenCost=g[i]+helper(i+1,3,n,r,g,b);
        return dp[i][prevColor]=min(redCost,min(greenCost,blueCost));
    }
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        // code here 
        dp.resize(N,vector<ll>(4,-1));
        return helper(0,0,N,r,g,b);
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
        int r[N],g[N],b[N];
        for(int i = 0; i < N; i++)
            cin >> r[i];
        for(int i = 0; i < N; i++)
            cin >> g[i];
        for(int i = 0; i < N; i++)
            cin >> b[i];
        
        Solution ob;
        cout << ob.distinctColoring(N, r, g, b) << endl;
    }
    return 0; 
}
// } Driver Code Ends