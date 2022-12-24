//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  long long int wineSelling(vector<int>& Arr, int N){

      long long int sum=0;

      vector<pair<int,int>> p;

      vector<pair<int,int>> n;

      for(int i=0;i<N;i++)

      {

          if(Arr[i]>0)

            p.push_back(make_pair(Arr[i],i));

          if(Arr[i]<0)

            n.push_back(make_pair(Arr[i],i));

      }

      int k=0;

      for(int i=0;i<p.size();i++)

      {

          for(int j=k;j<n.size();j++)

          {

              if(p[i].first>0)

              {

                  if(-1*n[j].first<p[i].first)

                  {

                      

                      p[i].first+=n[j].first;

                      

                      sum+=-1*n[j].first*abs(p[i].second-n[j].second);

                    //   cout<<sum<<endl;

                      n[j].first=0;

                      k++;

                      

                  }

                  else

                  {

                      n[j].first=n[j].first+p[i].first;

                      sum+=p[i].first*abs(p[i].second-n[j].second);

                      p[i].first=0;

                  }    

              }

              else

              {

                  break;

              }

          }

      }

      return sum;

  }


};



//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends