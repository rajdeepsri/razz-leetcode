class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        if(k == 0) return ans;
        if(k == 1) return nums;
        deque<int> q;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            while (!q.empty() && q.front() <= i-k) q.pop_front(); //pop if element is outside the window
            while (!q.empty() && nums[q.back()] <= nums[i]) q.pop_back(); //

            q.push_back(i);
            if (i >= k-1) ans.push_back(nums[q.front()]);
        }
        return ans;    
    }
};