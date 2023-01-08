//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        /*
        //trying the brute force approach
        long long count = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++) if(abs(arr[i] - arr[j]) % k == 0) count++;
        }
        return count;
        */
        
        //we need a%k = b%k (think)
        vector<long long> freq(k,0);
        for(int i=0; i<n; i++) freq[arr[i]%k]++;
        
        long long ans = 0;
        for(int i=0; i<k; i++) ans+=(freq[i]*(freq[i]-1) / 2);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends