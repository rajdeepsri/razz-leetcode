//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

#define ll long long
class Solution{
    public:
    long long  maximizeMinHeight(int n, int k, int w, vector <int> &a) {
    	ll l = *min_element(a.begin(), a.end()) + 1, r = l + k, ans = l - 1;
    	auto works = [&](ll mnheight) {
    		ll days = 0, prefsum = 0;
    		vector<ll>dp(n + 1);
    		for (int i = 0; i < n; i++) {
    			prefsum += dp[i];
    			int height = a[i] + prefsum;
    			if (height < mnheight) {
    				int add = mnheight - height;
    				days += add;
    				prefsum += add;
    				dp[i] += add;
    				dp[min(n, i + w)] -= add;
    			}
    		}
    		return days <= k;
    	};
    
    	while ( l <= r) {
    		int guessheight = (l + r) / 2;
    		if (works(guessheight)) {
    			ans = guessheight;
    			l = guessheight + 1;
    		}
    		else
    			r = guessheight - 1;
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
        int n,k,w;
        cin>>n>>k>>w;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        cout<<s.maximizeMinHeight(n,k,w,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends