//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
     vector<vector<int>> c;
     int n;
     int dp[100001][3];
     int fun(int i,int j){
         if(i==n)return 0;
         if(dp[i][j]!=-1)return dp[i][j];
         int t1=INT_MAX;
         if(j==0){
             return dp[i][j]=min(c[i][1]+fun(i+1,1),c[i][2]+fun(i+1,2));
         }
         else if(j==1){
             return dp[i][j]=min(c[i][0]+fun(i+1,0),c[i][2]+fun(i+1,2));
         }
         else{
             return dp[i][j]=min(c[i][1]+fun(i+1,1),c[i][0]+fun(i+1,0));
         }
     }
    int minCost(vector<vector<int>> &colors, int N) {
        c=colors;
        n=N;
        memset(dp,-1,sizeof(dp));
        return min({c[0][0]+fun(1,0),c[0][1]+fun(1,1),c[0][2]+fun(1,2)});
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends