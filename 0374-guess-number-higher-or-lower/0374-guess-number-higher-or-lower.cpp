/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start=1,end=n,mid = start + (end-start)/2;
        int ans;
        while(start<=end){
            if(guess(mid)==0) return mid;
            if(guess(mid)==1) start=mid+1;
            if(guess(mid)==-1) end=mid-1;
            mid = start + (end-start)/2;
        }
        return mid;
    }
};