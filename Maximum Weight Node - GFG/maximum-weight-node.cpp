//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> edge)
  {
      // code here'
      vector<int>inDig(N,0);
      for(int i=0;i<N;i++){
          if(edge[i]==-1){
              continue;
          }
           inDig[edge[i]]+=i;
     }
      int maxi=INT_MIN;
      int ans=0;
      for(int i=0;i<N;i++){
          if(maxi<inDig[i]){
              maxi=inDig[i];
              ans=i;
          }
          if(maxi==inDig[i]){
              ans=i;
          }
          
      }
      return ans; 
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends