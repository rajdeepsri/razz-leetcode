//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    string secondSmallest(int S, int D){
        if(S>=9*D) return "-1";
        if(S == 1 || D == 1) return "-1";
        string mini;
        for(int i = 1; i<=9; i++){
            if(9*(D-1) >= S-i){
                S-=i;
                mini.push_back(i+'0');
                break;
            }
        }
        for(int i = D-1; i>0; i--){
            for(int j = 0; j<=9;j++){
                if(9*(i-1) >= (S-j)){
                    S-=j;
                    mini.push_back(j+'0');
                    break;
                }
            }
        }
        for(int i = mini.length()-2; i>=0; i--){
            if(mini[i] == '9') continue;
            mini[i]+=1;
            mini[i+1]-=1;
            break;
        }
        return mini; 
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends