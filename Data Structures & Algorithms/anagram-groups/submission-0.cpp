class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs){
        vector<vector<string>> result;
        map<array<int, 26>, vector<string>> groups;
        for (int i = 0; i < strs.size(); i++){
            array<int, 26> alpha{};
            for (int j = 0; j < strs[i].size(); j++){
                alpha[strs[i][j] - 'a']++;
            }
            groups[alpha].emplace_back(strs[i]);
        }
        for (auto &x : groups){
            result.emplace_back(x.second);
        }
        return result;
    }
};
