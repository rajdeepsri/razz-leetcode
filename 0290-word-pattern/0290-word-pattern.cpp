class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // convert s to a vector of strings
        // e.g. "dog cat cat dog" -> ["dog", "cat", "cat", "dog"]
        stringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }
        // the size of words needs to be same as that of pattern
        // e.g. words = ["xxx"], pattern = "xxx"
        if (words.size() != pattern.size()) {
            return false;
        }
        // char in pattern -> word
        // e.g. a -> dog
        // e.g. b -> cat
        unordered_map<char, string> m;
        set<string> used;
        // for each word in words ...
        for (int i = 0; i < words.size(); i++) {
            // check if map the pattern
            if (m.count(pattern[i])) {
                // if pattern[i] exists in the hashmap,
                // then we need to make sure that the word is correct
                if (m[pattern[i]] != words[i]) {
                    return false;
                }
            } else {
                // each word can only map to one pattern
                // e.g. pattern = "ab", s = "dog dog"
                if (used.find(words[i]) != used.end()) {
                    return false;
                }
                // if not, then map it   
                // e.g. a -> dog
                m[pattern[i]] = words[i];
                used.insert(words[i]);
            }
        }
        return true;
    }
};