//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
            int cntl = 0,cntr = 0;//one from left to right
            int strt = -1,strt2 = n;//another from right to left
            int ans = 0;
           for(int i = 0;i<n;i++){
               cntl += arr[i]<0;
               cntr += arr[n-i-1]<0;
               if(arr[i]==0){ cntl = 0;strt = i;}
               if(arr[n-i-1]==0){ cntr = 0; strt2 = n-i-1;}
               
               if(cntl%2==0) ans = max(ans,i-strt);
               if(cntr%2==0) ans = max(ans,strt2-n+i+1);
           }
           return ans;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends