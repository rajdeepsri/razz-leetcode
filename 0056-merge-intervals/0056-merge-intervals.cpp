class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        // first sort the intervals
        sort(intervals.begin(), intervals.end());
        
        vector<int> tempInterval = intervals[0];
        for(auto &i : intervals){
            if(tempInterval[1] >= i[0]) tempInterval[1]=max(tempInterval[1], i[1]);
            else{
                ans.push_back(tempInterval);
                tempInterval = i;
            }
        }
        ans.push_back(tempInterval);
        return ans;
    }
};