//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int, int> mp; for(auto it: nums) mp[it % k]++;
        for(int rem = 0; rem <= k / 2; rem++)
            if(((rem == 0 || 2 * rem == k) && mp[rem] % 2 == 1) ||
            (rem != 0 && 2 * rem != k && mp[rem] != mp[k - rem])) 
                return false;
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends