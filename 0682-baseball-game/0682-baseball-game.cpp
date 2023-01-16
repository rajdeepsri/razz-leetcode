class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int> res;
        int sum=0;
        for(auto &i:op){
            int n = res.size();
            if(i=="+") res.push_back(res[n-1] + res[n-2]);
            else if(i=="D") res.push_back(res[n-1] * 2);
            else if(i=="C") res.pop_back();
            else res.push_back(stoi(i));
        }
        for(auto &i:res) sum+=i;
        return sum;
    }
};