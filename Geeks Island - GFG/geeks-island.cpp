//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

#define fi first
#define se second
class Solution{   
public:
    int water_flow(vector<vector<int>> &mat,int p,int q1){
        int n=mat.size();
        int m=mat[0].size();
   vector<vector<int>>vis(n,vector<int>(m)),vis1(n,vector<int>(m));
   queue<pair<int,int>>q;
   
   for(int i=0;i<m;i++){
       q.push({0,i});
       vis[0][i]=1;
   }
   for(int i=0;i<n;i++){
       q.push({i,0});
       vis[i][0]=1;
   }
   
   int dx[]={-1,0,1,0};
   int dy[]={0,1,0,-1};
   while(!q.empty()){
       int curx=q.front().fi;
       int cury=q.front().se;
       q.pop();
       for(int i=0;i<4;i++){
           int newx=curx+dx[i];
           int newy=cury+dy[i];
           if(newx>=0&&newy>=0&&newx<n&&newy<m&&!vis[newx][newy]&&mat[newx][newy]>=mat[curx][cury]){
               vis[newx][newy]=1;
               q.push({newx,newy});
           }
       }
   }
   
   for(int i=0;i<m;i++){
       q.push({n-1,i});
       vis1[n-1][i]=1;
   }
   for(int i=0;i<n;i++){
       q.push({i,m-1});
       vis1[i][m-1]=1;
   }
   
   while(!q.empty()){
       int curx=q.front().fi;
       int cury=q.front().se;
       q.pop();
       for(int i=0;i<4;i++){
           int newx=curx+dx[i];
           int newy=cury+dy[i];
           if(newx>=0&&newy>=0&&newx<n&&newy<m&&!vis1[newx][newy]&&mat[newx][newy]>=mat[curx][cury]){
               vis1[newx][newy]=1;
               q.push({newx,newy});
           }
       }
   }
   
   int cnt=0;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(vis[i][j]&&vis1[i][j])cnt++;
       }
   }
   return cnt;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends