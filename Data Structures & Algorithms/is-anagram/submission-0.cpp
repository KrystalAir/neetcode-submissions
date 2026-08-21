class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> appear_s;
        unordered_map<char, int> appear_t;
        for (int i = 0; i < s.size(); i++)
            appear_s[s[i]]++;
        for (int i = 0; i < t.size(); i++)
            appear_t[t[i]]++;
        if (appear_s == appear_t)
            return true;
        return false;
    }
};
