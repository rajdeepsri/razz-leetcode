class Solution {
public:
    vector<double> convertTemperature(double c) {
        vector<double> ans;
        ans.push_back(c+273.15);
        ans.push_back(c*1.80+32.00);
        return ans;
    }
};