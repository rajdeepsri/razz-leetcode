//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

#define ll long long int
long long int no_of_subarrays(int n, vector<int> &arr) {
    vector<ll> vt;
    stack<ll>stk;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0) stk.push(0);
        else {
            vt.push_back(stk.size());
            stk =  stack<ll>();
        }
    }
    ll res = 0;
    vt.push_back(stk.size());
    for(auto x : vt){
        if(x==1) res += x;
        else res += (x*(x+1))/2;
    }
    return res;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}

// } Driver Code Ends