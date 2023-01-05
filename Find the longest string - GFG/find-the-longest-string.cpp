//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words){
        sort(words.begin(),words.end());

        unordered_set<string>s(words.begin(),words.end());
        string ans="";

        for(string st:words){
            string temp="";
            for(char c:st){
                temp+=c;
                if(s.find(temp)==s.end())
                    break;
            }
            if(temp==st && temp.size()>ans.size()) ans=temp;
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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends