class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int,int>> temp;
        for(int i=0; i<score.size(); i++){
            temp.push_back({score[i][k], i});
        }
        
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());
        vector<vector<int>> ans;
        
        for(auto &i : temp){
            ans.push_back(score[i.second]);
        }
        return ans;
    }
};