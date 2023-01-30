//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{

  public:

    // please think the variables properly

    pair<int,bool> dfs (int i, int par, vector<int> graph[]) {

        int ans = 0;

        bool check = false;

        int child = 0;

        for(auto x: graph[i]) {

            if(x!=par) {

                child ++;

                auto temp = dfs(x,i,graph);

                ans += temp.first;

                if(temp.second == false) {

                    check = true;

                }

            }

        }

        if(check == true) {

            ans ++;

        }

        return {ans,check};

    }

    int countVertex(int n, vector<vector<int>>edges) {

        // code here

        vector<int> graph[n];

        for(auto x: edges) {

            graph[x[0] - 1].push_back(x[1] - 1);

            graph[x[1] - 1].push_back(x[0] - 1);

        }

        auto final = dfs(0,-1,graph);

        return final.first;

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
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends