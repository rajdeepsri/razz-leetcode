class Solution {
public:
    int sumSq(int n) {
        int sum = 0, tmp;
        while (n) {
            tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow, fast;
        slow = fast = n;
        do {
            slow = sumSq(slow);
            fast = sumSq(fast);
            fast = sumSq(fast);
        } while(slow != fast);
        
        return slow==1;
    }
};