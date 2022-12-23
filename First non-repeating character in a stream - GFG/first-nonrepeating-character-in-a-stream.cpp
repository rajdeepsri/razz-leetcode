//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    int arr[27]={0};
		    string ans="";
		    queue<int> q;
		    
		    for(int i=0; i<s.size(); i++){
		        arr[s[i]-'a']++; //increase count
		        q.push(s[i]);
		        
		        while(!q.empty()){
		            //repeating
		            if(arr[q.front()-'a'] > 1) q.pop();
		            //non repeating
		            else
		            {
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()) ans.push_back('#');
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends