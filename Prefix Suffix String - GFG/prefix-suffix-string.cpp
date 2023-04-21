//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class TrieNode
{
    public: 
    char data ;
    TrieNode* children[26] ;
    bool ister; 
    TrieNode(char ch )
    {
        data =ch; 
        for(int i = 0 ;i<26; i++)
        {
            children[i] = NULL ;
        }
        ister = false;
    }
    
    
};

class Solution{
public:
      TrieNode* root = new TrieNode('0') ;
      
      void insertutil(TrieNode*  root , string  word )
      {
          
          if(word.length()==0)
          {
              root->ister = true; 
              return ; 
          }
          
          TrieNode* child; 
          
          //present
          if(root->children[word[0]-'a'])
          {
              child = root->children[word[0]-'a']  ;
          }
          else // absent
          {
              child = new TrieNode(word[0]);
              root->children[word[0]-'a'] = child ; 
          }
           
          insertutil(child , word.substr(1)) ;
          
      }
      
      bool cal(TrieNode* root , string word , int ind  )
      {
          
          if(ind==word.length())
          {
              return true ; 
          }
          
          
          bool ans = false ;
          
        
                  if(root->children[word[ind]-'a']==NULL)
                  {
                      return false ;
                   
                  }
                  else
                  {
                      ans|=cal(root->children[word[ind]-'a'] ,word, ind+1  ) ;
                  }
        return ans ;   
      }
      
      
      
      
      
    int prefixSuffixString(vector<string> s1,vector<string> s2){
        // Code here
        
        for(auto &  it: s1)
         {
             insertutil(root , it);
             reverse(begin(it), end(it)) ; 
             insertutil(root , it);
             
         }
         
         int ans = 0 ;
         
         for(auto & it : s2 )
         {
             string s = it ;
             reverse(begin(s), end(s)) ;
             if(cal(root , it ,0  ) || cal(root, s, 0))
             ans++ ;
            //  cout << ans << endl ;
             
         }
         return ans ; 
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends