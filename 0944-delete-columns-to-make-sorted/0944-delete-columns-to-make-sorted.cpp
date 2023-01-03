class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans=0;
        int row=strs.size();
        int col=strs[0].size();
        
        for(int i=0; i<col; i++){
            for(int j=0; j<row-1; j++){
                if(strs[j][i] > strs[j+1][i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};