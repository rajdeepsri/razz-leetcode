class Solution {
public:
    int partitionString(string s) {
        int pos[26] = {}, res = 0, last = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (pos[s[i] - 'a'] >= last) {
                ++res;
                last = i + 1;
            }
            pos[s[i] - 'a'] = i + 1;
        }
        return res;        
    }
};