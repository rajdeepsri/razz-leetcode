class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image[0].size();
        
        for(int i=0; i<n; i++){
            int s=0, e=n-1;
            while(s<=e){
                if(image[i][s]^image[i][e]==1){
                    s++;
                    e--;
                    continue;
                }
                else{
                    image[i][s] ^= 1;
                    image[i][e] = image[i][s];
                    s++;
                    e--;
                }
            }
        }
        return image;
    }
};