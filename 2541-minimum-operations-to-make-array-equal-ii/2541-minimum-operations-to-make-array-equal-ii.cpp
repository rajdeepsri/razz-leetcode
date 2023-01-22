using ll = long long;
class Solution {
public:
    ll minOperations(vector<int>& a, vector<int>& b, int k) {
        ll cntPlus=0;
        ll cntDiff=0;
        for(ll i=0; i<a.size(); i++){
            if(k==0){
                if(a[i]!=b[i]) return -1;
            }
            else{
                if(a[i]==b[i]) continue;
                if((abs(a[i] - b[i])) % k != 0) return -1;
                if(a[i] > b[i]) cntDiff += abs(a[i]-b[i])/k;
                if(a[i] < b[i]) cntPlus += abs(a[i]-b[i])/k;
            }
        }
        if(cntPlus!=cntDiff && k!=0) return -1;
        return cntPlus;
    }
};