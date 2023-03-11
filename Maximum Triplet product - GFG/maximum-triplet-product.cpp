//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	long long first,second,third;
    	first=second=third=LLONG_MIN;
    	for(int i=0;i<n;i++)
    	{
    	    if(arr[i]>first)
    	    {
    	        third=second;
    	        second=first;
    	        first=arr[i];
    	    }
    	    else if(arr[i]>second)
    	    {
    	        third=second;
    	        second=arr[i];
    	    }
    	    else if(arr[i]>third)
    	        third=arr[i];
    	}
    	long long firstmin,secondmin;
    	firstmin=secondmin=LLONG_MAX;
    	for(int i=0;i<n;i++)
    	{
    	    if(arr[i]<firstmin)
    	    {
    	        secondmin=firstmin;
    	        firstmin=arr[i];
    	    }
    	    else if(arr[i]<secondmin)
    	        secondmin=arr[i];
    	}
    	long long ans1=first*second*third;
    	long long ans2=firstmin*secondmin*first;
    	if(ans1>=ans2)
    	return ans1;
    	else
    	return ans2;
    	
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends