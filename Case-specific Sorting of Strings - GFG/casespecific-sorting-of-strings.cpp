//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n){
        string lower="";
        string upper="";
        string ans="";
        
        for(int i=0; i<n; i++){
            if(isupper(s[i])) upper += s[i];
            else lower += s[i];
        }
        
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());
        
        int idx_upper=0;
        int idx_lower=0;
        
        for(int i=0; i<n; i++){
            if(idx_upper < upper.size()){
                if(isupper(s[i])){
                    ans += upper[idx_upper];
                    idx_upper++;
                }
            }
            if(idx_lower < lower.size()){
                if(islower(s[i])){
                    ans += lower[idx_lower];
                    idx_lower++;
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
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends