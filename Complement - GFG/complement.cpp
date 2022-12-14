//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string s, int n) {
        int l = -1, r = -1, max = 0, sum = 0;
        for(int i=0,j=0;j<n;j++){
            sum += (s[j] == '0' ? 1 : -1);
            if(sum > max){
                max = sum; l = i; r = j;
            }
            if(sum < 0){
                i = j+1; sum = 0;
            }
        }
        if(l == -1) return {l};
        return {l+1,r+1}; // indexing is one based as per ques
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends