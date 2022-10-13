class Solution {
public:
    bool isValid(string str) {
        stack<int> s;
        
        for(auto i : str){
            if(i=='{' or i=='[' or i=='(') s.push(i);
            else{
                if(!s.empty()){
                    if((i=='}' && s.top()=='{') || (i==']' && s.top()=='[') || (i==')' && s.top()=='(')){
                        s.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }
        if(s.empty()) return true;
        return false;
    }
};