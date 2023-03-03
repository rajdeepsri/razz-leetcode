// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1, end=n,mid = start +(end-start)/2;
        
        while(start<=end){
            if(isBadVersion(mid)){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid = start +(end-start)/2;
        }
        return mid;
    }
};