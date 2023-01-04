class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        
        //record frequency of each element
        for(int i=0; i<tasks.size(); i++){
            mp[tasks[i]]++;
        }
        
        //count to store rounds
        int count=0;
        
        //iterating the map
        for(auto i:mp){
            while(i.second>4){
                i.second -=3;
                count++;
            }
            if(i.second==1) return -1;
            if(i.second==2 || i.second==3) count++;
            if(i.second==4) count+=2;
        }
        return count;
    }
};