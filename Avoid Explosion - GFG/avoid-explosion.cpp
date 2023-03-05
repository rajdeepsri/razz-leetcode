//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int>parent;
    int find(int node){
        if(parent[node]==node)
        return node;
        return parent[node]=find(parent[node]);
    }

 

void Union(int x,int y){
    x=find(x);
    y=find(y);
    if(x!=y) parent[x]=y;
}

vector<string> avoidExplosion(vector<vector<int>> mix, int n, vector<vector<int>> danger, int m) {
        vector<string>ans;
        parent=vector<int>(n+1);
        for(int i=0;i<n;i++)            {
            parent[i]=i;
        }
        for(int i=0;i<n;i++){
            int x=find(mix[i][0]);
            int y=find(mix[i][1]);
            bool check=1;
            for(int j=0;j<m;j++)
            {
                int a=find(danger[j][0]);
                int b=find(danger[j][1]);
                if((x==a and y==b)|| (x==b and y==a))
                {
                    check=0;
                    break;
                }
            }
            if(check)
            {
                Union(x,y);
                ans.push_back("Yes");
            }
            else ans.push_back("No");
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mix(n, vector<int>(2));
        vector<vector<int>> danger(m, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> mix[i][0] >> mix[i][1];
        }

        for (int i = 0; i < m; i++) {
            cin >> danger[i][0] >> danger[i][1];
        }

        auto ans = sol.avoidExplosion(mix, n, danger, m);
        for (auto &val : ans) cout << val << " ";
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends