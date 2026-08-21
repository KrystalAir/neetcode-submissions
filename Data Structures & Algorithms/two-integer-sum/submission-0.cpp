class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_multiset<int> seen;
        for (int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            auto it = seen.find(difference);
            if (it != seen.end()){
                for (int j = 0; j < nums.size(); j++){
                    if (nums[j] == difference){
                        vector<int> result;
                        result.emplace_back(i);
                        result.emplace_back(j);
                        sort(result.begin(), result.end());
                        return result;
                    }
                }
            }
            seen.emplace(nums[i]);
        }
    }
};
