//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string &s){
        // code here 
        int maxi=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i]=='O')
            v.push_back(i);
        }
        for(int i=0;i<n;i++){
            auto it1=lower_bound(v.begin(),v.end(),i);
            int firstOrangeIndex=it1-v.begin();
            int lastOrangeIndex=firstOrangeIndex+m;
            if(it1==v.end() or lastOrangeIndex>v.size()-1){
                maxi=max(maxi,n-i);
                break;
            }
            maxi=max(maxi,v[lastOrangeIndex]-i);
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends