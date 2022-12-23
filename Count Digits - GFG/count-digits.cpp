//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int x=N,count=0;
        while(x!=0) {
            int r=x%10;//Evaluating reminder
            if(r!=0 && N%r==0)// checking if it is completely divisble
                count++;//increasing the count if completely divisible
                x=x/10;
        }
     return count;

    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends