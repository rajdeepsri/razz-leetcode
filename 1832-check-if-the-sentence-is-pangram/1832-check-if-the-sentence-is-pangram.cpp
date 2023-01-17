class Solution {
public:
    bool checkIfPangram(string sen) {
        int arr[26]={0};
        
        for(int i=0; i<sen.size(); i++) arr[sen[i]-'a']++;
                
        for(int i=0; i<26; i++){
            if(arr[i]==0) return false;
        }
        return true;
    }
};