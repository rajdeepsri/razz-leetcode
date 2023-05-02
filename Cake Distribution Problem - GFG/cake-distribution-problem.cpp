//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    #define ll long long
    int maxSweetness(vector<int>& sweetness, int N, int K) {
    // Write your code here.
        ll start = 1,end = 0,mid,ans; 
        for(auto c : sweetness){
            end += c;
        }
        while(start <= end){
            mid = start + (end - start) / 2;
            int c = 0,i = 0;
            while(i < N){
                ll s = 0;
                while(i < N && s < mid){
                    s += sweetness[i];
                    i++;
                }
                if(s >= mid){
                    c++;
                }
            }
            if(c >= K+1){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
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
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends