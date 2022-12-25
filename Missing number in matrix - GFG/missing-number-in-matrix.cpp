//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {

        // Code here

        int zero_col = -1, zero_row = -1;

       // Find the Position of '0'

        for(int i=0;i<matrix.size(); i++){

            for(int j=0;j<matrix.size();j++){

                if(matrix[i][j] == 0){

                    zero_col = j;

                    zero_row = i;

                    break;

                }

            }

        }

       // Calculate Row Sum

        long long int row_sum = 0;

        if(zero_row != 0){

            for(int i=0;i<matrix.size();i++)

                row_sum += matrix[0][i];

        }

        else if(matrix.size() > 0){

            for(int i=0;i<matrix.size();i++)

                row_sum += matrix[1][i];

        }

        // Find the Replaceable Value for Zero

        long long int res = row_sum;

        for(int m=0;m<matrix.size();m++)

            res -= matrix[zero_row][m];

        if(res <= 0)

            return -1;

 

        // Check if all rows sum is same as row_sum

        for(int i=0;i<matrix.size();i++){

            long long int each_row_sum = 0;

            for(int j=0;j<matrix.size();j++){

                if(zero_row == i && zero_col == j)

                    each_row_sum += res;

                else

                    each_row_sum += matrix[i][j];

            }

            if(each_row_sum != row_sum)

                return -1;

        }

 

         // Check if all column sum is same as row_sum

        for(int i=0;i<matrix.size();i++){

            long long int each_col_sum = 0;

            for(int j=0;j<matrix.size();j++){

                if(zero_row == j && zero_col == i)

                    each_col_sum += res;

                else

                    each_col_sum += matrix[j][i];

            }

                

            if(each_col_sum != row_sum)

                return -1;

        }

 

        // Diagonal 1 sum equals row_sum

        long long int diag_sum = 0;

        for(int i=0;i<matrix.size();i++){

            if(zero_row == i && zero_col == i)

                diag_sum += res;

            else

                diag_sum += matrix[i][i];

        }

        if(diag_sum != row_sum)

            return -1;

 

        // Check Diagonal 2 sum equals row_sum

        diag_sum = 0;

        for(int i=0;i<matrix.size();i++){

            if(zero_row == matrix.size() - 1 - i && zero_col == i)

                diag_sum += res;

            else

                diag_sum += matrix[matrix.size()-1-i][i];

        }

        if(diag_sum != row_sum)

            return -1;

        return res;

    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends