//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        if(M!=N) return 0;
        int a=0,b=0;
        for(int i=0; i<M; i++){
            if(S[i]=='A') a++;
            if(S[i]=='B') b++;
            if(T[i]=='A') a--;
            if(T[i]=='B') b--;
        }
        if(a!=0 || b!=0) return 0;
        
        int i=0,j=0;
        while(i<M && j<N){
            while(S[i]=='#' && i<M) i++;
            while(T[j]=='#' && j<N) j++;
            if(S[i]=='A'){
                if(T[j]=='A' && i>=j){
                    i++;
                    j++;
                }
                else return 0;
            }
            else if(S[i]=='B'){
                if(T[j]=='B' && i<=j){
                    i++;
                    j++;
                }
                else return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends