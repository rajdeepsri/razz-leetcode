//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  private:
    bool isSumOdd(int n){
        if(n>9){
            int num=n;
            int res=0;
            while(num != 0){
                res += num%10;
                num /= 10;
            }
            if(res%2==0) return false;
        }
        else{
            if(n%2==0) return false;
        }
        return true;
    }
public:
    string BalancedString(int N) {
        int num=N;
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        string ans="";
        
        //if number greater than 26, repeat instruction till size == 26
        while(num>26){
            int index=0;
            int count=26;
            while(count--) ans.push_back(alpha[index++]);
            num -= 26;
        }
        
        //number is even
        if(num%2==0){
            //put the aplhabets N/2 from start and end
            //from start
            int count=num/2;
            int index=0;
            while(count--) ans.push_back(alpha[index++]);
            
            //from end
            count=num/2;
            index=alpha.size() - count;
            while(count--) ans.push_back(alpha[index++]);
        }
        
        //number is odd
        else{
            //digits sum is odd
            if(isSumOdd(N)){
                //(n-1)/2 from start
                int count = (num-1)/2;
                int index=0;
                while(count--) ans.push_back(alpha[index++]);
                
                //(n+1)/2 from end
                count = (num+1)/2;
                index = alpha.size() - count;
                while(count--) ans.push_back(alpha[index++]);
            }
            
            //digits sum is even
            else{
                int count = (num+1)/2;
                int index=0;
                while(count--) ans.push_back(alpha[index++]);
                
                //(n+1)/2 from end
                count = (num-1)/2;
                index = alpha.size() - count;
                while(count--) ans.push_back(alpha[index++]);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends