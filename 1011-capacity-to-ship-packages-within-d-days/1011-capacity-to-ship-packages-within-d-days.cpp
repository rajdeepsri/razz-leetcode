class Solution {
public:
    bool isPsbl(vector<int>& wt, int mid, int days){
        int d=1;
        int sum=0;
        for(auto &i:wt){
            sum += i;
            if(sum > mid){
                d++;
                sum=i;
            }
        }
        return d<=days;
    }
    
    int shipWithinDays(vector<int>& wt, int days) {
        int maxi=0, sum=0;
        for(auto &i:wt){
            maxi = max(maxi,i);
            sum += i;
        }
        
        int s=maxi;
        int e=sum;
        int ans=0;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isPsbl(wt, mid, days)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};