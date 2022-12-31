//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends

void upper(char &c){
    c = c - 'a' + 'A';
}

string transform(string s)
{
    upper(s[0]);
    for(int i=0; i<s.size(); i++){
        if(s[i]==' ') upper(s[i+1]);
    }
    return s;
}