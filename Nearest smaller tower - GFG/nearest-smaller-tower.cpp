//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        int n=arr.size();
        stack<int>s1,s2;
        vector<int>v1,v2;
        s1.push(0);
        v1.push_back(-1);
        
        for(int i=1;i<n;i++){
           while(s1.empty()==false && arr[s1.top()]>=arr[i]){
               s1.pop();
           } 
           if(s1.empty()){
               v1.push_back(-1);
           }
           else{
               v1.push_back(s1.top());
           }
           s1.push(i);
        }
    
    
        s2.push(n-1);
        v2.push_back(-1);
        
        for(int i=n-2;i>=0;i--){
           while(s2.empty()==false && arr[s2.top()]>=arr[i]){
               s2.pop();
           } 
           if(s2.empty()){
               v2.push_back(-1);
           }
           else{
               v2.push_back(s2.top());
           }
           s2.push(i);
        }
        reverse(v2.begin(),v2.end());


        vector<int>ans;
         for(int i=0;i<n;i++){
             int p=(i-v1[i]);
             int q=(v2[i]-i);
             if(v1[i]==-1 && v2[i]==-1){
                 ans.push_back(-1);
             }
             else if(v1[i]==-1 || v2[i]==-1){
                 if(v1[i]==-1){
                 ans.push_back(v2[i]);
                 }
                 else{
                     ans.push_back(v1[i]);
                 }
             }
             else if(p==q){
               
                if(arr[v1[i]]<=arr[v2[i]]){
                    ans.push_back(v1[i]);
                }
                else{
                    ans.push_back(v2[i]);
                }
             }
             else{
                if(p<q){
                    ans.push_back(v1[i]);
                }
                else{
                    ans.push_back(v2[i]);
                }
             }
         }
         return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends