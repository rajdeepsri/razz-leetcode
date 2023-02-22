//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
     vector<vector<int>>dp;
    int mod=1e9+7;
    int func(int i,int j,int n,int m, vector<vector<int>> &grid)
    {
        if(i>=n || j>=m || i<0 || j<0 || grid[i][j]==0){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        return dp[i][j]= 
       (func(i+1,j,n,m,grid)%mod+func(i,j+1,n,m,grid))%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        return func(0,0,n,m,grid);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends