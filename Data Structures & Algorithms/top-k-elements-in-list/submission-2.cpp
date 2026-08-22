class Solution{
public:
    static bool cmp(pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int> &nums, int k){
        unordered_map<int, int> freq;
        for (int nums : nums)
            freq[nums]++;
        vector<pair<int,int>> bucket;
        for (auto it : freq)
            bucket.emplace_back(it.first, it.second);
        sort (bucket.begin(), bucket.end(), cmp);
        vector<int> res;
        for (int i = 0; i < k; i++)
            res.emplace_back(bucket[i].first);
        return res;
    }
};