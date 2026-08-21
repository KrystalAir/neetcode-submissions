class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs){
        unordered_map<string, vector<string>> ans;
        for (auto &s : strs){
            string key = s;
            sort(key.begin(), key.end());
            ans[key].emplace_back(s);
        }
        vector<vector<string>> res;
        for (auto &x : ans){
            res.emplace_back(x.second);
        }
        return res;
    }
};
