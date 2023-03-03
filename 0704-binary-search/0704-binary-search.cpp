class Solution {
public:
    int search(vector<int>& arr, int key) {
        int n = arr.size();
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        
        while(s<=e){
            if(arr[mid]==key) return mid;
            else if(arr[mid]>key) e=mid-1;
            else s=mid+1;
            mid=s+(e-s)/2;
        }
        return -1;
    }
};