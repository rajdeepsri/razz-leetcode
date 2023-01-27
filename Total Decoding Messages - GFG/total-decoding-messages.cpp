//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){

     // Code here

     

     if( str == "" ) return 1 ;

     if( str[0] == '0' ) return 0 ;

     

     int n = str.size() ;

     // base case 

     if( n == 1 ) return 1 ;

     

     vector<long long int >dp( n , 0  ) ;

     dp[0] = 1 ;

     int t = stoi(str.substr( 0 , 2 )) ;

    

     if( t <= 26 && t != 10 && t != 20 )

     {

         dp[1] = 2 ;

     }

     else{

         dp[1] = 1 ;

     }

     

     int m = pow( 10 , 9 ) + 7 ;

     

     for( int i = 2 ; i < str.size() ; i++ )

     {

         // invalid case 

         if( str[i] == '0' && str[i-1] == '0' )

         {

             return 0 ;

         }

         else if( str[i] == '0' && str[i-1] != '0' )

         { 

             if(str[i-1] == '1' || str[i-1] == '2')

             {

                 dp[i] = dp[i-2]%m  ;

             }

             

         }

         else if( str[i] != '0' && str[i-1] == '0' )

         {

             dp[i] = dp[i-1]%m  ;

         }

         else{

             if(stoi(str.substr(i-1 , 2 )) <= 26 )

             {

                 dp[i] = (dp[i-1] + dp[i-2])%m  ;

                 

             }

             else{

                 dp[i] = dp[i-1]%m ;

             }

         }

     }

     

     return dp[n-1]%m ;

     

 }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends