//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        int ans = INT_MIN;
        int mx = INT_MIN;
        int mn = INT_MAX;
        
        for(int i=0;i<n;i++) {
            mx = max(mx,arr[i]-i);
            mn = min(mn,arr[i]+i);
            
            int v1 = (arr[i]+i)-mn;
            int v2 = mx-(arr[i]-i);
            
            ans = max(ans,max(v1,v2));
        }
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends