//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){

        int m=matrix.size();
        int n=matrix[0].size();
        int i=0;
        int j=0;
        int r[]={-1,0,1,0};
        int c[]={0,1,0,-1};
        int x=r[1];
        int y=c[1];
        pair<int,int> p;
        while(i<m&&i>=0&&j>=0&&j<n){
            p.first=i;
            p.second=j;
            if(matrix[i][j]==0){
                if(x==r[1]&&y==c[1]){
                    i=i+x;
                    j=j+y;
                }
                else if(x==r[2]&&y==c[2]){
                    i=i+x;
                    j=j+y;
                }
                else if(x==r[3]&&y==c[3]){
                    i=i+x;
                    j=j+y;
                }
                else if(x==r[0]&&y==c[0]){
                    i=i+x;
                    j=j+y;
                }
            }
            else if(matrix[i][j]==1){
                matrix[i][j]=0;
                if(x==r[1]&&y==c[1]){
                    i=i+r[2];
                    j=j+c[2];
                    x=r[2];
                    y=c[2];
                }
                else if(x==r[0]&&y==c[0]){
                    i=i+r[1];
                    j=j+c[1];
                    x=r[1];
                    y=c[1];
                }
                else if(x==r[2]&&y==c[2]){
                    i=i+r[3];
                    j=j+c[3];
                    x=r[3];
                    y=c[3];
                }
                else if(x==r[3]&&y==c[3]){
                    i=i+r[0];
                    j=j+c[0];
                    x=r[0];
                    y=c[0];
                }
            }
        }
        return p;
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends