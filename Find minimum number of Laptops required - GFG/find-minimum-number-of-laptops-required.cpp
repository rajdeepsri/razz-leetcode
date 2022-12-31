//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
     int minLaptops(int n, int start[], int end[]) {

        // Code here

        vector<vector<int>>v;

        priority_queue<int,vector<int>,greater<int>>pq;

        

        for(int i=0;i<n;i++)

          v.push_back({start[i],end[i]});

          

        sort(v.begin(),v.end());

        

        int lap=0;

        

        for(int i=0;i<n;i++)

        {

            if(pq.size()!=0 && v[i][0]>=pq.top())

              pq.pop();

            else

              lap++;

              

            pq.push(v[i][1]);

        }

        

        return lap;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends