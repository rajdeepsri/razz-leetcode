//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution

{

  public:

  long long ans=-1;

  

  void solve(vector<int> &Edge,int i,long long sum,vector<bool> &visit,vector<long long> &inc)

  {

      if(inc[i]>-1)

      {

          ans=max(ans,sum-inc[i]+i);

          return;

      }

      

      if(visit[i]==true)

        return;

        

      visit[i]=true;

      inc[i]=sum+i;

      

      if(Edge[i]!=-1)

        solve(Edge,Edge[i],sum+i,visit,inc);

        

      inc[i]=-1;

  }

  

  long long largestSumCycle(int N, vector<int> Edge)

  {

        vector<bool> visit(N,false);

        vector<long long> inc(N,-1);

        

        for(int i=0;i<N;i++)

        {

            if(visit[i]==false)

                solve(Edge,i,0,visit,inc);

        }

        return ans;

  }

};

//{ Driver Code Starts.
signed main(){
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
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends