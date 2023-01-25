//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void solve(string s,int &op,int &fl)
    {
        if(!s.length())return ;
            if(fl==0 && s.substr(0,s.length()/2)==s.substr(s.length()/2))
            {
                fl=1;
                op+=s.length()/2+1;
                return ;
            }
            else
            {
                op++;
                solve(s.substr(0,s.length()-1),op,fl);
            }
    }
    int minOperation(string s) {
        int op=0,fl=0;
        solve(s,op,fl);
        return op;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends