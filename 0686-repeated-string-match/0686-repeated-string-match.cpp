class Solution {
public: 
    
    // s --> text
    // p --> pattern
    int KMP_search(string s, string p)
    {
        int m=s.size();
        int n=p.size();
        
        // longest proper prefix : longest "prefix" is same as "suffix" 
        vector<int>lps(n,0);
        int len=0, i=1;
        
        // Dry run for  pattern = "abcabcd", then you will understand clearly how we will create "LPS" array
        // pattern   ----------> a b c a b c d
        // "lps" array comes --> 0 0 0 1 2 3 0
        while(i<n)
        {
            // if match happen
            if(p[len]==p[i]){ 
                len++;
                lps[i]=len;
                i++;
            }
            else
            {
                if(len!=0) // abhi piche nahi jaa sakte
                {
                    len=lps[len-1];
                }
                else // len == 0, isse picche nahi jaa sakte 
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
        
        // Now Searching part starts from here
        i=0;
        int j=0;
        while(i<m and j<n)
        {
            // if match happen then move both i and j
            if(s[i] == p[j])
            {
                i++;
                j++;
                if(j==n){ // we have an answer
                    return true;
                }
            }
            else
            {
                if(j!=0)
                {
                    j = lps[j-1];
                }
                else
                {
                    i++;
                }
            }
        }
        return false;
    }
    
    int repeatedStringMatch(string A, string B) 
    {
        // edge cases
        if(A == B) return 1;
        
        int count = 1;
        string source = A;
        while(source.size() < B.size()){
            source+=A;
            count++;
        }
        
        // edge cases
        if(source == B) 
            return count;
        
        if(KMP_search(source,B) == 1) 
            return count;
        
        if(KMP_search(source+A,B) == 1) 
            return count+1;
        return -1;
    }
};