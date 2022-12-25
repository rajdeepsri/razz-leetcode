//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)

    {

        //code here.

        int i=0;

        vector<int> nos;

        for(int i=0;i<n;i++){

            if(a[i]==key){

            nos.push_back(i);

            break;

         }

        }

        for(int i=n-1;0<=i;i--){

            if(a[i]==key){

            nos.push_back(i);

            return nos;

            break;

                

            }

        }

        

        

            nos.push_back(-1);

            nos.push_back(-1);

            return nos;

        

    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends