//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
     vector<int> getDistinctDifference(int N, vector<int> &A) {
        int a[N];
        int b[N];
        set<int> s;
        
        for(int i=0; i<N; i++){
            a[i] = s.size();
            s.insert(A[i]);
        }
        s.clear();
        
        for(int i=N-1; i>=0; i--){
            b[i] = s.size();
            s.insert(A[i]);
        }
        vector<int> v(N);
        for(int i=0; i<N; i++) v[i] = a[i] - b[i];
        return v;
     }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends