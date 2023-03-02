using dd = double;
class Solution {
public:
    dd average(vector<int>& salary) {
        dd n = salary.size();
        dd ans=0;
        dd maxi=INT_MIN;
        dd mini=INT_MAX;
        for(auto &i:salary){
            if(i > maxi) maxi=i;
            if(i < mini) mini=i;
            ans += i;
        }
        return (ans-maxi-mini)/(n-2);
    }
};