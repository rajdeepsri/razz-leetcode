//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool possible(int arr[], int mid ,int k, int n)
    {
        int parts = 0;
        long long sum = 0;
        for(int i = 0; i< n ; i++)
        {
            if( arr[i] > mid ) return false ;
            sum += arr[i] ;
            
            if( sum > mid )
            {
                sum = arr[i] ;
                parts++;
            } 
            else if( sum == mid )
            {
                sum = 0;
                parts++;
            }
        }
        if( sum != 0  )
        parts++;
        
        if( parts <= k ) 
        return true ;
        
        return false ;
    }
  public:
    int splitArray(int arr[] ,int n, int k) {
        // code here 
        
        
        long long int sum = 0;
        
        for(int i = 0; i< n ; i++)
        {
            sum += arr[i] ;
        }
        
        long long int lo = 1 , hi = sum ;
        int ans = INT_MAX ;
        
        while( lo <= hi)
        {
            long long int mid = (lo+hi)/2 ;
            
            if( possible(arr,mid,k,n))
            {
                ans = mid ; 
                hi = mid-1 ;
            } 
            else 
            {
                lo = mid+1 ;
            }
        }
        return ans ;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends