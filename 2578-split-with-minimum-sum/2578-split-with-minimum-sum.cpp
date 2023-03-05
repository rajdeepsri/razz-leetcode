class Solution {
public:
    int splitNum(int n) {
        vector<int> temp;
        while(n!=0){
            temp.push_back(n%10);
            n = n/10;
        }
        
        sort(temp.begin(), temp.end());
        int n1=0, n2=0;
        
        for(int i = 0; i < temp.size(); i = i+2){ n1 = n1*10 + temp[i]; }
        for(int i = 1; i < temp.size(); i = i+2){ n2 = n2*10 + temp[i]; }
        return n1+n2;
    }
};