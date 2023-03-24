//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
       int cnt=0;
       string ans="";
       string en="";
       int flag=0;
       map<char,int>mp;
       for(auto &l:s)mp[l]++;
       int i=0 , j=s.size()-1;
       
       while(i<=j){
           if(cnt%2==0 && mp[s[i]]>1){
               cnt++;
               mp[s[i++]]--;
           }
           else if(cnt%2 && mp[s[j]]>1){
               mp[s[j--]]--;
               cnt++;
           }else if(cnt%2==0 && mp[s[i]]==1){
               ans+=s[i++];
           }else if(cnt%2 && mp[s[j]]==1) en+=s[j--];
          
       }
       reverse(en.begin(),en.end());
       ans += en;
       if(cnt%2) reverse(ans.begin(),ans.end());
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends