class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs){
        unordered_map<string, vector<string>> result;
        for (auto &s : strs){
            vector<int> alpha(26, 0);
            for (char c : s){
                alpha[c - 'a']++;
            }
            string key = to_string(alpha[0]);
            for (int i = 1; i < 26; i++){
                key += ',' + to_string(alpha[i]);
            }
            result[key].emplace_back(s);
        }
        vector<vector<string>> res;
        for (auto x : result){
            res.emplace_back(x.second);
        }
        return res;
    }
};
