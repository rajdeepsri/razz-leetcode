//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){

        // code hereor

        int original_number=n;

        int storage=0;

         while(n>0)

          {

              int digit=n%10;

               storage+= (digit*digit*digit);

               n=n/10;

          }

          if(storage==original_number)

           {

               return "Yes";

               

           }

           else

           return "No";

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends