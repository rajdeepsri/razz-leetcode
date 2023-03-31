//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n){
            // Code here
            vector<int>temp,b;
            int i = 0;
            while(i < n){
                if(temp.size() == 0) temp.push_back(a[i++]);
                else{
                    if(temp.back() % 2 == a[i] % 2) temp.push_back(a[i++]);
                    else{
                        sort(temp.begin(),temp.end(), greater<int>());
                        b.insert(b.end(),temp.begin(),temp.end());
                        temp.clear();
                    }
                }
            }
            
            if(temp.size() > 0){
                sort(temp.begin(),temp.end(),greater<int>());
                b.insert(b.end(),temp.begin(),temp.end());
                temp.clear();
            }
            return b;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends