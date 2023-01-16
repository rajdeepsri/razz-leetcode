class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=INT_MIN;
        int n=candies.size();
        vector<bool> res;

        for(auto &i:candies) maxi=max(maxi,i);

        for(auto &c : candies){
            if((c+extraCandies)>=maxi) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};