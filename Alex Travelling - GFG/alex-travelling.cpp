//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    #define pii pair<int,int>
    int minimumCost(vector<vector<int>>& flights, int n, int k) {
        // code here
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto flight:flights){
            int src=flight[0],des=flight[1],c=flight[2];
            adj[src].push_back({des,c});
        }
        vector<int>dis(n+1,INT_MAX);
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        pq.push({0,k});
        dis[k]=0;
        while(!pq.empty()){
            auto node=pq.top();
            pq.pop();
            int src= node.second, costTillNow=node.first;
            for(auto it:adj[src]){
                int dest=it.first,cost=it.second;
                if(costTillNow+cost<dis[dest]){
                    dis[dest]=costTillNow+cost;
                    pq.push({costTillNow+cost,dest});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(dis[i]==INT_MAX) return -1;            // can't reach this node
            ans=max(ans,dis[i]);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int size;
        cin >> size;
        vector<vector<int>> flights(size,vector<int>(3));
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights[i]=temp;
        }

        Solution ob;
        cout << ob.minimumCost(flights, n, k) << "\n";
    }
}

// } Driver Code Ends