//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        bool isVowel(char &c){
            if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u') return true;
            return false;
        }
        string modify (string str)
        {
            int n = str.size();
            int s=0,e=n-1;
            
            while(s<e){
                if(isVowel(str[s]) && isVowel(str[e])) swap(str[s++], str[e--]);
                else if(isVowel(str[s]) && !isVowel(str[e])) e--;
                else if(!isVowel(str[s]) && isVowel(str[e])) s++;
                else{
                    s++;
                    e--;
                }
            }
            return str;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends