//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	queue<string> q;
	vector<string> res;
	q.push("1");
	for(int i=1; i<=N; i++){
	    string temp = q.front();
	    res.push_back(temp);
	    q.pop();
	    q.push(temp+"0");
	    q.push(temp+"1");
	}
	return res;
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends