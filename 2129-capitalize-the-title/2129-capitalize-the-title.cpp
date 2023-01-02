class Solution {
public:
    string capitalizeTitle(string title) {
        int end =0,n= title.size();
        
        while(end < n)
        {
            int start = end;
            while(end < n && title[end] != 32)
            {
                title[end] = tolower(title[end]);
                end++;
            }
            if(end-start > 2){
                title[start] = toupper(title[start]);
            }
            end++;
        }
        return title;
    }
};