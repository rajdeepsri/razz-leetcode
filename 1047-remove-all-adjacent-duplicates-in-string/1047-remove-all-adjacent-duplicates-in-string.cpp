class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for(int i=0; i<s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(s[i]==st.top()){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        s.erase();
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};