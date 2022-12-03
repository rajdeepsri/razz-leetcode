class Solution {
public:
    static bool cmp(pair<char,int>&a, pair<char,int>&b)
    {
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        vector<pair<char,int>> v;
        string ans="";
        for(char c:s){
            mp[c]++;
        }
        for(auto i:mp){
            v.push_back(make_pair(i.first,i.second));
        }
        sort(v.begin(),v.end(),cmp);
        for(auto &i:v){
            while(i.second>0){
                ans += i.first;
                i.second--;
            }
        }
        return ans;
    }
};