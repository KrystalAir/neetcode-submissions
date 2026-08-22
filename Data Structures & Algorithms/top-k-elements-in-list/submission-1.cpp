class Solution{
public:
    vector<int> topKFrequent(vector<int> &nums, int k){
        if (nums.size() == 1)
            return nums;
        vector<vector<int>> bucket(nums.size() + 1);
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        for (auto &x : freq){
            bucket[x.second].emplace_back(x.first);
        }
        vector<int> res;
        for (int i = nums.size(); i >= 1; i--){
            for (int j = bucket[i].size() - 1; j >= 0; j--){
                res.emplace_back(bucket[i][j]);
                if (res.size() == k)
                    return res;
            }
        }
        return res;
    }
};