//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        string ans;
        for(int i=0; i<s.size(); i++){
            if(ans.size()!=0 && ans.back()==s[i]) ans.pop_back();
            else ans.push_back(s[i]);
        }
        if(ans.size()==0) return "-1";
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends