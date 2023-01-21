//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int a1 = countSetBit(a);
        int b1 = countSetBit(b);
        int ans = a;
        if(a1==b1) {
            
        } else if(a1<b1) {
            int idx=0;
            while(a1!=b1) {
                if(a%2==0) {
                    a1++;
                    ans+=(1<<idx);
                }
                idx++;
                a/=2;
            }
        } else {
            int idx=0;
            while(a1!=b1) {
                if(a%2==1) {
                    a1--;
                    ans-=(1<<idx);
                }
                idx++;
                a/=2;
            }
        }
        return ans;
    }
    
    int countSetBit(int n) {
        int ct=0;
        while(n>0) {
            if(n%2==1) ct++;
            n/=2;
        }
        return ct;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends