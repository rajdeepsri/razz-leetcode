//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {

public:

    vector<int> findMaxRow(vector<vector<int>> mat, int N) {

        for(int i=0;i<N;i++){

            for(int j=0;j<N;j++){

                mat[i][j]+=mat[i][j-1];

            }

        }

        int row=-1,ans=0;

        for(int i=0;i<N;i++){

            if(mat[i][N-1]>ans) {

                ans=mat[i][N-1];

                row=i;

            }

        }

        vector<int>ans1;

        ans1.push_back(row);

        ans1.push_back(ans);

   return ans1; }

};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends